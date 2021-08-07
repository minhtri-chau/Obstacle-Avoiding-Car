//define sensor pins
const int trigPin = 9;
const int echoPin = 10;
bool turnDir;

//define LED pins
const int redPin = 12;
const int greenPin = 11;
const int bluePin = 2;

float distance;
float lastDistance = 0;
float distanceDelta; //in centimeters
float duration;
int turningDuration = 250; //in miliseconds

//define pins right wheel
int motorSpeedPinR = 5;
int motorForwardPinR = 8;
int motorBackwardPinR = 7;

//define pins left wheel
int motorSpeedPinL = 6;
int motorForwardPinL = 4;
int motorBackwardPinL = 3;

//create variable for data to be used right
int motorSpeedValR = 0;
bool motorForwardR = false;
bool motorBackwardR = false;

//create variable for data to be used left
int motorSpeedValL = 0;
bool motorForwardL = false;
bool motorBackwardL = false;

bool backUpAndTurn = false;
long timer = 0;

void setup() {
  pinMode(motorSpeedPinR, OUTPUT);
  pinMode(motorForwardPinR, OUTPUT);
  pinMode(motorBackwardPinR, OUTPUT);
  pinMode(trigPin, OUTPUT);

  pinMode(motorSpeedPinL, OUTPUT);
  pinMode(motorForwardPinL, OUTPUT);
  pinMode(motorBackwardPinL, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  Serial.begin(9600);
  digitalWrite(redPin, HIGH);
  delay(500);
  digitalWrite(redPin, LOW);
  delay(500);
  digitalWrite(greenPin, HIGH);
  delay(500);
  digitalWrite(greenPin, LOW);
  delay(500);
  digitalWrite(bluePin, HIGH);
  delay(500);
  digitalWrite(bluePin, LOW);
  delay(500);
}

void loop() {
  distance = distanceDetect();
  distanceDelta = abs(distance - lastDistance);
  lastDistance = distance;

  //backup and turn sequence start when approach obstacle or when the car stop moving (determined by distanceDelta)
  if (distance <= 20 || (distanceDelta <= 0.2 && distance < 1180)) {
    Serial.print("Approaching obstacle or Car not moving. Starting back up sequence!");
    Serial.print("DistanceDelta: ");
    Serial.println(distanceDelta);   
    backUpAndTurn = true;
  }

  //start the backup and turn sequence
  if (backUpAndTurn){ 
    //if ((distance >= 30) || ((distance >= 20 && distance <= 30) && (distanceDelta <= 0.5))) 
    //when the car backup long enough and is moving, then the turing sequence starts
    if ((distance >= 30 && distanceDelta > 0.2) || ((distance <= 30) && distanceDelta < 0.2)) {
      //start the turning sequence after the backup sequence or when backing up fails (car not moving)
      turnDir = random(0,2);
      if (turnDir) {
        leftTurn();
        updateMotors();
        delay(turningDuration);
      }
      else {
        rightTurn();
        updateMotors();
        delay(turningDuration);
      }
    //Back Up and Turn Sequence Complete
    backUpAndTurn = false;
    //distance = distanceDetect();
    }
    else {
      //Backing up
      backUp();
      updateMotors();
      //when the motor stop moving, backup even more to get out of whatever situation that is
      if (distanceDelta <= 0.2) {
        delay(500);
      }
    }
  }
  else {
    moveForward();
    updateMotors();
  }
}


float distanceDetect(){
  //shoot out ultrasonic wave
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  //detect the time during which the ultrasonic wave travels
  duration = pulseIn(echoPin, HIGH);
  //calculate the distance from the obstacle using the speed of sound
  float range = (duration*.0343)/2;
  Serial.print("Distance: ");
  Serial.println(range);   
  delay(100);
  return range;
}


float distanceDiff(){
  float lastDistance = distanceDetect();
  delay(100);
  float curDistance = distanceDetect();
  float distanceChange = abs(curDistance - lastDistance);
  return distanceChange;
}


void leftTurn(){
  //turn on the LED to indicate left turn
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, HIGH);

  //set the right wheels forward and left wheel backward for the left turn sequence
  motorForwardR = true;
  motorBackwardL = true;
  motorBackwardR = false;
  motorForwardL = false;

  Serial.println("Turning left!");

  //set the turning speed of the motor
  motorSpeedValR = 160;
  motorSpeedValL = 160;
}


void rightTurn(){
  //turn on the LED to indicate right turn
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, HIGH);
  digitalWrite(bluePin, HIGH);

  //set the left wheels forward and right wheel backward for the left turn sequence
  motorForwardL = true;
  motorBackwardR = true;
  motorBackwardL = false;
  motorForwardR = false;

  Serial.println("Turning right!");

  //set the turning speed of the motor
  motorSpeedValR = 160;
  motorSpeedValL = 160;
}


void backUp(){
  //turn on the LED to indicate backing up
  digitalWrite(bluePin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(redPin, HIGH);

  //setting both the right and left wheel to spin backward for backup
  motorBackwardR = true;
  motorBackwardL = true;
  motorForwardR = false;
  motorForwardL = false;
  
  Serial.println("Backing up!");
  
  //set the spinning speed of the motor    
   motorSpeedValR = 160;
   motorSpeedValL = 160;
}


void moveForward(){
  //forward (normal operation)
  //turn on the LED to indicate moving forward
  digitalWrite(bluePin, LOW);
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, HIGH);

  //setting both the right and left wheel to spin forward
  motorForwardR = true;
  motorBackwardR = false;
  motorForwardL = true;
  motorBackwardL = false;

  Serial.println("Moving Forward!");

  //set the spinning speed of the motor    
  motorSpeedValR = 200;
  motorSpeedValL = 172;
}


void updateMotors(){
  //using digitalwrite for direction pins
  digitalWrite(motorForwardPinR, motorForwardR);
  digitalWrite(motorBackwardPinR, motorBackwardR);
  
  //using digitalwrite for direction pins
  digitalWrite(motorForwardPinL, motorForwardL);
  digitalWrite(motorBackwardPinL, motorBackwardL);

  

  //using analogWrite for motor speed pins
  analogWrite(motorSpeedPinR, motorSpeedValR);
  
  //using analogWrite for motor speed pins
  analogWrite(motorSpeedPinL, motorSpeedValL);
  
}
