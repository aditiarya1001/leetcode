class Solution {
public:
//     int lengthOfLastWord(string s) {
//         int n=s.length();
//         int count=0;
//         for(int i=n-1;i>=0;i--)
//         {
//             if(s[i]!=' ')
//             {
//                 count++;
//             }
//             else if(count>0 && s[i]==' ')
//             {
//                 break;
//             }
//         }
//         return count;
//     }
// };
    
         int lengthOfLastWord(string s)          
         {
             stack<char> s1;
       int count=0;

       for(int i=0;i<s.size();i++)
       {
           s1.push(s[i]);
       }

        while(s1.top()==' ')
        {
            s1.pop();
        }
        /*
now we run the while loop util the stack is empty in the case of 
only one word is there or the blank space comes which seperate the two words.

*/

      while(!s1.empty() && s1.top()!=' '){
        count++;
        s1.pop();    
    }
    
// now we itterate the count to count the length of the last word and return  it.

    return count;

    }
};