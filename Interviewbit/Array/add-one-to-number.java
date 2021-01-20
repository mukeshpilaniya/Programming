public class Solution {
    public ArrayList<Integer> plusOne(ArrayList<Integer> A) {
        
        while(A.isEmpty()==false&&A.get(0)==0){
            A.remove(0);
        }
        
        while(A.isEmpty()==true){
            A.add(1);
            return A;
        }
        int len=A.size();
        for(int i=len-1;i>=0;i--){
            if(A.get(i)+1>9){
                A.set(i,0);
            }else{
                int n=A.get(i);
                A.set(i,n+1);
                break;
            }
        }
        if(A.get(0)==0){
            A.add(0,1);
        }
        return A;
    }
}
