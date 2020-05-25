#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define ii pair < int, int >
#define vii vector< ii >
#define vi vector< int >
#define pb push_back
#define F first
#define S second
const int MAX = 1e5 + 7;
const int mod = 1e9 + 7;

using namespace std;

struct node{
	int coso;
	int somu;
	struct node *next;
};

void createNode(int x, int y, struct node **dt){
	struct node *a, *b;
	b = *dt;
	if(b==NULL){
		a=new node;
		a->coso=x;
		a->somu=y;
		*dt=a;
		a->next = new node;
		a=a->next;
		a->next=NULL;
	}
	else{
		a->coso=x;
		a->somu=y;
		a->next=new node;
		a=a->next;
		a->next=NULL;
	}
}

void showResult(struct node *dt){
	while(dt->next!=NULL){
		cout<<" "<<dt->coso<<"x^"<<dt->somu<<" ";
		dt = dt->next;
		if(dt->next!=NULL) cout<<"+";
	}
}
main(){
	struct node *dt1 = NULL;
	createNode(2,3,&dt1);
	createNode(3,4, &dt1);
	showResult(dt1);
}

