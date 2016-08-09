dim objTest, intResult
Set objTest = WScript.CreateObject("COMServerExample.ComClassExample")
intResult = objTest.AddTheseUp(100, 200)
Wscript.echo "Result from COM server: " & intResult