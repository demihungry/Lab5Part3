#include <iostream>
#include <string>
#include <vector>
int main(int argc, char* argv[]) {
  std::vector<std::string> arguments(argv, argv + argc);
  int score{};
  bool first = true;
  for (const std::string& a : arguments){
    if(first){
      first = false;
      continue;
    } else{
      if(a == "2" || a == "3" || a == "4" || a == "5" || a == "6" || a == "7" || a == "8" || a == "9" || a == "10"){
        score += std::stoi(a);

      }else if(a == "J" || a == "Q" || a == "j"){
        score += 10;

      }else if(a == "A"){
        if(score <= 21){
          score += 11;
        } else{
          score +=1;
        }
      } else{
        std::cout << "error: unknown card '" << a << "' ";
      }
    }

    if(score > 21){
      std::cout << "Score is " << score;
    }else{
      std::cout << "Score is " << score << ", BUST";
    }

    return 0;

  }
  // TO-DO create a bool variable in order to skip the first element in the for-each loop
  
  // TO-DO create an int variable in order to store the final score 
  
  // TO-DO create a for-each loop to iterate every element in the arguments
  // In order to pass the test, you need to using const and & in the loop
  // Example : for(const std::string& s : arguments) 
  
  // TO-DO Inside the for-each loop, use if else Statement to skip the first element of arguments
     if(skip) {
      skip = false; 
     } else {
       // TO-DO create a if statement, when input element is 2 to 10
       // 
       // Use std::stoi to change the string element to a int type 
       // Then store the value into final score (created in line 8) 
       //
       
       // TO-DO create a else-if, when input element is JQK
       // Use final Score += 10 to store the value
       
       // TO-Do create another else-if, when input element is A
       // Inside this else-if, create a if and else : if{}else{} not else if{}
       // 2 cases: 
       // When 'A' add other card is smaller or equal to 21, add 11
       // 11 can only be added once to score
       
       // Try to think this in another way: smaller or equal(<=) 21 means before add A to the score
       // The score should be smaller or equal to 10
       // 
       // else the A should count 1 to the score
       
       // TO-DO After two else-if statement, create a else statement
       // This is used for when the input is not 2 to 10, JQK or A
       // print out error: unknown card : 
       // 
     }
       // TO-DO 
       // Create a if else statement
       // When Score is less than 21 
       // Print out final score 
  
       // else
       // When Score is greater than 21
       // Print out final score, BUST
  
       return 0;
}
       
       
