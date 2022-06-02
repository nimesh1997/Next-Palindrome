#include<bits/stdc++.h>
#include <iostream>
using namespace std;

string nextsmaller(string s){
    int n = s.length();
    int mid = n/2;

    int lefthalf = mid - 1;
    int righthalf = (n%2)? mid+1 : mid;

    bool leftSmaller = false;

    int i=lefthalf;
    int j=righthalf;

    while(i>=0 && s[i] == s[j]){ //when same skip it
        i--;
        j++;
    }

    if(i<0 || s[i] < s[j])
        leftSmaller = true;

    while(i>=0){ //mirror of left
        s[j] = s[i];
        j++;
        i--;
        }

    if(leftSmaller){
        int carry = 1;
        i = mid-1;

        if(n%2 == 1){
            int v = int(s[mid] - '0') + carry;
            carry = v/10;
            s[mid] = char(v%10 + '0');
            j = mid+1;
        }else
            j=mid;

        while(i>=0){
            int v = int(s[i] - '0') + carry;
            carry = v/10;
            s[i] = char(v%10 + '0');
            s[j] = s[i];
            j++;
            i--;
        }
        if(carry){
            string res = "1";
            for(i=0; i<n-1; i++)
                res += "0";

            res += "1";
            return res;
        }
    }

    return s;
}

int main()
{
    int t;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        cout<<nextsmaller(s)<<endl;
    }

    return 0;
}
