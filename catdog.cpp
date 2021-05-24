#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long c,d,l;
	   cin>>c>>d>>l;
	   long int max__l , min_l ;
	   max__l = c*4 + d*4;
	   min_l = max((c-d)*4,d*4);
	   if(l%4==0 && l<=max__l && l>=min_l){
	       cout<<"yes";
	   }else{
	       cout<<"no";
	   }
	   
	   cout<<endl;
	}
	return 0;
}
