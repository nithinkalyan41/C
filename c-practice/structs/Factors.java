import java.util.*;
public class Factors {
  public static void main(String[] args) {
    List<Integer> l = factors(100);
    System.out.println(l);
  }

  public static List<Integer> factors(int n){

    List<Integer> l = new ArrayList<>();

      for(int i=1;i<=n;i++){
        if(n%i==0){
          l.add(i);
        }
      }

      return l;
  }
}
