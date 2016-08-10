#Prerequisite: install the win32 library using "pip install pypiwin32"
import win32com.client
comClient = win32com.client.Dispatch("COMServer.ComClassExample")
intResult = comClient.AddTheseUp(100, 200)
print "Result from COM server: ", intResult