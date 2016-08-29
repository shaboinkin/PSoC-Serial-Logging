# PSoC-Serial-Logging
A pretty trivial wrapper for logging to a serial monitor through the usb on the PSoC 4

You need to make some changes to your project before you can start logging.

First, you need to figure out what pins Rx and Tx need to connect to for the UART module.
For the PSoC 4200M prototyping kit, these map out to P7.0 and P7.1.

Then increase the heap size to 0x200. That option is located under the System tab in the .cydwr file.
Then right click on your project -> Build Settings -> [ARM GCC..] -> Linking
Set the option "Use newlib-name Float Formatting" to "True"

Ensure you have a serial monitor program, like Teraterm or Putty, that will let you view serial outputs. 
Set up the baud rate to whatever you want and ensure your serial monitor matches the baudrate.

Building and running the sample project will produce an output saying.

I am a string!
I am an unsigned 8 bit value:  123
I am a signed 8 bit value:  -123
I am an unsigned 32 bit value:  1234567887
I am a float:  123.456001
I am a char:  X

Feel free to make this fancier.
