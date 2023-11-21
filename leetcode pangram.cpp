#include<iostream>
using namespace std;
class solution
{
	public:
		bool checkifpangram(string sentence)
        {
        int n = sentence.size();
        int arr[26] = {0};
        for(int i= 0; i<n; i++)
        {
        	int num =sentence[i]-'a';
        	arr[num]++;
        	
		}
		for(int i=0; i<26; i++)
		{
			if(arr[i])
			{
				continue;
					
			}
			else return false;
			
	}
	return true;
			
			
		}		
};
