#include <stdio.h>
#include <objbase.h>
#import "COMServerExample.tlb"

using namespace std;

void PressEnterToContinue();

int main()
{
    HRESULT hres;
    
    ::CoInitialize(NULL);
    
    //Access the COM object interface via a smart pointer
    COMServerExample::IComClassExamplePtr ptrComServerInterface;

    //Create an instance of the COM object
    hres = ptrComServerInterface.CreateInstance("COMServer.ComClassExample");

    if (SUCCEEDED(hres))
        printf("Successfully created COM object instance.");
    else
        printf("Error creating instance of COM object.");

    //Call a method on the COM object
    long sum = ptrComServerInterface->AddTheseUp(35, 45);

    //Print the result
    printf("\nSum = %ld\n", sum);

    ::CoUninitialize();

    PressEnterToContinue();

    return 0;
}

void PressEnterToContinue()
{
    int c;
    printf("\nPress ENTER to continue... ");
    fflush(stdout);
    do c = getchar(); while ((c != '\n') && (c != EOF));
}