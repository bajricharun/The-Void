#include <iostream>

void welcome() {
  std::cout<<R"(
                                ,-.
       ___,---.__          /'|`\          __,---,___
    ,-'    \`    `-.____,-'  |  `-.____,-'    //    `-.
  ,'        |           ~'\     /`~           |        `.
 /      ___//              `. ,'          ,  , \___      \
|    ,-'   `-.__   _         |        ,    __,-'   `-.    |
|   /          /\_  `   .    |    ,      _/\          \   |
\  |           \ \`-.___ \   |   / ___,-'/ /           |  /
 \  \           | `._   `\\  |  //'   _,' |           /  /
  `-.\         /'  _ `---'' , . ``---' _  `\         /,-'
     ``       /     \    ,='/ \`=.    /     \       ''
             |__   /|\_,--.,-.--,--._/|\   __|
             /  `./  \\`\ |  |  | /,//' \,'  \
            /   /     ||--+--|--+-/-|     \   \
           |   |     /'\_\_\ | /_/_/`\     |   |
            \   \__, \_     `~'     _/ .__/   /
             `-._,-'   `-._______,-'   `-._,-'

````````````````````````````` |||          ||| |||==========     \\\                      /// ///``````````\\\ ||| |||````\\\
````````````````````````````` |||          ||| |||                \\\                    ///  |||          ||| ||| |||     \\\
             |||              |||          ||| |||                 \\\                  ///   |||          ||| ||| |||      \\\
             |||              |||          ||| |||                  \\\                ///    |||          ||| ||| |||       \\\
             |||              |||          ||| |||                   \\\              ///     |||          ||| ||| |||        \\\
             |||              |||          ||| |||                    \\\            ///      |||          ||| ||| |||         \\\   
             |||              |||==========||| |||==========           \\\          ///       |||          ||| ||| |||          |||  
             |||              |||          ||| |||                      \\\        ///        |||          ||| ||| |||          |||
             |||              |||          ||| |||                       \\\      ///         |||          ||| ||| |||          |||
             |||              |||          ||| |||                        \\\    ///          |||          ||| ||| |||          |||
             |||              |||          ||| |||                         \\\  ///           |||          ||| ||| |||          |||
             |||              |||          ||| |||==========                \\\///            \\\__________/// ||| |||__________|||
  )" <<'\n';
  std::cout << R"(
/``````````````````````````````````````````````````````\                           
|     Welcome to the Void .Enjoy the adventure!         |
\_________              _______________________________/ 
          \_         __/    ___---------__               
            \      _/      /              \_             
             \    /       /                 \            
              |  /       | _    _ \          \           
              | |       / / \  / \ |          \          
              | |       ||   ||   ||           |         
              | |       | \_//\\_/ |           |         
              | |       |_| (||)   |_______|   |         
              | |         |  ||     | _  / /   |         
               \ \        |_________|| \/ /   /          
                \ \_       |_|_|_|_|/|  _/___/           
                 \__>       _ _/_ _ /  |                 
                          .|_|_|_|_|   |                 
                          |           /                  
                          |__________/                   
	
	)" << '\n';
	std::cout << "Type help to get more information about the game\n";
}