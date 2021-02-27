public class Solution {
    public ArrayList<Integer> dNums(ArrayList<Integer> A, int B) {
        int count=0;
        ArrayList<Integer> ans=new ArrayList<>();
        HashMap<Integer,Integer> hashmap=new HashMap<>();
        for(int i=0;i<B;i++){
        	if(hashmap.containsKey(A.get(i))){
        		hashmap.put(A.get(i),hashmap.get(A.get(i))+1);
        	}else{
        		hashmap.put(A.get(i),1);
        		count++;
        	}
        }

        ans.add(count);
        for(int i=B;i<A.size();i++){
        	int num1=A.get(i-B);
        	int num2=hashmap.get(A.get(i-B))-1;
        	hashmap.put(num1,num2);
        	if(hashmap.get(num1)==0) count--;
        	hashmap.put(A.get(i),hashmap.getOrDefault(A.get(i),0)+1);
        	if(hashmap.get(A.get(i))==1)count++;
        	ans.add(count);
        }
        return ans;
    }
}
