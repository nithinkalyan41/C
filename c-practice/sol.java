 public class sol{
  public static void main(String[] args) {
   int a[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
     
     int start = 0;
     int end = a.length-1;

    int target = 10;
   //  0                                n-1


   while(start <= end){
     
        int middile = (start+end)/2; 
         
        if(a[middile]==target){
          System.out.println(true);
          break;
        }
        else if(a[middile] > target){
          end = middile-1;
        }
        else{
          start = middile+1;
        }
   }
   
 
  }
}