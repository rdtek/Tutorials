﻿using System;
using System.Runtime.InteropServices;

namespace COMServerExample
{
    [InterfaceType(ComInterfaceType.InterfaceIsIDispatch),
    Guid("3dcc2d3f-186f-4318-8fcf-a4bff6f6dff1")] 
    public interface IComClassExample
    {
        int AddTheseUp(int adder1, int adder2);
    }

    [ClassInterface(ClassInterfaceType.None),
        Guid("cac571c8-cd3d-4f11-b675-a04e015e1aac"),
        ProgId("COMServerExample.ComClassExample")]
    public class ComClassExample : IComClassExample
    {
        public ComClassExample() { }

        public int AddTheseUp(int adder1, int adder2)
        {
            return adder1 + adder2;
        }
    }
}
