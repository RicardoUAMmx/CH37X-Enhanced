## Commands

| Code   | Command Name | Input Data            | Output Data | Functions                                |
|--------|--------------|-----------------------|-------------|------------------------------------------|
| 0x01   | GET_IC_VER   |                       | version number | obtain chip and firmware version number |
| 0x02   | SET_BAUDRATE | detach freq coef      | | Set serial communication baud rate |
|        |              | detach freq const     | | |
| 0x03   | ENTER_SLEEP  |                       |             | Go to low power and suspending         |
| 0x05   | RERET_ALL    |                       |             | Execute hardware reset                 |
| 0x06   | CHECK_EXIST  | Any data              |             | Test working status                    |
| 0x0A   | GET_MAX_LUN  | 0x38                  | Max unit number | Get the max logical unit number of USB storage device |
| 0x0B   | SET_DISK_LUN | Data 0x34             |             | Set current logical unit number of USB storage |
|        |              | Logical unit number    |             |                                         |
| 0x15   | SET_USB_MODE | Mode code             | **Wait for 20us**: Operation status | Configure the work mode of USB        |
| 0x16   | TEST_CONNECT |                       | **Wait for 20us**: Operation status | Check the connection state of USB device |
| 0x17   | ABORT_NAK    |                       |             | Give up retrying of NAK                 |
| 0x22   | GET_STATUS   |                       | Interruption status | Get interruption status and cancel requirement |
| 0x28   | RD_USB_DATA  |                       | Data length | Read data from current interrupt port buffer of USB |
|        |              |                       | Data Stream |                                         |
| 0x2B   | WR_USB_DATA7 | Data Length           |             | Write data to endpoint output buffer of USB host |
|        |              | Data Stream            |             |                                         |

