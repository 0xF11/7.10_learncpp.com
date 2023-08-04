/*
What’s wrong with the following for loop?

// Print all numbers from 9 to 0
for (unsigned int count{ 9 }; count >= 0; --count) // Int count is an unsigned variable which means it can never be less than 0 since it can never go negative and will just wrap around 
    std::cout << count << ' ';
*/

int main()
// Fixed version of the program.
{
  for(int count{9}; count >=0; --count)
    {
    std::cout << count << ' ';
    }

}
