      #include <iostream>                                                                                                                
                                                                                                                                         
      using namespace std;                                                                                                               
                                                                                                                                         
                                                                   
      namespace Physics {                                                                                                                
                                                                                                  
      double clamp(double val, double min, double max) {                                                                             
          if (val < min) return min;                                                                                                 
          if (val > max) return max;                                                                                                 
          return val;                                                                                                                
      }                                                                                       
                                                                                                                                         
                                                       
      double lerp(double a, double b, double t) {                                                                   
          return a + (b - a) * t;                                                                                   
      }                                                                                       
      }                                                                                                                 
                                                                                                  
                                                                                         
      namespace GameMath {                                                                                                        
                                                                                          
      int clamp(int val, int min, int max) {                                                  
          if (val < min) return min;                                                          
          if (val > max) return max;                                                                   
          return val;                                                                                  
      }                                                                                                
                                                                           
                                                              
      double lerp(double a, double b, double t) {                                                                           
          return a + (b - a) * t;                                                                                           
      }                                                                                                                     
      }                                                                                                                         
                                                                                                  
      int main() {                                                                                
          cout << "--- Calling using Scope Resolution (::) ---" << endl;                          
                                                                                                       
                                                                    
          cout << "Physics Clamp (15.5, 0.0, 10.0) : " << Physics::clamp(15.5, 0.0, 10.0) << endl;
          cout << "Physics Lerp (0.0, 100.0, 0.5)  : " << Physics::lerp(0.0, 100.0, 0.5) << endl; 
                                                                                                  
                                                        
          cout << "GameMath Clamp (25, 0, 20)      : " << GameMath::clamp(25, 0, 20) << endl;     
                                                                                                  
          cout << "\n--- Using Namespace in Limited Block Scope ---" << endl;                     
                                                                                                  
                                                                 
          {                                                                                       
              using namespace GameMath;                                                           
                                      
              cout << "Block Scope Lerp (10.0, 50.0, 0.1): " << lerp(10.0, 50.0, 0.1) << endl;    
              cout << "Block Scope Clamp (5, 10, 20)     : " << clamp(5, 10, 20) << endl;         
          }                                                                                       
                     
                                                                                                  
          return 0;                                                                               
      }                                                                                           


        
        
                                    

                                    
                                                   