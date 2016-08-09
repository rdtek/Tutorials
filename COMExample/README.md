# COM Example

A simple C# class library exposed as a COM server.

Build the Visual Studio project to register the COM class.

Run the COMClient.vbs script to call the COM server object.

```vbs
'Use this script to make a call to the COM object
'Important: run this script with the appropriate wscript.exe 
'corresponding to the architecture of the COM component 32 bit or 64 bit
'(32 bit)
'C:\Windows\SysWOW64\wscript.exe COMClient.vbs
'(64 bit)
'C:\Windows\System32\wscript.exe COMClient.vbs
 
dim objTest, intResult
Set objTest = WScript.CreateObject("COMServerExample.ComClassExample")
intResult = objTest.AddTheseUp(100, 200)
Wscript.echo "Result from COM server: " & intResult
```
