/*to jest z branch1*/

#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdlib>
#include<list>
#include<memory>

using namespace std;

vector<int> merge(vector<int> tab1, vector<int> tab2){

	vector<int> pom;	
	
	int it1=0, it2=0;

	while( it1 < tab1.size()  &&  it2 < tab2.size() ) {

		if(tab1[it1] < tab2[it2]){

			pom.push_back( tab2[it2] );
			it2++;	

		}
		else {

			pom.push_back( tab1[it1] );
			it1++;

		}
		
	}
		
	for(int j=it1; j<tab1.size(); j++){
		pom.push_back( tab1[j] );
	}
	
	for(int j=it2; j<tab2.size(); j++){
		pom.push_back( tab2[j] );
	}
	
	return pom;
}

vector<int> mergesort(vector<int> tab){

	if(tab.size()<2)
		return tab;
	
	vector <int> tab1, tab2;
	
	for(int i=0; i<(tab.size()/2); i++)
		tab1.push_back(tab[i]);

	for(int i=tab.size()/2; i<tab.size(); i++)
		tab2.push_back(tab[i]);

	for(int i=0; i<tab1.size(); i++){
	cout<<"   "<<tab1[i]<<"   ";}
	
//	system("pause");


	tab1=mergesort(tab1);
	
	tab2=mergesort(tab2);


	
	return merge(tab1, tab2);
	
	
}








int main(){
	vector<int> tab={10, 2, 3, 100, 5, 4, 1, 11, 101, 0, -1};
	vector<int> tab3;
	tab3=mergesort(tab);
	
	list<int> l1={1, 3, 10, 30, 50, 13, -5};
	
	int n=5;
	
	shared_ptr<int> p(&n);
	shared_ptr<int> r(p);
	
	
	
	cout<< *p << "  "<<p.use_count();
	
	
	//for(int i=0; i<tab.size(); i++)
	//	cout<<tab3[i]<<"  ";
	
	return 0;
}
