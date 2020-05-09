import java.util.Arrays;

import java.util.HashSet;

import java.util.PriorityQueue;

import java.util.Set;


 class Dijkstra {

  
  class NodeWithD implements Comparable<NodeWithD>
{
     int nodeIndex;
        
      int distance;
      
     public NodeWithD(int nodeIndex, int d)
 {
      this.nodeIndex = nodeIndex;
            this.distance = d;
  }

       
 @Override
        public int compareTo(NodeWithD nodeWithD) {
         
   // return negative means lesser value
            return this.distance - nodeWithD.distance;
        }

    
    @Override
        public String toString() {
  return "NodeWithD{" +
 "nodeIndex=" + nodeIndex +
  ", distance=" + distance +
  '}';
   
    }
   
 }

  
  private final int inf = 999;
    
private final int nil = 98;
  
  int [][] graph = new int[][]{
    /*0*/   {  0,   2, inf, inf, inf},
  
                                   /*1*/   {inf,   0,   7,  10, inf},
   
                                  /*2*/   {inf, inf,   0, inf, 3},
   
                                 /*3*/   {  5, inf,  11,   0, inf},
   
                                /*4*/   {inf, inf, inf,   3, 0}
        };

  
  int d[] = new int[graph.length];
   
 int p[] = new int[graph.length];

   
 Set S = new HashSet();
  
  PriorityQueue<NodeWithD> Q = new PriorityQueue<>();
  
  NodeWithD[] nodes = new NodeWithD[graph.length];

   
 private void solve(int source){
      
  for(int u=0; u < d.length; u++){
        
    d[u] = inf;
          
  p[u] = nil;
        }
    
    d[source] = 0;


     
   for(int u=0; u < d.length; u++){
          
  nodes[u] = new NodeWithD(u, d[u]);
         
   Q.add(nodes[u]);
        }

       
 while(!Q.isEmpty()){
           

 NodeWithD smallestNode = Q.poll();
           
 int u = smallestNode.nodeIndex;

           
 for(int v=0;v<graph.length; v++){
              
  if(graph[u][v] == inf){
                 
   // if not adjacent, skip
     continue;
  }
     
           // if adjacent, do relax
                
if(d[v] > (d[u] + graph[u][v])){
               
     d[v] = d[u] + graph[u][v];
               
     nodes[v].distance = d[v];
                
    p[v] = u;
                }
      
      }

         
   System.out.println("N: " + smallestNode.nodeIndex);
         
   System.out.println("D: " + Arrays.toString(d));
     
       System.out.println("P: " + Arrays.toString(p));
      
      System.out.println();

        }// while Q


    }

  
  public static void main(String[] args) {
       
 Dijkstra dijkstra = new Dijkstra();
        dijkstra.solve(0);
    }
}