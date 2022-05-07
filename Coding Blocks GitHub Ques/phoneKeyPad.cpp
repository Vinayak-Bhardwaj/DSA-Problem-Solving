#include<iostream>
using namespace std;

// We are creating a 2d array to map characters with the keys of phone
char keys[][10]={
	"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"
};

void PhoneKeyPad(char *in,char *out,int i,int j){
	// BASE CASE
	if(in[i] == '\0'){
		out[j] = '\0';
		cout<<out<<endl;
		return;
	}
	// Recursive case

    // We took the first digit out of the input array and - with 0 to get number 
	int digit = in[i] - '0';

    // Now our only job is to get all letters associated with that first digit and store it in output array so we took an iterator and iterate from k = 0 till it gets null
    // for eg digit = 2 then iterator k = 0 to keys[2][k] != null means iterator running from a to c in "ABC"
	for(int k=0; keys[digit][k]!='\0'; k++){

        // We'll store one letter in output array and then leave rest of the part to recursion only
		out[j]=keys[digit][k];

        // leaving rest to recursion to retrieve letter from input array char by char and store it in output array
		PhoneKeyPad(in,out,i+1,j+1);
	}
}

int main(){

	char in[100],out[100];
	cin>>in;
	PhoneKeyPad(in,out,0,0);



	return 0; 
}