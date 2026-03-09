

#include<vector>
#include<iostream> 
#include<set>
#include<unordered_set>
#include<map>
#include<bits/stdc++.h>
using namespace std;

/*	
	set
	unordred_set 
	multiset

	map
	unorderd_map
	multi_map
	stack
	queue -> push,pop 
			back, front

	deque -> push-> back, front ,pop-> back ,front
		push_back()
		push_front()
		pop_back()
		pop_front()
 */

// set:
// interger 
// string:

// 'a' 'f' 'd'
// 'a' 'd' 'f'

// unordered_set:
// same but not stored in order 

// multi set:
// 	1 2 5 3 2 7 8 5 
// 	1 2 2 3 5 5 7 8






int main()
{

//ITERATORS
vector<int> v = {1,2,3,4,5}
for(int i = 0; i < v.size(); i++){
	cout << v[i] << " "; }
	cout << endl;
vector<int> ::iterator it = v.begin();
cout << (*(it + 1)) << endl; //prints the first element of the vector
for(it = v.begin(); it != v.end(); it++){
	cout << (*it) << endl; }
//when we use this for a pair
// (*it).first <=> (it->first)

    // VECTORS.................................

    // Implemtation

    // logic
    // -> list of elemtns with dynamic size.. just like arrays

  vector<int>arr;

    vector<int> name;

  cout<<arr.size(); 	// prints -->0;

  arr.push_back(2);		// add this element to the array at the last
  arr.push_back(5);

  cout<<arr.size();   	// prints -->2             ......erase(_),delete(),push_front()
  arr.pop_back();		// removes last element and now the size is 1;

    arr.clear();			// removes all the elements at once ---now the array size becomes 0

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

 // if you want 0s for all first four elements then
   vector<int> ar(4,0);

   for(auto it:ar){
	cout<<it<<" ";
   }
   vector<int> name={1,2,3,4,5,6,7,8,9};


// if you want a copy of other vector then 
vector<int>am(ar.begin(),ar.end()); // [)   it will be like this 
// or just write vector<int>am(ar); then also it will works


//   push_back is similar to emplace_back but emplace_back will take less time than push_back

// for vectors when taking inputs take as follows;
vector<int> v;
for(int i = 0; i < v.size(); i++){
	int x;
	cin >> x;
	v.push_back(x); }

// to copy an vector fully into another vector
vector <int> v2 = v; //O(n)

// to define a vector of given size and fill it with a certain value for 
// ex value = 3
vector<int> v(10,3);

//Defining a vector of pairs and printing it's values.
vector<pair<int,int> > v = {{1,2},{2,3},{3,4}};
for(int i = 0; i < v.size(); i++){
	cout << v[i].first << " " << v[i].second << endl; }

//How to take inputs inside a vector of pairs
vector<pair<int,int> > v;
for(int i = 0; i < v.size(); i++){
	int x,y;
	cin >> x;
	cin >> y;
	v.push_back({2,3}); }//Or v.push_back(make_pair(2,3));

// Vector of arrays agar input lena hai
int N;
cin >> N;
vector<int> v[N];
for(int i = 0; i < N; i++){
	int n;
	cin >> n;
	for(int j = 0; j < n; j++){
		int x;
		cin >> x;
		v[i].push_back(x); }}


// 2-D Vectors
vector<vector<int> >vec;
vec.push_back(am);
vec.push_back(arr);
for(auto vect:vec) 	// here see vect is a vector as previously here the variable is 'it' it will determine every int in the vector
{
	for(auto it:vect)
	{
		cout<<it<<" ";
	}
	cout<<endl;

}

//vector of vectors kaise input le
int N;
cin >> N;
vecto<vector<int,int> > v;
for(int i = 0; i < N; i++){
	int n;
	cin >> n;
	vector<int> temp;
	for(int j = 0; j < n; j++){
		int x;
		cin >> x;
		temp.push_back(x); } // we couldn't do v[i].push_back(x) as the 
	v.push_back(temp); } // i th index hasn't been created yet since it's 
// a vector and it's size is dynamic.

// to add an element in 2-d vector
v[0].push_back(x);

// 	accessing elements;
cout<<vec[0][1];

// if you want to define a 2d vector simply for ex 10*20 
vector<vector<int> >vec1(10,vector<int>(20,0));

for(auto vect:vec1)
{
	for(auto it:vect)
	{
		cout<<it<<" ";
	}
	cout<<endl;
}

// 	Another way of defining multiple vectors
vector<int>arrr[4];//----------------->[vec,vec,vec,vec];
arrr[0].push_back(3); //  you can add values like this
vector<vector<vector<int> > >val;

//             SET................
	set<int> st; // set stores only unique elements
	
	for(int i=0;i<5;i++)
	{
		int x;
		cin>>x;
		st.insert(x); // the important thing is that set will contains one element only once if we put insert() for the element already in the set then it will not take that value and the the first element in that set will be the most smallest element in that set and it will increases as it like second element will be like 2 nd smallest element in that set
	}
	// other way is
	set<int>st1 ={1,2,3,4};
	int ele=5;
	auto it=st1.find(ele);
	if(it!=st1.end())cout<<*it<<endl;
	else {
		cout<<"no such an element in set";
	}

	// st1.end()
		// vector<int>kittu;
		// kittu.push_back(10);
		// kittu.emplace_back(1);

	set<int>st2(st.begin(),st.end());

	for(auto it:st)
	{
		cout<<it<<endl;
	}
	cout<<"**"<<endl;
	

	for(auto it:st2)
	{
		cout<<it<<endl;
	}


	// // we cannot access set[0] and like we will be able to access only by pointer i.e iterator
	// // this insert function take logn time complixity.......IMP
	// the below two functions of erase will also have the timecomplexity of logn where n is the size of the elements in the set
	st.erase(st.begin()); //  will erase the first element
	st.erase(st.begin(),++st.begin());  //  .erase(start,end) ....[)
	for(auto it:st)
	{
		cout<<it<<endl;
	}

	st.erase(3);
	// it will erase 3 if it exists and the time complexity for all the three methods is logn

	auto iiit=st.find(4); // it will return you a pointer where element 4 exists if it does not exists then it will return st.end(); 


	st.emplace(6); // it is also same as st.insert() but emplace is faster than insert function
	st.size(); // will return the size of the set st 


	//    	......................................>>>	Unordered Set	<<<.....................................
	 // most used 
	unordered_set<int>stw;

	// stw.emplace(0);
	stw.insert(9);
	stw.insert(4);
	//  you don't know which element will comes first 
	//  if you donot have to store the elements in the ascending order then store them in the unordered_set

	//  the average timecomplixity is O(1)
	//  for the wrost case it will be O(set size)

	// if tle comes then switch to set

	// 		conclusion... about difference between odered set and un ordered set  ...both will store unique elements only
	//   ordered set ..sorted order...complixity logn
	//   unordered set ...random order...complixity O(1)..very good than set in case of time complixity
	multiset<int>mt;
	mt.insert(1);
	mt.insert(2);
	mt.insert(2);
	mt.insert(2);
	mt.insert(3);
	mt.insert(3);
	// here the set will be like mt->{1,2,2,2,3,3};
	// the only difference is that it will be able to store all the elements in the sorted order 
	mt.erase(3);

	// it will erase all the 3 in the given set
	// mt.clear(); // it will cleares the set 
	auto iit=mt.find(2);
	// it will return the first address where it finds 
	for(auto it:mt)
	{
		cout<<it<<endl;
	}
    // finding how many times 2 has occured
	cout<<mt.count(3);

//						.....................>>>   map   <<<.....................
vector<int>name;
map<string,int> mp;

mp.insert({"hihi",10});
mp["kittu"]=98;
mp["kittu"]=10;
mp["key"]=10;
mp["july"]=97;
mp["rama"]=76;  // it is like a dictionary it
mp.emplace("raj",87);  // it is the another way of defining a node in the map
cout<<mp["dean"]<<endl;
//  If you again assign a value to the key then it will overwrite
mp["kittu"]=87;

// cout<<*(mp.find("rama"));      // finds the rama if 
mp.erase("rama");
mp.erase(mp.begin());
// mp.clear();
auto it=mp.find("july");
// if you want to check weather the map is empty 
// mp.empty();   // it is a boolean;
//    time complixity of map is logn; 
// in maps pair can also be used as keys like map< pair<int,int>, int >

//		...........>> ACCESSING THE VALUES STORED IN  MAP <<.........
pair<float,string> vvaa;
vvaa={1.0,"kittu"};
cout<<vvaa.first<<vvaa.second<<endl;

//if we have to check whether a value exists for a certain key or not.
auto it = m.find(3);
if(it == m.end()){
	cout << "No value" << endl; }
else{
	cout << (*it).first << " " << (*it).second << endl; }

//time complexity in insertion of value in map is O(log(n));
// But if we insert a  string then it becomes O(string.size()*log(n))

//If we want to do hashing like counting frequencies but for strings.
map<string,int> m;
int n;
cin >> n;
for(int i = 0; i < n; i++){
	string s;
	cin >> s;
	m[s]++; }
for(auto it: m){
	cout << it.first << " " << it.second << endl; }

for(auto it:mp)
{
	cout<<it.first<<" "<<it.second;
}

// another way of accessing 
for(auto it=mp.begin();it!=mp.end();it++)
{
	cout<<it->first<<" "<<it->second<<endl;
}

//   ........................>>>>>>		UNORDERED MAP		<<<<<<<<.......................................
unordered_map<int,int>ump;
//  same as map but it will not store in an order
//  pairs are not used in unordered maps it will take only 1 thing as the key
//		time complixity
//   o(1).. in almost all the cases
//   o(n) ..in the wrost case

// 		PAIRS..............................
pair<int,int>pr;
pr.first=100;
pr.second=4;
p = make_pair(2,4); // Another way to make a pair.
pair<pair<int,int>,pair<int,int>>pr3={{1,2},{3,4}};
// accessing
// pr3.first.first
// pr3.first.second
// pr3.second.first
// pr3.second.second
// we can also declare an array of pairs
pair<int,int> p_array[3];
p_array[0] = {1,2};
p_array[1] = {2,3};
p_array[2] = {3,4};
for(int i = ; i < 3; i++){
	cout << p_array[i].first << " " << p_array[i].second << endl; }

// ..................................................>>>>>>   MULTIMAPS     <<<<..................................
//  IT is same as maps but it can store multiple values in a sorted order
multimap<string,int>mlp;
mlp.emplace("kut",5);
mlp.emplace("put",7);
mlp.emplace("kut",6);
for(auto it:mlp)
{
	cout<<it.first<<" "<<it.second<<endl;
}
//		.....................................>>>>>>		 STACK AND QUEUE		<<<<<<<..............................
// STACK ...LAST IN FIRST OUT
// push,pop,size,empty,top


stack<int> sat;

sat.push(3);
sat.push(5);
sat.push(8);
sat.push(7);
// it will store like 
    //    7
	//    8
	//    5
	//    3
// accessing 
cout<<sat.top();// prints the element in the top i.e lastly added if it exists else it will give an error
// so it is imp to do like this 
if(!sat.empty()){
	cout<<sat.top();
}
sat.pop();   // deletes the element in the top

// NESTING





//        ........... QUEUE................
// QUEUE.....FIRST IN FIRST OUT
// push,pop,size,empty,front
queue<int>at;
at.push(3);
at.push(5);
at.push(8);
at.push(7);
cout<<at.front();
at.pop();
cout<<at.size();
// all these operations ( push,pop,size,empty,front)will take o(1) time complixity

//			......................................PRIORITY_QUEUE..................................
//		(mostly used because it can store multiple values in desending order with a time complixity of o(logn))
priority_queue<int>pq;
pq.push(8);
pq.push(7);
pq.push(4);
pq.push(7);
// 8 7 7 4

cout<<pq.top();
pq.pop();
cout<<pq.top();
cout<<pq.size();
//   if you want all the elements to be printed in ascending order
// push the elements by putting '-' and access them by multiplying with -1;

//		>>>>>>>>...........  DEQUEUE  ...............,<<<<<<<<<<<<
// same like vector but it has some more functions like
// push_front()
// push_back()
// pop_front()
// pop_back()
// empty()
// clear()
// at()
// size()
// begin,end,rbegin,rend


// ve:	() 1,2,3,4,5, ()
// 	//ve.begin() -> first elemtent
// 	// ve.end()- > iterator next last elem
// 	//ve.rbegin()-> last element
// 	// ve.rend();-> iterator before first elem


deque<int>dq;

}

//upperbound and lowerbound

//an array is given = [1,2,3,4,6,10]
//upperbound(5) -> 6;
//lowerbound(4) -> 4;

How to Flush in C++:
Use std::endl; (This prints a newline and flushes automatically).

Use std::cout.flush();

Do NOT use ios::sync_with_stdio(0); cin.tie(0); if you aren't comfortable with how it affects flushing. Usually, it's safer to just use endl

#include <bits/stdc++.h>
using namespace std;

int main() {
    int low = 1, high = 100;
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        cout << "? " << mid << endl; 
        string response;
        cin >> response;

        if(response == "CORRECT"){
            ans = mid;
            break; }
        else if(response == "LOWER"){
            high = mid - 1; }
        else if(response == "HIGHER"){
            low = mid + 1; }
        else{
            return 0; }}
    cout << "! " << ans << endl;
    return 0;
}