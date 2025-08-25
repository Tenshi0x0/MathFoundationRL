#include<bits/stdc++.h>
using namespace std;
 
#define debug(x) cerr << #x << ": " << (x) << endl
#define rep(i,a,b) for(int i=(a);i<=(b);i++)
#define dwn(i,a,b) for(int i=(a);i>=(b);i--)

const double eps=1e-3;
const double ak=0.001;

double g(double x){
	double res;
	res=x*x*x-8+exp(x);
	return res;
}

double eq(double a, double b){
	return abs(a-b)<eps;
}

signed main(){
	srand(time(0));
	double w=0;
	int cnt=0;
	while(!eq(g(w), 0)){
		++cnt;
		
		w-=(0.1/(cnt+1))*(g(w));
		debug(w);
	}
	cout<<cnt<<endl;
	return 0;
}