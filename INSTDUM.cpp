#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	  
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int cnt=0;
        float sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
            int x=i+1;
            if(sum==0){
                continue;
            }
            float g=sum/x;
            if(g*100==100){
                cnt++;
            }
        }
        cout<<cnt<<endl;
	}
	return 0;
}
