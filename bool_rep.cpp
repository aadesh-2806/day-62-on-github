#include<iostream>

using namespace std;

int boole(unsigned n){
	unsigned i;
	for(i=1<<31;i>0;i/=2)
		if(n&i)
			cout<<1;
		else
			cout<<0;
}

int main(){
	unsigned n;
	cin>>n;
	boole(n);
}
//xan be done in recursive way too in rec_bool_rep.cpp
