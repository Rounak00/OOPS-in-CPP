include<iostream>
include<sstream>

//Specially use make anything as a string file
int a=10;
stringstream b;
b>>a; // in b a is there as a string
string c; //bcz cant use cout in stringstream as its a file type thing
sso >> c;
cout<<b.str();
-------------------------------------------------------------'
 //  problem in string  //

  string a;
  cin>>s; // hello rounak, how are you
  cout<<s;// hello
//bcz space treat as end of string so we will use getline
  getline(cin,s)
  ---------------------------------
    grtline(from where, to whom, when to stop/seperate);
---------------------------------------------------------------------------------------------------------------------------------
  convert string to vector of string
-------------------------------------------------------------------------------------------------
   string str = "The quick brown fox";
    vector<string> vec;
    stringstream ss(str);
    string word;

    while (getline(ss, word, ' ')) {
        vec.push_back(word);
    }
