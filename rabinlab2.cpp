#include <cstdio>
#include <algorithm>
using namespace std;
const int MAX = 1e6+5;
char arr[MAX],ar2[MAX];
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	scanf("%s%s",arr+1,ar2+1);
	int cnt = 0;
	long long del = 1,x1 = 0,x2 = 0;
	for(int i = 1;i<=m;++i){
		del*=53;
		x1 = x1*53+arr[i];
		x2 = x2*53+ar2[i];
	}
	if(x1==x2)cnt++;
	for(int i = m+1;i<=n;++i){
		x1 = x1*53+arr[i]-arr[i-m]*del;
		if(x1==x2)cnt++;
	}
	printf("%d\n",cnt);
}
