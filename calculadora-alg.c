
#include <string.h>  //libraries that I'm going to need
#include <math.h>
#include <stdio.h>
int main(int argc, char * argv[]) //this are universal values
{

	int i,value1=0,value2=0,sumtemp=0,dimesion; //here I defined the variables
	float result; //float value
		if (argc<4)
			printf("incomplete data ");
   else {

			dimesion= strlen(argv[1]);  //(strlen)Returns the length of the text represented by arg1
			for (i = 0; i < dimesion; i++)
			{
				sumtemp=((int)(argv[1][i] - 48) * (pow(10,(dimesion - i  - 1))) ); //transform the character string to numbers

				value1 = value1 + sumtemp;

			}

			dimesion=strlen(argv[3]);
			for (i = 0; i < dimesion; i++)
			{
				sumtemp=((int)(argv[3][i] - 48)*(pow(10,(dimesion-i-1)))); //transform the character string to numbers
				value2=value2+sumtemp;
			}

			switch(argv[2][0])  //here put a switch that is ideal, for making more than 2 decisions using the case
			{
				case '+':
					printf("the value is %d ",value1 + value2);
				break;

				case '-':
					printf("the result is %d",value1 - value2);
				break;

				case '*':
					printf("the result is %d",value1 * value2);
				break;
				 case '/':
				 	result=(float) value1 / (float) value2;
				 	printf("the result is %1.3f ",result);

				 break;

				 default:
				 	printf("null operation");







			}



		}

	
	return 0;
}
