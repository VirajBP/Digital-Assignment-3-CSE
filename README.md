# Digital-Assignment-3-CSE
A sample idea about a health app or program which helps to seek the information about the nearby hospitals, ambulances and doctors nearby your locality.

DETAILED EXPLANATION AND QUESTION IS AS FOLLOWS:-

Question - Create a program using C++ to take inputs from user regarding its health issue and provide the details of the doctors nearby his locality, also help the user get required doctor's appointment by taking necessary details from him and storing them using a class health. Also, according to the initial input decide whether user wants to get the information of doctors or the hospitals and contact numbers of the ambulances nearby. Provide information of hospitals and ambulance numbers to the user of his locality if asked.

Explanation of the code – 
1.	The code uses class health to store the details of the user such as his name, age, weight, height, the number of days since he is diseased. 
2.	Code asks the user to input his area of body feeling diseased going from face, upper and lower body to specific parts of those respectively. 
3.	After selecting the area then user is been asked for the city which he lives in (here only Maharashtra based is created and all the major cities of Maharashtra has been noted in an array because all over India consideration there are over thousands of cities and this is a basic level program), then the information of the doctors is been printed using a for loop and the saved names in the array(we can do this by saving the real names for doctors of different cities and then linking them as per the city input but the code being just a sample one only 20 doctors have been kept with decided specialities).
4.	Now we take the input of the specified doctor from the above and user’s details for appointment fixing or else if user wanted only the information, then he can exit the code. (Here also the appointment time and address cannot be changed since the program is not actually linked with the doctors). 
5.	In the first stage itself user is been asked that whether he wants to know the details of the doctor or he wants to know about the hospitals and ambulances in his locality. 
6.	If he chooses for the second one then we first ask his city for tracing the hospitals and ambulances near him. Being a sample one, the hospital information is already been stored in an array and then printed using a loop, same with the ambulance phone numbers. 
7.	After this section the code runs in infinite loop but if user wants to exit at any moment he can and options are provided for it.
