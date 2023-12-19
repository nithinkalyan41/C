import java.util.PriorityQueue;

public class sol{
  public static int minCost(int[] array) {
    PriorityQueue<Integer> minHeap = new PriorityQueue<>();
    for (int num : array) {
        minHeap.add(num);
    }

    int totalCost = 0;
    while (minHeap.size() > 1) {
        int firstMin = minHeap.poll();
        int secondMin = minHeap.poll();
        int cost = firstMin + secondMin;
        totalCost += cost;
        minHeap.add(cost);
    }

    return totalCost;
}
  public static void main(String[] args) {
    int[] array = {100,1};
        int result = minCost(array);
        System.out.println("Minimum cost to reduce the array: " + result);
   }
  
}