public class fun{

  public void write1(String pen,String paper,int letters){

        String s= "abcdefghijklmnopqrstuvwvxyz";

        if(pen.isEmpty() || paper.isEmpty()){
          System.out.println("Please provide valid pen and paper");
          return;
        }

        String res = "";

        for(int i=0;i<letters;i++){
          int x = (int) Math.floor((Math.random()*s.length()));

          res += s.charAt(x%s.length());

        }
        System.out.println(res);
        System.out.println(res.length());
  }


  public String write(String pen,String paper,int letters){
      String s= "abcdefghijklmnopqrstuvwvxyz";

        if(pen.isEmpty() || paper.isEmpty()){
          System.out.println("Please provide valid pen and paper");
          return "";
        }

        String res = "";

        for(int i=0;i<letters;i++){
          int x = (int) Math.floor((Math.random()*s.length()));

          res += s.charAt(x%s.length());

        }
       
        System.out.println(res.length());


      return res;    
  }
  public int max(int x,int y){
    return x>y ? x : y ;
  }

    

  public static void main(String[] args) {
        fun f = new fun();
        //f.write1("", "classmate", 30);
        //String s = f.write("", "classmate", 100);
        System.out.println(Math.max(10,15));
        f.max(10, 15);
  }
}