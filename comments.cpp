//The following .ccp is meant to serve as a general exaplaination of the main.cpp code. It will be useful
//in understanding the thought process and general structure of the code. Each code line here represents
//the corresponding line of cdoe in main.cpp (when viewed in full screen).





//Initilization of program
// " "
// " "

//Begin initlization of class, starting with the base class, "chest".
// Set private member variable "cFlag", which holds the state of whether or not chest has been
// "selected". Private so as not to be accidentally altered by the main function.
// Set public member functions.
//Begin with constructors (initially, all items not selected).
//Set a function that can return the cFlag state, for printing purposes.
//Set a function that can change the cFlag state. Used only by inherited classes function calls,
//thus cFlag unalterable unless specififed.

//Initlization of class inheritnace, making "lungs" a 1st child of "chest". "public" operation
//gives class lungs all public and protected member functions/variables of class chest.
//Remainder of class initilzation same as class chest, only using lFlag instead of cFlag. Abbreviated as L in functions.






//Initilization of multi-level inheritance, making "right lung" a 2nd child of "chest" and a 1st child of "lungs".
//Right lung receives protected and public member functions/variables from lungs (which includes chest).
//Remainder of class initlization same as prior. Abbreviated as RL in funcitons.






//Next step of multi-level inheritnace, making "right superior lobe" a 3rd child of "chest", a 2nd child of "lungs",
//and a 1st child of "right lung". Right superior lobe receives protected and public member functions/variables from
//right lung (which includes lungs, which includes chest.... this will be a pattern for generational classes via multi-level inheritance)
//Abbreivated as RSL in functions.





//Inilization of heirarchy inheritance, making "right middle lobe" a 3rd child of "chest", a 2nd child of of "lungs",
//and a 1st child of "right lung", as well as making "right middle lobe" a sister child of "right superior lobe"
//Remainder of class initlization and access same as prior. Abbreviated as RML in functions.





//Continuation of heiracrhcy inheritnace, making "right inferior lobe" a 3rd child of "chest", a 2nd child of of "lungs",
//and a 1st child of "right lung". Also, this makes "right middle lobe" a sister child of "right superior lobe" and
//"right middle lobe".
//Remainder of class initlization and access same as prior. Abbreviated as RIL in functions.





//Initilization of a 2nd generation class, making "left lung" a 2nd child of "chest", a 1st child of "lungs", and sister
//class to "right lung". Recieves member functions/variables from chest and lungs.
//Remainder of class initilzation same as prior. Abbreviated as LL in functions.







//Initilization of 3rd generation class, making "left superior lobe" a 3rd child of "chest", a 2nd child of "lungs",
//and a 1st child of "left lung". Access to left lung, lungs, chest.
//Remainder of class initlization same as prior. Abbrevaited as LSL in functions.






//Initilization of 3rd generation class, making "left inferior lobe" a 3rd child of "chest", a 2nd child of "lungs",
//a 1st child of "left lung", and sister class of "left superior lobe".
//Remainder of class initilization and access same as prior. Abbreviated as LIL in functions.






//Initlization of 1st generation class, making "heart" a 1st child of "chest" and sister class to "lungs".
//Remainder of class initilization same as prior. Recieves functions/variables from chest only. Abbreviated as H in functions







//Initlization of 2nd generation class, making "left ventricle" a 2nd child of "chest", 1st child of "heart".
//Reaminder of class initlization same as prior. Recieves functions/varaibles from chest and heart.
//Abbreviated as LV in functions.






//Initilization of 2nd generation class, making "right ventricle" a 2nd child of "chest", 1st child of "heart",
//and sister class to "left ventricle".
//Remainder of class initlization and memeber access same as prior. Abbreviated as RV in functions.






//Initlization of 2nd generation class, making "left atrium" a 2nd child of "chest", 1st child of "heart",
//and sister class of "left ventricle" and "right ventricle".
//Remainder of class intitilzation and member access same as prior. Abbreviated as LA in functions.






//Initiliztion of 2nd generation class, making "right atrium" a 2nd child of "chest", 1st child of "heart",
//and sister class of "left ventricle", "right ventricle", and "left atrium".
//Remainder of class initilzation and member access same as prior. Abbreviated as RA in functions.






//Initilization of 2nd generation class, making "septum" a 2nd child of "chest", 1st child of "heart",
//as sister class of "left ventricle", "right ventricle", "left atrium", and "right atrium".
//Remainder of class initilization and memeber access same as prior. Abbreviated as SE in functions.







//Initilization and definition of the function which can print the heirarchy. Takes input objects
//of all 10 classes which reside on the lowest branch of their respective heirarchy, thus giving us
//access to all functions throughout the heirarchy. Prints the order of heiarchy as well as states of all items.

//Begin by "cout"-ing the state of the chest.
//Next, a space (to represent new branch), followed by the state of lungs
//Next, another larger space (to represent yet another branch), followed by the state of the right lung
//The largest space (lowest branch), followed by the state of the right superior lobe
//Keeping this largest space, next is the state of the right middle lobe
//Keeping this largest space, next is the state of the right inferior lobe
//Reverting to the 2nd largest space (2nd branch), followed by left lung
//Return to largest space, next is the state of the left superior lobe
//Keeping this largest space, next is the state of the left inferior lobe
//Reverting to first space (1st branch), next is the state of the heart
//With the 2nd largest space, next is the state of the left ventricle
//Followed by the state of the right ventricle
//State of the left atrium
//State of the right atrium
//State of the septum.
//End print function.

//Begin main funciton

//Initilize objects of the 10 classes which reside in the lowest branch of their respective heiarchy, Since the lowest
//branches have inherited the functions and thus the ability to alter state variables via these functions of their parents,
//there is no reason to create objects of higher generations, saving time and storage space.







//Begin by telling the user what the heiracrhy looks like
//by using the print function defined earlier.
//Initilize some varialbes for later use. Specifically, "pass" will be how we show an item is selected and "dont_pass" is for item deselect.
//Initlize int x=0. This will be used to check for valid item entry later. If valid item entry, x is set to 1 and no error message displayed.
//Set a do...while loop that continues while flag='y' (so that we can do more than one operation, at user request).
//Begin by prompting the user to either "select" or "deselect" an item. Deselecting an item would do nothing here, but is neccisary
//when developing the loop and multiple iteratiions. Use getline() to get user selection and store in "option" variable.
//If option='s', begin selection.
//Ask user to select an item. Selection of item will cause a corresponding action in the code. Invalid entry gives an error.

//If user selects chest, select only chest by giving member function RSL.setCFlag(string) the "pass" variable (i.e, show select with [x]). x=1.
//If user selects lungs, select chest and lungs via the same process as above.
//If user selects right lung, select chest, lungs, and right lung.
//if user selects right superior lobe, select chest, lungs, right lung, and right superior lobe.

//if user selects right middle lobe, select chest, lungs ,right lung, and right middle lobe.

//if user selects right inferior lobe, select chest, lungs, right lung, and right inferior lobe.

//if user selects left lung, select chest, lungs, left lung.
//if user selects left superior lobe, select chest, lungs, left lung, left superior lobe.

//if user selects left inferior lobe, select chest, lungs, left lung, left inferior lobe.

//if user selects heart, select chest and heart.
//if user selects left ventricle, select chest, heart, left ventricle.
//if user selects right ventricle, select chest, heart, right ventricle.
//if user selects left atrium, select chest, heart, left atrium.
//if user selects right atrium, select chest, heart, right atrium.
//if user selects septum, select chest, heart, setpum.

//If there was no valid input by the user, x will remain at 0 and an error message will display telling the user to loop through and try again.
//Reset x to 0.

//If "option"=d, enter deslect.
//Ask user for item deselection.

//If user deselects chest, all items in the heirarchy should be deselected. The program does this by running through each .set__Flag(string)
//function of every item, and passes "dont_pass", setting the flags of all items to "[ ]", i.e deselection. Once again, x=1 to cause the later error
//message to not display.

//If user deselects lungs, all items in the heirachry except for chest should be deselcted. All .set__Flag(string) functions are called
//with exception to .setCFlag(string), and given dont_pass as before.
//If user deselects right lung, right lung, right superior lobe, right middle lobe, right inferior lobe should all be deslected via above method.Chest, lungs, heart, and any of heart decendants should not be effected.
//If user deselects right superior lobe, only the right superior lobe should be deselected via the above method.
//If user deselects right middle lobe, only the right middle lobe should be deselected via the above method.
//If user deselects right inferior lobe, only the right inferior lobe should be deselected via the above method.
//If user deselects left lung, the left lung, left superior lobe, and left inferior lobe should be deselected via the above method. Chest, lungs, heart or any of its decendants, right lung or any of its decendants should not be effected.
//If user deselects left superior lobe, only the left superior lobe should be deselected via the above method.
//If user deselects left inferior lobe, only the left inferior lobe should be deslected via the above method.
//If user deslects the heart, the heart and all of its decendants should be deslected via the above method. Chest, lungs, right lung and its desencdants, left lung and its decendants should not be effected.

//If user deselects the left ventricle, only the left ventricle should be deslected.
//If user deselects the right ventricle, only the right ventricle should be desleected.
//If user deselects the left atrium, only the left atrium should be deselected.
//If user deselects the right atrium, only the right atrium should be deselected.
//If user deselected the septum, only the septum should be deslected.

//If x=0, user inputted invalid entry and error displays as before.


//When selecting "option", if user does not use 's' or 'd', program deleivers an error message and does not attempt to select or deselect anything
//on the current loop iteration.

//User is given the option to continue with the selection or deslection process. 'y' restarts the loop from the selection or deselection stage, while
//'n' exits the loop, since the do....while loop only continues while flag=='y'.
//Before continuation or exiting of the loop occurs, however, the program runs a check to see if the user entered a valid response. If user uses
//something other than 'y' or 'n', the program will display an error message and ask the user to enter again.



//end of do...while loop seen here.
//Finally, the program has exited all neccisary loops, and has updated according to the users whishes. To complete the program, it once again
//invokes the printHeiarchy function, and displays to the user the result of their inputs. All items that remain selected will have "[x]" in front   of them, while any deselected items will remain at "[ ]"..
//End program.
