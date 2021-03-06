# Connections between the motor driver chip L293D and the Arduino/Wheels/Battery Pack

<img src="/Images/L293D-Pinout.png" width=500 align=right>
<img src="/Images/Arduino-Uno-Pinout.png" width=480 align=right>

<table style="width: 462px; height: 743px;">
<tbody>
<tr style="height: 35px;">
<td style="width: 188.5px; text-align: center; height: 35px;">
<p><strong>Driver L2930</strong></p>
</td>
<td style="width: 258.7px; text-align: center; height: 35px;">
<p><strong>Arduino/Wheels/Battery Pack</strong></p>
</td>
</tr>
<tr style="height: 33px;">
<td style="width: 188.5px; text-align: center; height: 33px;">
<p><span style="font-weight: 400;">Enable 1,2&nbsp;</span></p>
</td>
<td style="width: 258.7px; text-align: center; height: 33px;">
<p><span style="font-weight: 400;">D6</span></p>
</td>
</tr>
<tr style="height: 45px;">
<td style="width: 188.5px; text-align: center; height: 45px;">
<p><span style="font-weight: 400;">Input 1(Forward)</span></p>
</td>
<td style="width: 258.7px; text-align: center; height: 45px;">
<p><span style="font-weight: 400;">D4</span></p>
</td>
</tr>
<tr style="height: 45px;">
<td style="width: 188.5px; text-align: center; height: 45px;">
<p><span style="font-weight: 400;">Output 1 (Forward)</span></p>
</td>
<td style="width: 258.7px; text-align: center; height: 45px;">
<p><span style="font-weight: 400;">Left wheel</span></p>
</td>
</tr>
<tr style="height: 45px;">
<td style="width: 188.5px; text-align: center; height: 45px;">
<p><span style="font-weight: 400;">Ground</span></p>
</td>
<td style="width: 258.7px; text-align: center; height: 45px;">
<p><span style="font-weight: 400;">Ground</span></p>
</td>
</tr>
<tr style="height: 45px;">
<td style="width: 188.5px; text-align: center; height: 45px;">
<p><span style="font-weight: 400;">Ground</span></p>
</td>
<td style="width: 258.7px; text-align: center; height: 45px;">
<p><span style="font-weight: 400;">Ground</span></p>
</td>
</tr>
<tr style="height: 45px;">
<td style="width: 188.5px; text-align: center; height: 45px;">
<p><span style="font-weight: 400;">Output 2 (Backward)</span></p>
</td>
<td style="width: 258.7px; text-align: center; height: 45px;">
<p><span style="font-weight: 400;">Left wheel</span></p>
</td>
</tr>
<tr style="height: 45px;">
<td style="width: 188.5px; text-align: center; height: 45px;">
<p><span style="font-weight: 400;">Input 2 (Backward)</span></p>
</td>
<td style="width: 258.7px; text-align: center; height: 45px;">
<p><span style="font-weight: 400;">D3</span></p>
</td>
</tr>
<tr style="height: 45px;">
<td style="width: 188.5px; text-align: center; height: 45px;">
<p><span style="font-weight: 400;">Vcc 2</span></p>
</td>
<td style="width: 258.7px; text-align: center; height: 45px;">
<p><span style="font-weight: 400;">Vin + Battery Positive End</span></p>
</td>
</tr>
<tr style="height: 45px;">
<td style="width: 188.5px; text-align: center; height: 45px;">
<p><span style="font-weight: 400;">Enable 3,4</span></p>
</td>
<td style="width: 258.7px; text-align: center; height: 45px;">
<p><span style="font-weight: 400;">D5</span></p>
</td>
</tr>
<tr style="height: 45px;">
<td style="width: 188.5px; text-align: center; height: 45px;">
<p><span style="font-weight: 400;">Input 3 (Backward)</span></p>
</td>
<td style="width: 258.7px; text-align: center; height: 45px;">
<p><span style="font-weight: 400;">D7</span></p>
</td>
</tr>
<tr style="height: 45px;">
<td style="width: 188.5px; text-align: center; height: 45px;">
<p><span style="font-weight: 400;">Output 3 (Backward)</span></p>
</td>
<td style="width: 258.7px; text-align: center; height: 45px;">
<p><span style="font-weight: 400;">Right Wheel</span></p>
</td>
</tr>
<tr style="height: 45px;">
<td style="width: 188.5px; text-align: center; height: 45px;">
<p><span style="font-weight: 400;">Ground</span></p>
</td>
<td style="width: 258.7px; text-align: center; height: 45px;">
<p><span style="font-weight: 400;">Ground</span></p>
</td>
</tr>
<tr style="height: 45px;">
<td style="width: 188.5px; text-align: center; height: 45px;">
<p><span style="font-weight: 400;">Ground</span></p>
</td>
<td style="width: 258.7px; text-align: center; height: 45px;">
<p><span style="font-weight: 400;">Ground</span></p>
</td>
</tr>
<tr style="height: 45px;">
<td style="width: 188.5px; text-align: center; height: 45px;">
<p><span style="font-weight: 400;">Output 4 (Forward)</span></p>
</td>
<td style="width: 258.7px; text-align: center; height: 45px;">
<p><span style="font-weight: 400;">Right Wheel</span></p>
</td>
</tr>
<tr style="height: 45px;">
<td style="width: 188.5px; text-align: center; height: 45px;">
<p><span style="font-weight: 400;">Input 4 (Forward)</span></p>
</td>
<td style="width: 258.7px; text-align: center; height: 45px;">
<p><span style="font-weight: 400;">D8</span></p>
</td>
</tr>
<tr style="height: 45px;">
<td style="width: 188.5px; text-align: center; height: 45px;">
<p><span style="font-weight: 400;">Vcc 1</span></p>
</td>
<td style="width: 258.7px; text-align: center; height: 45px;">
<p><span style="font-weight: 400;">5V</span></p>
</td>
</tr>
</tbody>
</table>



# Connections between the Arduino Uno and the HC-SR04 Ultrasonic Sensor

<img src="/Images/HC-SR04-Ultrasonic-Sensor-Pinout.jpeg" width=450 align=right>

<table style="width: 359px;">
<tbody>
<tr>
<td style="width: 140.55px; text-align: center;">
<p><strong>Ultrasonic Sensor</strong></p>
</td>
<td style="width: 203.65px; text-align: center;">
<p><strong>Arduino</strong></p>
</td>
</tr>
<tr>
<td style="width: 140.55px; text-align: center;">
<p><span style="font-weight: 400;">Vcc</span></p>
</td>
<td style="width: 203.65px; text-align: center;">
<p><span style="font-weight: 400;">Vin + Battery Positive End</span></p>
</td>
</tr>
<tr>
<td style="width: 140.55px; text-align: center;">
<p><span style="font-weight: 400;">Trigger Pin</span></p>
</td>
<td style="width: 203.65px; text-align: center;">
<p><span style="font-weight: 400;">D9</span></p>
</td>
</tr>
<tr>
<td style="width: 140.55px; text-align: center;">
<p><span style="font-weight: 400;">Echo Pin</span></p>
</td>
<td style="width: 203.65px; text-align: center;">
<p><span style="font-weight: 400;">D10</span></p>
</td>
</tr>
<tr>
<td style="width: 140.55px; text-align: center;">
<p><span style="font-weight: 400;">Ground</span></p>
</td>
<td style="width: 203.65px; text-align: center;">
<p><span style="font-weight: 400;">Ground</span></p>
</td>
</tr>
</tbody>
</table>
<p>&nbsp;</p>