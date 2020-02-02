// include this header file so we can use `printf()`
#include <stdio.h>

// every C program must implement the `main()` function
int main(int argc, char *argv[]) {
	//TODO: check for enough arguments
	// save the number in an easier-to-use variable
	
	
	//checks argc for enough arguments
	if(argc!=3){	
		printf("Not enough Arguments \n");
		return -1;
	}
	
	//sets char number and base equal to proper argv[] values
	char *number = argv[1];
	char *base = argv[2];
	
	//sets two int variables to base[] values
	int bone = base[0];
	int btwo=base[1];
	
	//gets length of string, sets it to an it, and returns it
	int getL(char *number){
		int length = 0;
	   
		while(number[0]!='\0'){
			length++;
			number++;	
		}
		return length;
	 }
	
	//TODO: figure out how many characters in length
	//      the base value is (1 or 2?) (optional!)
	//TODO: figure out how many characters in length
	//      the number is (optional!)
	
	//sets int numLength to length of the number by using the getL function
	int numLength = getL(number);

	//sets int baseLength to length of the base by using the getL function
	int baseLength= getL(base);
	
	//converts number ascii character values to integer values
	for(int i=0; i<sizeof(number);i++){
		if(number[i]>=48 && number[i]<=57){
			number[i] =number[i] -'0';	
		}else if(number[i]>=65 && number[i]<=90){
			number[i]=number[i]-55;
		}	
	}
	
	
	//TODO: figure out which base is given

	//concatenates two int values to form one int value
	int concat(int x, int y) {
    		int temp = y;
    		while (y != 0) {
      			x *= 10;
      			y /= 10;
   		}
   		return x + temp;
	}
	
	//converts base characters from ascii values to integer values
	bone = bone-'0';
	btwo = btwo-'0';

	//intializes baseNum value to store new concatenated value
	int baseNum =	0;

	//decides what to do with base values depending on the baseLength and base[] values
	if(baseLength==2 && base[1]!=0){
		baseNum = concat(bone,btwo);
	}else if(baseLength==1){
		baseNum=bone;	
	}else if(baseLength==2 && base[1]==0){
		baseNum=bone*10;	
	}
	
	//TODO: show an error if base is outside bounds
	
	//checks that the base number is valid and prints an Invalid statement if not and returns -1
	if (baseNum<2 || baseNum>36){
		printf("INVALID BASE\n");
		return -1;	
	}


	//Validates input by making sure each number value is less than the base number and equal to or greater than zero
	for(int i=0;i<numLength;i++){
		if(number[i]>=baseNum|| number[i]<0){
			printf("INVALID INPUT \n");
			return -1;
		}	
	}
	
	
	
	

	//TODO: calculate the decimal number of the
	//      given value in
	
	//obtains a base number and po int which then returns the base number to the power of the po int and returns it
	int power(int x, int y){
		if(y==0){
			return 1;
		}else if(y%2==0){
			 return power(x, y/2)*power(x,y/2);	
		}else{
			return x*power(x,y/2)*power(x,y/2);
		}
	
	
	}

	
	
	//initializes result int to print after conversion
	int result =0;

	//initializes po int which is used in conversion process
	int po=0;
	
	//for loop that starts at the end of the number that needs to be converted and uses the power function to convert each number to base 10
	for(int i =numLength; i>0;i--){
		result += number[i-1] * power(baseNum,po);	
		po++;	
	}
	

	// print the result
	printf("%d\n",result);

	// program completed successfully, return 0
	return 0;
}

	

