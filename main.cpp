/**
 *  Micheál Carroll
 *  C00218621
 *  Ex_8
 *  Operational amplifier
 */

#include <iostream>
#include <windows.h>
#include <cstdio>
#include <cmath>

using namespace std;

int main(void)
{
    char input;

    char menu(void);
    void invertingAmp(void);
    void nonInvertingAmp(void);

    cout << "calculations for the output voltage and voltage gain of an inverting and non inverting amplifier\n" << endl;

    	do
	{
	    input = menu();

		switch (input)
		{
			case 'a':   invertingAmp();
						break;

			case 'b':   nonInvertingAmp();
						break;

			case 'q':   cout << "\nGoodbye...\n" << endl;
						break;

			default:	cout << "\nInvalid input, try again...\n" << endl;
						//cout << "Press any key to continue..." << endl;
						//fflush(stdin);
						getchar();
						getchar();
						break;
		}
	}
	while (input != 'q');

	return 0;
}

char menu(void)
{
    char choice;

    cout << "\n Choose from the following: " <<
            "\n Press a for Vout and Gain(AV) of an inverting amp " <<
            "\n Press c for Vout and Gain(AV) of a non inverting amp" <<
            "\n Press q to quit program \n \t";

    cin >> choice;

    return choice;
}

void invertingAmp(void)
{
    /**< variable declarations */
    double Vcc, Vee, Vin, Rin, Rf, Av ,Vout
    double *AvPtr = &Av, *VoutPtr = &Vout;

    /**< function prototype */
    void invertingAmp(double Av, double Vout, double *AvPtr, double *VoutPtr);

    cout << "\n Voltage gain and Voltage output...\n" << endl;

    cout << "\n Enter Vcc: " << endl;
    cin >> Vcc;
    cout << "\n Enter Vee: " << endl;
    cin >> Vee;
    cout << "\n Enter Vin: " << endl;
    cin >> Vin;
    cout << "\n Enter Rin : " << endl;
    cin >> Rin;
    cout << "\n Enter Rf : " << endl;
    cin >> Rf;
    invertingAmpCalc(Vcc, Vee, Vin, Rin, Rf, AvPtr, VoutPtr);

    cout << Av << " , " << Vout << endl;

    return;
}
void invertingAmp()Calc(double VccVal, double VeeVal, double VinVal, double RinVal, double RfVal, double *AVPtr, double *VOUTPtr)
{
    *AVPtr = (-RfVal / RinVal);
    *VOUTPtr = (Av*VinVal);
}

    return 0;
}
