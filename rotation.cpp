// C program for Left Rotation and Right 
// Rotation of a String 
#include<bits/stdc++.h> 
using namespace std; 

// In-place rotates s towards left by d 
void leftrotate(string &s, int d) 
{ 
	reverse(s.begin(), s.begin()+d); 
	reverse(s.begin()+d, s.end()); 
	reverse(s.begin(), s.end()); 
} 

// In-place rotates s towards right by d 
void rightrotate(string &s, int d) 
{ 
	leftrotate(s, s.length()-d); 
} 
bool areRotations(string str1, string str2) 
{ 
   /* Check if sizes of two strings are same */
   if (str1.length() != str2.length()) 
        return false; 
  
   string temp = str1 + str1;  
  return (temp.find(str2) != string::npos); 
}
// Driver code 
int main() 
{ 
	int t;
	cin >> t;
	while(t--)
	{
		
		string str1;
		cin >> str1; 
		string str2;
		string str3;
		str3 = str1;
		str2 = str1;
		leftrotate(str2, str2.length());
		rightrotate(str3, str3.length());
		if(areRotations(str1,str2) && areRotations(str1,str3))
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
		//cout << str1 << endl; 
		//string str2; 
		//cin >> str2;
		/*string s;
		rightrotate(str2, str2.length()); 
		//cout << str2 << endl; 
		if(str1 == s && str1 == t)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}*/
	}
	return 0; 
} 

