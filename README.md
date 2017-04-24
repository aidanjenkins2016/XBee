# XBee

Repo detailing setup of point to multipoint XBee mesh for the 2017 Northwestern Autonomous Vehicles Design Competition

The XBee's for the competition are configured in AT, or transparent, mode. This allows the human controlled robot to broadcast its position to all the autonomous robots as if they had a wired serial connection.

The XBee's need to be configured with a program from Digi called X-CTU, however this will be done for you. Sample code for receiving the position data is included in the TeensyXBeeRx file. The Teensy needs 3.3V, Ground, and a connection to open Tx/Rx pins on your microcontroller.

If you are interested in learning more about XBee's here are some sources:
Download Digi's GUI X-CTU here: https://www.digi.com/products/xbee-rf-solutions/xctu-software/xctu#productsupport-utilities

XBee mesh guide: https://www.digi.com/resources/documentation/Digidocs/90001942-13/#concepts/c_xbee_zigbee_mesh_kit.htm%3FTocPath%3D_____1 

XBee for Home Automation: http://www.desert-home.com/
Set PAN ID to 513
