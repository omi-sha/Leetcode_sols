class Solution {
public:
    int lcs(string w1,string w2,int n,int m)
    {
        if(n==0||m==0)
        return 0;
        if(w1[n-1]==w2[m-1])
        return 1+lcs(w1,w2,n-1,m-1);
        else
        return max(lcs(w1,w2,n,m-1),lcs(w1,w2,n-1,m));
    }
    int minDistance(string word1, string word2) 
    	{ 
	    int n = word1.length();
	    int m = word2.length();
	    int arr[n+1][m+1];
	    for(int i=0; i<=n;i++){
	        for(int j=0;j<=m;j++){
	            if(i == 0 || j == 0 ){
	                arr[i][j] = 0;
	                continue;
	            }else if(word1[i-1] == word2[j-1]){
	                arr[i][j] = 1 + arr[i-1][j-1];
	            }else {
	                arr[i][j] = max(arr[i-1][j], arr[i][j-1]);
	            }
	        }
	    }
	    //int lcs1 = findLCS(str1, str2, str1.length(), str2.length());
	    int lcs = arr[n][m];
	    
	    int deletion = n - lcs + m - lcs;
	   // int insertion = str2.length() - lcs;
	    return deletion;
	    
	}


        
    
};