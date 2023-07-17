string FirstNonRepeating(string A){
		   string ans;
		   unordered_map<char,int>m;
		   queue<char>q;
		   for(int i=0;i<A.size();i++){
		       m[A[i]]++;
		       if(m[A[i]]==1){
		           q.push(A[i]);
		       }
		       while(q.size()!=0&&m[q.front()]>1){
		           q.pop();
		       }
		       if(q.empty()){
		         ans.push_back('#');
		       }
		       else{
		         ans.push_back(q.front());
		       }
		      
		   }
		   return ans;
		   
		}