public class Solution {
    public ArrayList<Integer> flip(String A) {
        int currentSum=0,maxSum=0;
        int start=-1,end=-1,i=0,j=0;
        
        for(i=0;i<A.length();i++){
            currentSum+=(A.charAt(i)=='1')?-1:1;
            if(currentSum>maxSum){
                maxSum=currentSum;
                start=j;
                end=i;
            }
            if(currentSum<0){
                currentSum=0;
                j=i+1;
            }
        }
        if(maxSum==0){
            return new ArrayList<>();
        }else{
            return new ArrayList<>(Arrays.asList(start+1,end+1));
        }
    }
}
