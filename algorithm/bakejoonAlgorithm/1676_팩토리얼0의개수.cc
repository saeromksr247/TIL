/*
	10! = ㅁ*ㅁ*ㅁ*(2^2 * 2^2)
	0이 몇개인지 알아내려면 소인수분해 했을 때 2와 5가 몇 개 나오는지 알아야 하는데,
	5의 개수는 항상 2의 개수보다 적기 때문에 5의 개수만 세어주면 된다.
	100을 예로 들었을 때,
	100/5를 했을 때 5의 개수 20
	25,50,75,100도 5의 개수를 1개로 센다.
	따라서 100/25를 한 번 더 해서 5의 개수를 한 번 더 세어줘야 한다.
*/
#include <iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int ans=0;
	for(int i=5; i<=n; i*=5){
		ans += n/i;
	}
	cout<<ans;
	return 0;
}
