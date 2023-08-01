class Solution {
public:
    string defangIPaddr(string address)
   {
       string defang;
       
       for(char c:address)
       {
           if(c=='.')
           {
               defang.push_back('[');
               defang.push_back('.');
               defang.push_back(']');
           }
           else
           {
               defang.push_back(c);
           }
       }
       return defang;
        
    }
};