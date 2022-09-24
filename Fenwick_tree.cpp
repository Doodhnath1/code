#include<bits/stdc++.h>
using namespace std;
#define  endl cout<<"\n";
const int N=16;
int arr[N];
int Fen[N];



void sum(int index){
	int s=0;
	while(index>0){
		s+=Fen[index];
		index-=(index&(-index));
		
	}
	cout<<s;endl;
}
void update(int index,int val){
	while(index<N){
		Fen[index]+=val;
		index=index+(index&(-index));

	}
}



int main(){
	ios_base::sync_with_stdio(false);

	cin.tie(NULL);


	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	for(int i=0;i<16;i++){
		int x;
		cin>>x;
		arr[i]=x;
	}

	// for(int i=0;i++;i<N){
	// 	update(i+1,arr[i]);
	// }
	
	// for(int i=0;i<N;i++){
	// 	cout<<Fen[i];endl;
	// }
	update(1,3);
	update(2,16);
	update(3,7);
	update(4,4);
	update(5,11);
	update(6,9);
	update(7,1);

	for(int i=0;i<N;i++){
		cout<<Fen[i];endl;
	}
	sum(7);
	
}