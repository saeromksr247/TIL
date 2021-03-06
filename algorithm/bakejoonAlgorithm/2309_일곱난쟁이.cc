//다시 풀어보니 할만하다. 두개씩 짝짓는 거 아니까 유용하다
#include <iostream>
#include <algorithm>
using namespace std;
int a[9];
int answer[9];

int main() {
	int sum=0;
	for(int i=0; i<9; i++){
		cin>>a[i];
	}
	for(int i=0; i<8; i++){
		sum=0;
		for(int l=0; l<9; l++){
			sum+=a[l];
		}
		for(int j=i+1; j<9; j++){
            //i,j짝을 뺐을때 총합이 100이면 해당 값을 -1로 바꾼다.
			if(sum - (a[i]+a[j]) == 100){
				a[i] = -1;
				a[j] = -1;
			}
		}
	}
	sort(a, a+9); 
    //정렬하여 -1인 두개를 빼고 나머지를 출력
	for(int i=2; i<9; i++){
		cout<<a[i]<<"\n";
	}
	return 0;
}

/*
  그냥 다 해보는 문제. 쉬운 문제임에도 해멨다.
  먼저 정렬을 하고 j=i+1을 하면서 차례대로 짝짓는게 핵심인듯!
*/
#include <iostream>
#include <algorithm>
using namespace std;
int a[9];
int n = 9;
int main() {
    int sum = 0;
    for (int i=0; i<n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    sort(a,a+n);
    for(int i=0; i<n; i++){
    	for(int j=i+1; j<n; j++){
    		if(sum - a[i] - a[j] == 100){
    			for(int k=0; k<n; k++){
    				if(k==j || k==i) continue;
    				cout << a[k] << '\n';
    			}
    			return 0; //답이 하나라도 나오면 그냥 바로 리턴해버림
    		}
    	}
    }
    return 0;
}
