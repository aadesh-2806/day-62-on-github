#include<bits/stdc++.h>

using namespace std;

int main(){
	int i ,p ,n ,k=0 ,r=0;
	cin>>n;
	bool prime[n+1];
	memset(prime,true,sizeof(prime));
	for(i=2;i*i<=n;i++){
        if(prime[i]==true){
            for(p=i*i; p<=n ; p+=i){
                prime[p]=false;
            }
        }
    }
	for(p=6;p<=n;p++){
		for(i=2;i<p;i++){
			if(p%i==0 && prime[i]==true){
				r++;
			}
		}
		if(r==2){
			k++;	
		}
		r=0;
	}	
	cout<<k;
}
