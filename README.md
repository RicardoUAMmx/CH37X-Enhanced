## Commands

<table>
  <thead>
    <tr>
      <th>Code</th>
      <th>Command Name</th>
      <th>Input Data</th>
      <th>Output Data</th>
      <th>Functions</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td rowspan="2">0x01</td>
      <td rowspan="2">GET_IC_VER</td>
      <td></td>
      <td rowspan="2">version number</td>
      <td rowspan="2">obtain chip and firmware version number</td>
    </tr>
    <tr>
      <td></td>
      <td></td>
    </tr>
    <tr>
      <td rowspan="2">0x02</td>
      <td rowspan="2">SET_BAUDRATE</td>
      <td>detach freq coef</td>
      <td rowspan="2"><strong>Wait for 1ms</strong>: operation status</td>
      <td rowspan="2">Set serial communication baud rate</td>
    </tr>
    <tr>
      <td>detach freq const</td>
      <td></td>
    </tr>
    <tr>
      <td rowspan="2">0x03</td>
      <td rowspan="2">ENTER_SLEEP</td>
      <td></td>
      <td rowspan="2"></td>
      <td rowspan="2">Go to low power and suspending</td>
    </tr>
    <tr>
      <td></td>
      <td></td>
    </tr>
    <tr>
      <td rowspan="2">0x05</td>
      <td rowspan="2">RERET_ALL</td>
      <td></td>
      <td rowspan="2"><strong>Wait for 40ms</strong></td>
      <td rowspan="2">Execute hardware reset</td>
    </tr>
    <tr>
      <td></td>
      <td></td>
    </tr>
    <tr>
      <td rowspan="2">0x06</td>
      <td rowspan="2">CHECK_EXIST</td>
      <td>Any data</td>
      <td rowspan="2">Complement data bits</td>
      <td rowspan="2">Test working status</td>
    </tr>
    <tr>
      <td></td>
      <td></td>
    </tr>
    <tr>
      <td rowspan="2">0x0A</td>
      <td rowspan="2">GET_MAX_LUN</td>
      <td>0x38</td>
      <td rowspan="2">Max unit number</td>
      <td rowspan="2">Get the max logical unit number of USB storage device</td>
    </tr>
    <tr>
      <td></td>
      <td></td>
    </tr>
    <tr>
      <td rowspan="2">0x0B</td>
      <td rowspan="2">SET_DISK_LUN</td>
      <td>Data 0x34</td>
      <td rowspan="2"></td>
      <td rowspan="2">Set current logical unit number of USB storage</td>
    </tr>
    <tr>
      <td>Logical unit number</td>
      <td></td>
    </tr>
  </tbody>
</table>

