#include <stdio.h>
	#include <stdlib.h>
	#include <conio.h>
	#include <windows.h>
	#include <string.h>
	#include <time.h>
	#include <stdbool.h>
	
	void gotoxy(short x, short y);  // Function for gotoxy
	
	char c1[20]={'N','a','m','e'}; 
	
	void gotoxy(short x, short y)
{
	COORD pos = {x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

	
	void mainscreen()
	{
		puts("\n\n\t\t\t\t\t\t\t Quiz Game");
		puts("\n\n\t\t\t\t\t\t   Check your Knowledge");
		puts("\n\n\t\t\t\t\t\t   1. Play Game ");
		puts("\n\t\t\t\t\t\t   2. High score");
		puts("\n\t\t\t\t\t\t   3. Reset Score ");
		puts("\n\t\t\t\t\t\t   4. Instructions");
		puts("\n\t\t\t\t\t\t   5. Credits ");
		puts("\n\t\t\t\t\t\t   6. Exit");
	}
	void Welcome()
    {
	system("color f5");
	printf("\n\n\n\n\n");
	printf("\t\t\t\t\t|*******************************************|\n");
	printf("\t\t\t\t\t|**\t*****************************\t  **|\n");
	printf("\t\t\t\t\t|**\t.............................\t  **|\n");
	printf("\t\t\t\t\t|**\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\t  **|\n");
	printf("\t\t\t\t\t|**\t                            \t  **|\n");	
	printf("\t\t\t\t\t|**\t*****************************\t  **|\n\n");
	printf("\t\t\t\t\t\"WELCOME TO GERNAL KNOWLEDGE QUESTINING GAME\"   \n\n");
    printf("\t\t\t\t\t|**\t*****************************\t  **|\n");
	printf("\t\t\t\t\t|**\t                            \t  **|\n");
	printf("\t\t\t\t\t|**\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\t  **|\n");
	printf("\t\t\t\t\t|**\t.............................\t  **|\n");
	printf("\t\t\t\t\t|**\t*****************************\t  **|\n");
	printf("\t\t\t\t\t|*******************************************|\n\n\n");
	printf("\n\t\t\t\t\tDESIGNED BY:\n");  
	printf("\t\t\t\t\t\t    KHIZER MEHMOOD");
	printf("\n\t\t\t\t\t\t    Press any key");
	
			
			getch();
			system("cls");
	 			mainscreen();	
	}
	
	void addToHighScore (int score) 
	{
	
	FILE *fptr;
	 
	int num1,num2,num3,num4,num5;
	char name1[10],name2[10],name3[10],name4[10],name5[10];
	 fptr  = fopen ("E://game.txt", "r");
	fscanf (fptr, "%d" "%s" "%d" "%s" "%d" "%s" "%d" "%s" "%d %s", &num1, &name1,&num2, &name2,&num3, &name3,&num4, &name4,&num5, &name5);
	
	
	
	int num[6];
	char * name[6];
	
	num[0] = num1;
	num[1] = num2;
	num[2] = num3;
	num[3] = num4;
	num[4] = num5;
	
	name[0] = name1;
	name[1] = name2;
	name[2] = name3;
	name[3] = name4;
	name[4] = name5;
	
//	printf("\nenter\n");
//	scanf("%d", &num[5]);
    num[5]=score;
    name[5]= c1;
//	name[5]= malloc(sizeof(char)*255);
//	scanf("%s", name[5]);
	
	 fclose(fptr);
	 
//	 
//	int i;
//	for ( i=0; i<5;i++) {
//	printf("%d - %s\n", num[i], name[i]);	
//	}
	
	
	int a,b;
	for (a = 0; a < 6; a++)                    
		{
			for (b = 0; b < 6; b++)            
			{
				if (num[b] < num[a])                
				{
					int tmp = num[a];
					num[a] = num[b];                       
					num[b] = tmp;
					char *ctemp = *(name+a);
					*(name+a) = *(name+b) ;   
					*(name+b) = ctemp;
					                            
				}  
			}
		}
		
	
//	printf("\nAfter sort\n");
//		int j;
//	for ( j=0; j<5;j++) {
//	printf("%d - %s\n", num[j], name[j]);	
//	}
	
	
	FILE *ptr;
	ptr  = fopen ("E://game.txt", "w");
	
	int z;
	for (z=0; z<5;  z++) {
	
	
	fprintf(ptr, "%d", num[z]);
	fputs(name[z], ptr);
	fputs("\n", ptr);
		
	}
	
	
	 fclose(ptr);
	// system ("cls");
	// displayHighScore();

	}
	
	void displayHighScore() {
    system ("cls");
	FILE *fptr;
	 
	int num1,num2,num3,num4,num5;
	char name1[10],name2[10],name3[10],name4[10],name5[10];
	 fptr  = fopen ("E://game.txt", "r");
	fscanf (fptr, "%d" "%s" "%d" "%s" "%d" "%s" "%d" "%s" "%d %s", &num1, &name1,&num2, &name2,&num3, &name3,&num4, &name4,&num5, &name5);
	
	
	
	int num[6];
	char * name[6];
	
	num[0] = num1;
	num[1] = num2;
	num[2] = num3;
	num[3] = num4;
	num[4] = num5;
	
	name[0] = name1;
	name[1] = name2;
	name[2] = name3;
	name[3] = name4;
	name[4] = name5;
	
	 fclose(fptr);
	 
	printf ("\n\n\t\t\tHIGH SCORES: \n\n") ;
	printf ("\t\t\tName:        Score: \n\n");
	
	int i;
	for ( i=0; i<5;i++) {
	printf("\t\t\t%s        %d\n\n",  name[i], num[i]);	
	}
	printf("enter any key to go main ");
	getch();
	system("cls");
		main();	
	}
	
	void random()
	{
		
		/*
		This function is called by quesRandomSelector which checks
		if the question which is going to be selected is already 
		selected or not. In case it is already selected it return true 
		else false.
	    */
		bool alreadySelected (int selectedQuestions[],int rSize, int questionIndex){
		bool Flag; //default value of boolean variable is false
		
		int i;
		
		for (i=0;i<rSize;i++)
		{
			if (selectedQuestions[i]==questionIndex){
				Flag=true;
				break;
			}
		}
		return Flag;
	}
	
	/*
		This function is for selecting random questions from ques Array.
	*/
	void quesRandomSelector(char * questions[], int qSize, int selectedQuestions[],int rSize){
		int randomIndex=0;
		
		int i;
		for (i=0;i<rSize;){
			randomIndex=rand()%qSize;
			// condition to check whether the question has already been selected or not.
			if (!alreadySelected(selectedQuestions,rSize,randomIndex)){
				selectedQuestions[i]=randomIndex;
				i++;
			}
		}
	}
	
	
	
		
	void checkAnswers (char selectedAnswers[], char cAns[], int selectedQuestions[], int rSize) {
	
		
		printf("\n\nResult : \n");
		int score =0,i;
		for (i=0;i<rSize;i++) {
			
			
		
			char str[2];
            str[0] = selectedAnswers[i];
        	str[1] = '\0';
	
	        char str2[2];
	        str2[0] = cAns[selectedQuestions[i]];
	        str2[1] = '\0';
	
			if (strcasecmp(str, str2) == 0 ) {
				printf("\nQuestion No %d is CORRECT", i+1);
				score = score+1 ;
			}else {
				printf("\nQuestion No %d is WRONG",i+1);
			}
			
		}
		printf("\nFinal Score : %d out of 10", score);
		
	    
		printf("\n\nYour Answers : \n");
		int j;
		for (j=0;j<rSize;j++) {
			printf("Question No %d: %c\n",j+1, selectedAnswers[j]);
		}
		
		printf("\n\nOriginal Answers : \n");
		for (j=0;j<rSize;j++) {
			printf("Question No %d: %c\n",j+1, cAns[selectedQuestions[j]]);
		}
		
//	FILE *fptr;	
//	fptr  = fopen ("E://game.txt", "a+");
//   	
//     	fprintf(fptr, "%d ", score);
//    	fputs(c1, fptr);
//     	fputs("\n", fptr);
//   		
//	fclose(fptr);

    sleep(10);
    addToHighScore (score);		
		
		
	}
	
	
	
	/*
		function responsible for showing/asking randomly selected questions.
	*/
	void askQuestions(char * questions[], int selectedQuestions[], int rSize, char cAns[]){
		
		int i;
		char ans;
		char ansArray[rSize];
		for (i=0;i<rSize;i++)
		{
			fflush(stdin);
			system("cls");
		//	printf("\n                 GERNAL KNOWLEDGE MCQs\n\n");
			printf("Question %d : %s\n\nAns : ", i+1,questions[selectedQuestions[i]]);
			scanf("%c", &ans);
			ansArray[i] = ans;
			  
		}
		
		checkAnswers(ansArray, cAns, selectedQuestions,rSize);
		
	
		
		
	}

		
			
	fflush(stdin);	
		//random seed
		srand (time(NULL));
	
		const int qSize=88;	//inializing size of questions array
		const int rSize=10;	//size of randomly selected question array
	
	
		int selectedQuestions[rSize]; //randomly selected questions array of size rSize
		char * ques[qSize];	//questions array of size qSize
	
	
	
	
	
		ques[0]="The largest desert in the world is__________\n (A) Sahara \n(B) Arctic \n(C) Antarctica \n(D) Atacama";
	
		ques[1]="The largest cold desert in the world is: \n(A) Antarctica \n(B) Arctic \n(C) Sahara \n(D) Atacama";
		
		ques[2]=" The largest waterfalls system in the world is \n(A) Iguazu Falls \n(B) Niagara Falls \n(C) Victoria Falls \n(D) Angel Falls";
		
		ques[3]="The Great Wall of China is about __________ KM long. \n(A) 20,196 \n(B)19,196 \n(C) 21,196 \n(D) 18,196";
		
		ques[4]="The currency of Indonesia is: \n(A) Rupiah \n(B) Rangit \n(C) Riyal \n(D) Dinar ";
		
		ques[5]="The world’s highest mountain is in \n(A) China \n(B) Pakistan \n(C) Nepal \n(D) India";
		
		ques[6]="Which country, on the map of world, appears as “Long Shoe”? \n(A) Hungary \n(B) Greece \n(C) Italy \n(D)Portugal";
		
		ques[7]=" The largest ocean of the world is \n(A) Atlantic \n(B) Pacific \n(C) Indiann \n(D) None of these";
		
		ques[8]="The Capital of Canada is: \n(A) Tirane \n(B) Ottawa \n(C) Luxembourg \n(D) Athens";
		
		ques[9]="Where is the Statue of liberty situated? \n(A) New York, USA \n(B) California, USA \n(C) Washington D.C, USA \n(D) None of these";
		
		ques[10]="Which is the smallest bird in the bird? \n(A) Sparrow \n(B) Hemming Bird \n(C) Ostrich \n(D) None of these";
		
		ques[11]="The largest populous Islamic country of the world is: \n(A) Pakistan \n(B) Iran \n(C) Indonesia \n(D) Saudi Arabia";
		
		ques[12]="Suez Canal is between: \n(A) Arabian Sea and Red Sea \n(B) Red Sea and North Sea \n(C) Mediterranean Sea and North Sea \n(D) Mediterranean Sea and Red Sea";
		
		ques[13]="The highest part of the Earth is: \n(A)Mount Everest \n(B) K2 \n(C) Norway \n(D) North Pole";
		
		ques[14]="The lowest part of the Earth is \n(A) Dead Sea \n(B) Mariana Trench \n(C) South Africa \n(D) South Pole ";
		
		ques[15]="The smallest Sea of the World is \n(A) Dead Sea \n(B) Red Sea \n(C) Baltic Sea \n(D)  Arabian Sea";
		
		ques[16]="World’s famous bridge “Golden Gate Bridge” is in: \n(A) San Francisco \n(B) New Delhi \n(C) France \n(D) Sydney";
		
		ques[17]=" Which country is called “Land of thousand islands“? \n(A) Malaysia \n(B) indonesia \n(C) Ireland \n(D) Finland";
		
		ques[18]="What was the name of Atomic Bomb that dropped on the city of Nagasaki? \n(A) Little Boy \n(B) Fat Boy \n(C) Little Man \n(D) Fat Man";
		
		ques[19]=" The Temple of Heaven, a religious building, is located in: \n(A) Edinburgh \n(D) Rome \n(C) Beijing \n(D)Shanghai";
		
		ques[20]="The Earth surface is divided in __________ Continents.:  \n(A)5 \n(B)6 \n(C)7 \n(D)8";
		
		ques[21]="The Largest Continent (by Area) of the World is :  \n(A)Asia \n(B)Europe \n(C)Aferica \n(D)North America";
		
		ques[22]="The percentage of the salt water on earth surface is: \n(A) 93% \n(B) 95% \n(C) 97% \n(D) None of These";
	
		ques[23]="Which country has the oldest flag of the world? \n(A) America \n(B) Denmark \n(C) Japan \n(D) None of these";
		
		ques[24]="Who united all the Sikhs and founded kingdom in the Punjab: \n(A) Ranjit Singh \n(B) Guru Nanak \n(C) Gobind Singh \n(D) None of these";
		
		ques[25]="“When Pakistan became Islamic Republic in: \n(A) 1947 \n(B) 1956 \n(C) 1973 \n(D) None of These";
		
		ques[26]="The first foreign Minister of Pakistan was: \n(A) Sikandar Mirza \n(B) Sir Muhammad Zafrullah \n(C) Ghulam Muhammad \n(D) None of These";
		
		ques[27]="The largest university of Pakistan is: \n(A) COMSATS University \n(B) Punjab University \n(C) Quaid e Azam University \n(D) Karachi University";
		
		ques[28]="Which is the most thinly populated province of Pakistan? \n(A) KP \n(B) Sindh \n(C) Punjab \n(D) Balochistan";
		
		ques[29]="The second atom bomb was dropped on Nagasaki on: \n(A) Aug 9, 1945 \n(B) Aug 13,1914 \n(C) Aug 16, 1945 \n(d) none of these";
		
		ques[30]="Mulana Muhammad Ali Johar issued ” Hamdard ” urdu newspaper in: \n(A) 1909 \n(B) 1913 \n(C) 1916 \n(D) None of these";
		
		ques[31]="When was the Constitution of 1973 enforce? \n(A) 10th Aug, 1973 \n(B) 12th Aug, 1973 \n(C) 14th Aug, 1973 \n(D) None of these";
		
		ques[32]=" Largest Radio Station of Pakistan found in: \n(A) Karachi \n(B) Lahore \n(C)Islamabad \n(D) None of these";
		
		ques[33]="Himalaya Range is based in \n(A) Europe \n(B) Asia \n(C) Africa \n(D) None of These";
		
		ques[34]="Which is the deepest Ocean in the world? \n(A) Artic \(B) Asian \n(C) Pacific \n(D) None of these";
		
		ques[35]="Which is the hottest place in Pakistan? \n(A) Sibbi \n(B) Jacobabad \n(C) Kashmor \n(D) None of these";
			
		ques[36]="How many crops seasons are in Pakistan? \nA. 2 \nB. 3 \nC. 4 \nD. None of the above.";	
	
		ques[37]="how many stanzas are there in pakistan national anthem ? \n(A) Three \n(B) Five \n(C) Six \n(D) Seven";
	
		ques[38]="What official name was given to Pakistan in 1956 constitution? \n(A) Islamic Pakistan \n(B) Islamic Republic of Pakistan \n(C) Republic of Pakistan \n(D) United States of Pakistan";
	
		ques[39]="Who was the Prime Minister of Pakistan during enforcement of first constitution? \n(A) Khwaja Nazim Uddin \n(B) Mohammad Ali Bogra \n(C) Ibrahim Ismail Chundrigar \n(D) Choudhry Mohammad Ali";
	
		ques[40]="Muslim league's headquarter was in \n(A) Delhi \n(B) Lucknow \n(C) Bombay \n(D) Karachi";
		
		ques[41]="Mohenjo-daro sites were discovered in \n(A) 1922 \n(B) 1923 \n(C) 1823 \n(D) 1822";
		
		ques[42]="Who prepared Pakistan's national flag ? \n(A) Syed Amir-uddin Kedwaii \n(B) Hafeez Jalundhri \n(C) Chaudhri Rahmat Ali \n(D) Allama Iqbal";
		
		ques[43]="Fostering is a synonym of:\nA) Safeguarding   B) Neglecting   C) Ignoring   D) Nurturing";
			
		ques[44]="Propel is a synonym of:\nA) Drive   B) Jettison   C) Burst   D) Acclimatize";
	
		ques[45]="The book is______the mug and pen.\nA) In   B) Among   C) Between   D) Of";
		
		ques[46]="A good judge never jumps _________the conclusion.\nA) In   B) To   C) On   D) At";
		
		ques[47]="The Students protested _____ the ill-treatment of their leader.\nA) over   B) to   C) against   D) for";
		
		ques[48]="Synonym of Exemplify is:\nA) Reprehensible   B) Illustrate   C) Empty   D) Finish";
		
		ques[49]="The_________ of war is expected very soon.\nA) Cessation   B) Cession   C) Session   D) Cestion";
		
		ques[50]="Antonym of BRUSQUE is _____________\nA) Corrupt   B) Brash   C) Energetic   D) Courteous";
		
		ques[51]="Caravan : desert ::\nA) Boat:Cruise   B) Book:Library   C) Midnight:Noon   D) NONE";
		
		ques[52]="Salutation : Farewell ::\nA) Birth:Death   B) Army:Navy   C) Noon:Midnight   D) Lunch:Dinner";
		
		ques[53]="He did not give up the fight even though he was badly bruised.\nA) The fight did not give up by him even though he was badly bruised\nB) The fight had not given up by him even though he was badly bruised\nC) The fight was not given up by him even though he was badly bruised\nD) The fight was not being given up by him even though he was badly bruised.";
		
		ques[54]="We should avoid tranquilizer in order to have a good health\nA) Tranquilizer should avoided by us in order to have good health.\nB) Tranquilizer should been avoided by us in order to have a good health.\nC) Tranquilizer should be avoid by us in order to have a good health.\nD) Tranquilizer should be avoided by us in order to have a good health.";
		
		ques[55]="Look, It _______.\nA) Rains   B) is raining   C) has been raining   D) had been raining";
		
		ques[56]="Which parts of speech shows the relationship of noun or pronoun with the rest of the sentence?\nA) Preposition   B) Conjuction   C) Adverb   D) Interjection";
		
		ques[57]="His office is always in apple-pie order. What does the idiom/phrase \"apple-pie order\" means?\nA Neat and tidy   B) Disordered   C) Mismanaged   D) Ornamental";
		
		ques[58]="Which number should come next in this series? 25,24,22,19,15\nA) 14   B) 5   C) 30   D) 10";
	
		ques[59]="Which one of the four is least like the other three?\nA) Apple    B) Potato   C) Carrot   D) Bean";
	
		ques[60]="Nia, twelve years old, is three times as old as her sister. How old will Nia be when sheis twice as old as her sister?\nA) 15   B) 18   C) 16   D) 20";
	
		ques[61]="Which one of the four letters is least like the other three?\nA) N   B) F   C) A   D) E";
	
		ques[62]="Two people can make 2 bicycles in 2 hours. How many people are needed to make 12 bicycles in 6 hours?\nA) 6   B) 4   C) 2   D) 1";
	
		ques[63]="A store reduced the price of one of its products by 25 percent. What percentage of the reduced price must it be increased by to put the product back to its original price?\nA) 33 percent   B) 20 percent   C) 23 percent   D) 35 percent";
	
		ques[64]="Book is to Reading as Fork is to:\nA) Drawing   B) Writing   C) Stirring   D)Eating";
		
		ques[65]="Which of the following can be arranged into a 5-letter English word?\nA) H R G S T   B) R I L S A   C) T O O M T   D) W Q R G S";
		
		ques[66]="What number best completes the analogy: 8:4 as 10:\nA) 3   B) 7   C) 24   D) 5";
		
		ques[67]="At a conference, 12 members shook hands with each other before & after the meeting. How many total number of hand shakes occurred?\nA) 100   B) 132   C) 145   D) 144";
		
		ques[68]="The day after the day after tomorrow is four days before Monday. What day is it today?\nA) Monday   B)Tuesday   C) Wednesday   D) Thursday";
		
		ques[69]="6121135 is to flame as 21215120 is to ?\nA) Voice   B) Bald   C) Bloat   D) Castle";
		
		ques[70]="Forest is to tree as tree is to ?\nA) Plant   B) Leaf   C)Branch   D) Mangrove";
		
		ques[71]="Some months have 31 days; how many have 28?\nA) 1   B) 2   C) 9   D) 12";
		
		ques[72]="A doctor gives you 3 pills telling you to take one every half hour. How many minutes will the pills last?\nA) 20   B) 40   C) 60   D) 80";
		
		ques[73]="The basic operations performed by a computer are__________?\nA) Arithmetic operation   B) Logical operation   C) Storage and relative   D) All of the mentioned";
		
		ques[74]="If a computer has more than one processor then it is known as__________?\nA) Uni-process   B) Multiprocessor   C) Multi-threaded   D) Multi-programming";
		
		ques[75]="Which technology is used in compact disks?\nA) Mechanical   B) Electrical   C) Electro magnetic   D) Laser";
		
		ques[76]="1 Gigabyte is equal to ____________?\nA) 1024 bits   B) 1000 megabytes   C) 1024 kilobytes   D) 1024 megabytes";
		
		ques[77]="The brain of any computer system is___________?\nA) ALU   B) Memory   C) CPU   D) Control unit";
		
		ques[78]="Logical extension of multiprogramming operating system is\nA) time sharing   B) multi-tasking   C) single programming   D) both a and b";
		
		ques[79]="Multiprocessor system have advantage of\nA) Increased Throughput   B) Expensive hardware   C) Operating system   D) both a and b";
		
		ques[80]="Another type of multiple-CPU system is the\nA) mini Computer   B) Super computer   C) Clustered computer   D) both a and b";
		
		ques[81]="The initial program that is run when the computer is powered up is called :\nA) boot program   B) bootloader   C) initializer   D) bootstrap program";
		
		ques[82]="How does the software trigger an interrupt ?\nA) Sending signals to the CPU through bus\nB) Executing a special operation called system call\nC) Executing a special program called system program\nD) Executing a special program calle interrupt trigger program";
		
		ques[83]="What is an ISR ?\nA) Information Service Request   B) Interrupt Service Request   C) Interrupt Service Routine   D) Information Service Routine";
		
		ques[84]="The main reason to encrypt a file is to ______________.\nA) Reduce its size   B) Secure it for transmission   C) Prepare it for backup   D) Include it in the start-up sequence";
		
		ques[85]="Which of the following are forms of malicious attack ?\nA) Theft of information   B) Modification of data   C) Wiping of information   D) All of the mentioned";
		
		ques[86]="What is Trojan horse ?\nA) It is a useful way to encrypt password\nB) It is a user which steals valuable information\nC) It is a rogue program which tricks users\nD) It is a brute force attack algorithm";
		
		ques[87]="CPU can access which type of memory directly?\nA) random-access memory   B) magnetic disk   C) magnetic tape   D) None of the mentioned";
		
		
		
		char cAns[]={'C','A','D','C','A','C','C','B','B','A','B','C','D','A','A','C','A','B','D','C','C','A','C',
		'B','A','B','B','B','D','A','B','C','C','B','C','B','A','A','B','D','B','A','A','D','A','C','D','D','B',
		'A','D','A','A','C','D','B','A','A','D','A','C','D','B','A','D','B','D','B','A','C','B','D','C','D','B',
		'D','D','C','D','A','C','D','B','C','B','D','C','A' };
	
	
		// calling function to select random questions
		quesRandomSelector(ques,qSize,selectedQuestions,rSize);
	
		// calling function to ask selected questions 
		askQuestions(ques,selectedQuestions,rSize, cAns);
		
		
		
	}
	
	void gk()
	{
		/*
		This function is called by quesRandomSelector which checks
		if the question which is going to be selected is already 
		selected or not. In case it is already selected it return true 
		else false.
	    */
		bool alreadySelected (int selectedQuestions[],int rSize, int questionIndex){
		bool Flag;
		
		int i;
		
		for (i=0;i<rSize;i++)
		{
			if (selectedQuestions[i]==questionIndex){
				Flag=true;
				break;
			}
		}
		return Flag;
	}
	
	/*
		This function is for selecting random questions from ques Array.
	*/
	void quesRandomSelector(char * questions[], int qSize, int selectedQuestions[],int rSize){
		int randomIndex=0;
		
		int i;
		for (i=0;i<rSize;){
			randomIndex=rand()%qSize;
			// condition to check whether the question has already been selected or not.
			if (!alreadySelected(selectedQuestions,rSize,randomIndex)){
				selectedQuestions[i]=randomIndex;
				i++;
			}
		}
	}
	/*
		function responsible for showing/asking randomly selected questions.
	*/
	void askQuestions(char * questions[], int selectedQuestions[], int rSize){
		
		int i;
		char ans;
		
		for (i=0;i<rSize;i++)
		{
			system("cls");
			printf("\n                 Gernal knowledge MCQs\n\n");
			printf("Question %d : %s\n\nAns : ", i+1,questions[selectedQuestions[i]]);
			scanf("%c", &ans);
			fflush(stdin);  
		}
	}
		
			
		
		//random seed
		srand (time(NULL));
	
		const int qSize=42;	//inializing size of questions array
		const int rSize=5;	//size of randomly selected question array
	
	
		int selectedQuestions[rSize]; //randomly selected questions array of size rSize
		char * ques[qSize];	//questions array of size qSize
	
	
	
	
	
		ques[0]="The largest desert in the world is__________\n (A) Sahara \n(B) Arctic \n(C) Antarctica \n(D) Atacama";
	
		ques[1]="The largest cold desert in the world is: \n(A) Antarctica \n(B) Arctic \n(C) Sahara \n(D) Atacama";
		
		ques[2]=" The largest waterfalls system in the world is \n(A) Iguazu Falls \n(B) Niagara Falls \n(C) Victoria Falls \n(D) Angel Falls";
		
		ques[3]="The Great Wall of China is about __________ KM long. \n(A) 20,196 \n(B)19,196 \n(C) 21,196 \n(D) 18,196";
		
		ques[4]="The currency of Indonesia is: \n(A) Rupiah \n(B) Rangit \n(C) Riyal \n(D) Dinar ";
		
		ques[5]="The world’s highest mountain is in \n(A) China \n(B) Pakistan \n(C) Nepal \n(D) India";
		
		ques[6]="Which country, on the map of world, appears as “Long Shoe”? \n(A) Hungary \n(B) Greece \n(C) Italy \n(D)Portugal";
		
		ques[7]=" The largest ocean of the world is \n(A) Atlantic \n(B) Pacific \n(C) Indiann \n(D) None of these";
		
		ques[8]="The Capital of Canada is: \n(A) Tirane \n(B) Ottawa \n(C) Luxembourg \n(D) Athens";
		
		ques[9]="Where is the Statue of liberty situated? \n(A) New York, USA \n(B) California, USA \n(C) Washington D.C, USA \n(D) None of these";
		
		ques[10]="Which is the smallest bird in the bird? \n(A) Sparrow \n(B) Hemming Bird \n(C) Ostrich \n(D) None of these";
		
		ques[11]="The largest populous Islamic country of the world is: \n(A) Pakistan \n(B) Iran \n(C) Indonesia \n(D) Saudi Arabia";
		
		ques[12]="Suez Canal is between: \n(A) Arabian Sea and Red Sea \n(B) Red Sea and North Sea \n(C) Mediterranean Sea and North Sea \n(D) Mediterranean Sea and Red Sea";
		
		ques[13]="The highest part of the Earth is: \n(A)Mount Everest \n(B) K2 \n(C) Norway \n(D) North Pole";
		
		ques[14]="The lowest part of the Earth is \n(A) Dead Sea \n(B) Mariana Trench \n(C) South Africa \n(D) South Pole ";
		
		ques[15]="The smallest Sea of the World is \n(A) Dead Sea \n(B) Red Sea \n(C) Baltic Sea \n(D)  Arabian Sea";
		
		ques[16]="World’s famous bridge “Golden Gate Bridge” is in: \n(A) San Francisco \n(B) New Delhi \n(C) France \n(D) Sydney";
		
		ques[17]=" Which country is called “Land of thousand islands“? \n(A) Malaysia \n(B) indonesia \n(C) Ireland \n(D) Finland";
		
		ques[18]="What was the name of Atomic Bomb that dropped on the city of Nagasaki? \n(A) Little Boy \n(B) Fat Boy \n(C) Little Man \n(D) Fat Man";
		
		ques[19]=" The Temple of Heaven, a religious building, is located in: \n(A) Edinburgh \n(D) Rome \n(C) Beijing \n(D)Shanghai";
		
		ques[20]="The Earth surface is divided in __________ Continents.:  \n(A)5 \n(B)6 \n(C)7 \n(D)8";
		
		ques[21]="The Largest Continent (by Area) of the World is :  \n(A)Asia \n(B)Europe \n(C)Aferica \n(D)North America";
		
		ques[22]="The percentage of the salt water on earth surface is: \n(A) 93% \n(B) 95% \n(C) 97% \n(D) None of These";
	
		ques[23]="Which country has the oldest flag of the world? \n(A) America \n(B) Denmark \n(C) Japan \n(D) None of these";
		
		ques[24]="Who united all the Sikhs and founded kingdom in the Punjab: \n(A) Ranjit Singh \n(B) Guru Nanak \n(C) Gobind Singh \n(D) None of these";
		
		ques[25]="“When Pakistan became Islamic Republic in: \n(A) 1947 \n(B) 1956 \n(C) 1973 \n(D) None of These";
		
		ques[26]="The first foreign Minister of Pakistan was: \n(A) Sikandar Mirza \n(B) Sir Muhammad Zafrullah \n(C) Ghulam Muhammad \n(D) None of These";
		
		ques[27]="The largest university of Pakistan is: \n(A) COMSATS University \n(B) Punjab University \n(C) Quaid e Azam University \n(D) Karachi University";
		
		ques[28]="Which is the most thinly populated province of Pakistan? \n(A) KP \n(B) Sindh \n(C) Punjab \n(D) Balochistan";
		
		ques[29]="The second atom bomb was dropped on Nagasaki on: \n(A) Aug 9, 1945 \n(B) Aug 13,1914 \n(C) Aug 16, 1945 \n(d) none of these";
		
		ques[30]="Mulana Muhammad Ali Johar issued ” Hamdard ” urdu newspaper in: \n(A) 1909 \n(B) 1913 \n(C) 1916 \n(D) None of these";
		
		ques[31]="When was the Constitution of 1973 enforce? \n(A) 10th Aug, 1973 \n(B) 12th Aug, 1973 \n(C) 14th Aug, 1973 \n(D) None of these";
		
		ques[32]=" Largest Radio Station of Pakistan found in: \n(A) Karachi \n(B) Lahore \n(C)Islamabad \n(D) None of these";
		
		ques[33]="Himalaya Range is based in \n(A) Europe \n(B) Asia \n(C) Africa \n(D) None of These";
		
		ques[34]="Which is the deepest Ocean in the world? \n(A) Artic \(B) Asian \n(C) Pacific \n(D) None of these";
		
		ques[35]="Which is the hottest place in Pakistan? \n(A) Sibbi \n(B) Jacobabad \n(C) Kashmor \n(D) None of these";
			
		ques[36]="How many crops seasons are in Pakistan? \nA. 2 \nB. 3 \nC. 4 \nD. None of the above.";	
	
		ques[37]="how many stanzas are there in pakistan national anthem ? \n(A) Three \n(B) Five \n(C) Six \n(D) Seven";
	
		ques[38]="What official name was given to Pakistan in 1956 constitution? \n(A) Islamic Pakistan \n(B) Islamic Republic of Pakistan \n(C) Republic of Pakistan \n(D) United States of Pakistan";
	
		ques[39]="Who was the Prime Minister of Pakistan during enforcement of first constitution? \n(A) Khwaja Nazim Uddin \n(B) Mohammad Ali Bogra \n(C) Ibrahim Ismail Chundrigar \n(D) Choudhry Mohammad Ali";
	
		ques[40]="Muslim league's headquarter was in \n(A) Delhi \n(B) Lucknow \n(C) Bombay \n(D) Karachi";
		
		ques[41]="Mohenjo-daro sites were discovered in \n(A) 1922 \n(B) 1923 \n(C) 1823 \n(D) 1822";
		
		ques[42]="Who prepared Pakistan's national flag ? \n(A) Syed Amir-uddin Kedwaii \n(B) Hafeez Jalundhri \n(C) Chaudhri Rahmat Ali \n(D) Allama Iqbal";
		
		
		
		char cAns[]={'C','A','D','C','A','C','C','B','B','A','B','C','D','A','A','C','A','B','D','C','C','A','C',
		'B','A','B','B','B','D','A','B','C','C','B','C','B','A','A','B','D','B','A','A', };
	
	
		// calling function to select random questions
		quesRandomSelector(ques,qSize,selectedQuestions,rSize);
	
		// calling function to ask selected questions 
		askQuestions(ques,selectedQuestions,rSize);
		
	}
	
	
	
	void eng()
	{
		
		/*
		This function is called by quesRandomSelector which checks
		if the question which is going to be selected is already 
		selected or not. In case it is already selected it return true 
		else false.
	    */
		bool alreadySelected (int selectedQuestions[],int rSize, int questionIndex){
		bool Flag;
		
		int i;
		
		for (i=0;i<rSize;i++)
		{
			if (selectedQuestions[i]==questionIndex){
				Flag=true;
				break;
			}
		}
		return Flag;
	}
	
	/*
		This function is for selecting random questions from ques Array.
	*/
	void quesRandomSelector(char * questions[], int qSize, int selectedQuestions[],int rSize){
		int randomIndex=0;
		
		int i;
		for (i=0;i<rSize;){
			randomIndex=rand()%qSize;
			// condition to check whether the question has already been selected or not.
			if (!alreadySelected(selectedQuestions,rSize,randomIndex)){
				selectedQuestions[i]=randomIndex;
				i++;
			}
		}
	}
	/*
		function responsible for showing/asking randomly selected questions.
	*/
	void askQuestions(char * questions[], int selectedQuestions[], int rSize){
		
		int i;
		char ans;
		
		for (i=0;i<rSize;i++)
		{
			system("cls");
			printf("\n                 English MCQs\n\n");
			printf("Question %d : %s\n\nAns : ", i+1,questions[selectedQuestions[i]]);
			scanf("%c", &ans);
			fflush(stdin);  
		}
	}
		
			
		
			//random seed
		srand (time(NULL));
	
		const int qSize=15;	//inializing size of questions array
		const int rSize=5;	//size of randomly selected question array
	
	
		int selectedQuestions[rSize]; //randomly selected questions array of size rSize
		char * ques[qSize];	//questions array of size qSize
	
	
	
		ques[0]="Fostering is a synonym of:\nA) Safeguarding   B) Neglecting   C) Ignoring   D) Nurturing";
			
		ques[1]="Propel is a synonym of:\nA) Drive   B) Jettison   C) Burst   D) Acclimatize";
	
		ques[2]="The book is______the mug and pen.\nA) In   B) Among   C) Between   D) Of";
		
		ques[3]="A good judge never jumps _________the conclusion.\nA) In   B) To   C) On   D) At";
		
		ques[4]="The Students protested _____ the ill-treatment of their leader.\nA) over   B) to   C) against   D) for";
		
		ques[5]="Synonym of Exemplify is:\nA) Reprehensible   B) Illustrate   C) Empty   D) Finish";
		
		ques[6]="The_________ of war is expected very soon.\nA) Cessation   B) Cession   C) Session   D) Cestion";
		
		ques[7]="Antonym of BRUSQUE is _____________\nA) Corrupt   B) Brash   C) Energetic   D) Courteous";
		
		ques[8]="Caravan : desert ::\nA) Boat:Cruise   B) Book:Library   C) Midnight:Noon   D) NONE";
		
		ques[9]="Salutation : Farewell ::\nA) Birth:Death   B) Army:Navy   C) Noon:Midnight   D) Lunch:Dinner";
		
		ques[10]="He did not give up the fight even though he was badly bruised.\nA) The fight did not give up by him even though he was badly bruised\nB) The fight had not given up by him even though he was badly bruised\nC) The fight was not given up by him even though he was badly bruised\nD) The fight was not being given up by him even though he was badly bruised.";
		
		ques[11]="We should avoid tranquilizer in order to have a good health\nA) Tranquilizer should avoided by us in order to have good health.\nB) Tranquilizer should been avoided by us in order to have a good health.\nC) Tranquilizer should be avoid by us in order to have a good health.\nD) Tranquilizer should be avoided by us in order to have a good health.";
		
		ques[12]="Look, It _______.\nA) Rains   B) is raining   C) has been raining   D) had been raining";
		
		ques[13]="Which parts of speech shows the relationship of noun or pronoun with the rest of the sentence?\nA) Preposition   B) Conjuction   C) Adverb   D) Interjection";
		
		ques[14]="His office is always in apple-pie order. What does the idiom/phrase \"apple-pie order\" means?\nA Neat and tidy   B) Disordered   C) Mismanaged   D) Ornamental";
		
		char eans[]={'D','A','C','D','D','B','A','D','A','A','C','D','B','A','A'};
		
			// calling function to select random questions
		quesRandomSelector(ques,qSize,selectedQuestions,rSize);
	
		// calling function to ask selected questions 
		askQuestions(ques,selectedQuestions,rSize);
	}
	
	void iq()
	{
		/*
		This function is called by quesRandomSelector which checks
		if the question which is going to be selected is already 
		selected or not. In case it is already selected it return true 
		else false.
	    */
		bool alreadySelected (int selectedQuestions[],int rSize, int questionIndex){
		bool Flag;
		
		int i;
		
		for (i=0;i<rSize;i++)
		{
			if (selectedQuestions[i]==questionIndex){
				Flag=true;
				break;
			}
		}
		return Flag;
	}
	
	/*
		This function is for selecting random questions from ques Array.
	*/
	void quesRandomSelector(char * questions[], int qSize, int selectedQuestions[],int rSize){
		int randomIndex=0;
		
		int i;
		for (i=0;i<rSize;){
			randomIndex=rand()%qSize;
			// condition to check whether the question has already been selected or not.
			if (!alreadySelected(selectedQuestions,rSize,randomIndex)){
				selectedQuestions[i]=randomIndex;
				i++;
			}
		}
	}
	/*
		function responsible for showing/asking randomly selected questions.
	*/
	void askQuestions(char * questions[], int selectedQuestions[], int rSize){
		
		int i;
		char ans;
		
		for (i=0;i<rSize;i++)
		{
			system("cls");
			printf("\n                 IQ MCQs\n\n");
			printf("Question %d : %s\n\nAns : ", i+1,questions[selectedQuestions[i]]);
			scanf("%c", &ans);
			fflush(stdin);  
		}
	}
		
			
		
			//random seed
		srand (time(NULL));
	
		const int qSize=15;	//inializing size of questions array
		const int rSize=5;	//size of randomly selected question array
	
	
		int selectedQuestions[rSize]; //randomly selected questions array of size rSize
		char * ques[qSize];	//questions array of size qSize
	
	
		
		ques[0]="Which number should come next in this series? 25,24,22,19,15\nA) 14   B) 5   C) 30   D) 10";
	
		ques[1]="Which one of the four is least like the other three?\nA) Apple    B) Potato   C) Carrot   D) Bean";
	
		ques[2]="Nia, twelve years old, is three times as old as her sister. How old will Nia be when sheis twice as old as her sister?\nA) 15   B) 18   C) 16   D) 20";
	
		ques[3]="Which one of the four letters is least like the other three?\nA) N   B) F   C) A   D) E";
	
		ques[4]="Two people can make 2 bicycles in 2 hours. How many people are needed to make 12 bicycles in 6 hours?\nA) 6   B) 4   C) 2   D) 1";
	
		ques[5]="A store reduced the price of one of its products by 25 percent. What percentage of the reduced price must it be increased by to put the product back to its original price?\nA) 33 percent   B) 20 percent   C) 23 percent   D) 35 percent";
	
		ques[6]="Book is to Reading as Fork is to:\nA) Drawing   B) Writing   C) Stirring   D)Eating";
		
		ques[7]="Which of the following can be arranged into a 5-letter English word?\nA) H R G S T   B) R I L S A   C) T O O M T   D) W Q R G S";
		
		ques[8]="What number best completes the analogy: 8:4 as 10:\nA) 3   B) 7   C) 24   D) 5";
		
		ques[9]="At a conference, 12 members shook hands with each other before & after the meeting. How many total number of hand shakes occurred?\nA) 100   B) 132   C) 145   D) 144";
		
		ques[10]="The day after the day after tomorrow is four days before Monday. What day is it today?\nA) Monday   B)Tuesday   C) Wednesday   D) Thursday";
		
		ques[11]="6121135 is to flame as 21215120 is to ?\nA) Voice   B) Bald   C) Bloat   D) Castle";
		
		ques[12]="Forest is to tree as tree is to ?\nA) Plant   B) Leaf   C)Branch   D) Mangrove";
		
		ques[13]="Some months have 31 days; how many have 28?\nA) 1   B) 2   C) 9   D) 12";
		
		ques[14]="A doctor gives you 3 pills telling you to take one every half hour. How many minutes will the pills last?\nA) 20   B) 40   C) 60   D) 80";
		
		char ians[]={'D','A','C','D','B','A','D','B','D','B','A','C','B','D','C'};
		
			// calling function to select random questions
		quesRandomSelector(ques,qSize,selectedQuestions,rSize);
	
		// calling function to ask selected questions 
		askQuestions(ques,selectedQuestions,rSize);
	}
	
	
	void computer()
	{
		/*
		This function is called by quesRandomSelector which checks
		if the question which is going to be selected is already 
		selected or not. In case it is already selected it return true 
		else false.
	    */
		bool alreadySelected (int selectedQuestions[],int rSize, int questionIndex){
		bool Flag;
		
		int i;
		
		for (i=0;i<rSize;i++)
		{
			if (selectedQuestions[i]==questionIndex){
				Flag=true;
				break;
			}
		}
		return Flag;
	}
	
	/*
		This function is for selecting random questions from ques Array.
	*/
	void quesRandomSelector(char * questions[], int qSize, int selectedQuestions[],int rSize){
		int randomIndex=0;
		
		int i;
		for (i=0;i<rSize;){
			randomIndex=rand()%qSize;
			// condition to check whether the question has already been selected or not.
			if (!alreadySelected(selectedQuestions,rSize,randomIndex)){
				selectedQuestions[i]=randomIndex;
				i++;
			}
		}
	}
	
	/*
		function responsible for showing/asking randomly selected questions.
	*/
	void askQuestions(char * questions[], int selectedQuestions[], int rSize){
		
		int i;
		char ans;
		
		for (i=0;i<rSize;i++)
		{
			system("cls");
			printf("\n                Computer MCQs\n\n");
			printf("Question %d : %s\n\nAns : ", i+1,questions[selectedQuestions[i]]);
			scanf("%c", &ans);
			fflush(stdin);  
		}
	}
		
			
		
			//random seed
		srand (time(NULL));
	
		const int qSize=15;	//inializing size of questions array
		const int rSize=5;	//size of randomly selected question array
	
	
		int selectedQuestions[rSize]; //randomly selected questions array of size rSize
		char * ques[qSize];	//questions array of size qSize
	
	
		
		ques[0]="The basic operations performed by a computer are__________?\nA) Arithmetic operation   B) Logical operation   C) Storage and relative   D) All of the mentioned";
		
		ques[1]="If a computer has more than one processor then it is known as__________?\nA) Uni-process   B) Multiprocessor   C) Multi-threaded   D) Multi-programming";
		
		ques[2]="Which technology is used in compact disks?\nA) Mechanical   B) Electrical   C) Electro magnetic   D) Laser";
		
		ques[3]="1 Gigabyte is equal to ____________?\nA) 1024 bits   B) 1000 megabytes   C) 1024 kilobytes   D) 1024 megabytes";
		
		ques[4]="The brain of any computer system is___________?\nA) ALU   B) Memory   C) CPU   D) Control unit";
		
		ques[5]="Logical extension of multiprogramming operating system is\nA) time sharing   B) multi-tasking   C) single programming   D) both a and b";
		
		ques[6]="Multiprocessor system have advantage of\nA) Increased Throughput   B) Expensive hardware   C) Operating system   D) both a and b";
		
		ques[7]="Another type of multiple-CPU system is the\nA) mini Computer   B) Super computer   C) Clustered computer   D) both a and b";
		
		ques[8]="The initial program that is run when the computer is powered up is called :\nA) boot program   B) bootloader   C) initializer   D) bootstrap program";
		
		ques[9]="How does the software trigger an interrupt ?\nA) Sending signals to the CPU through bus\nB) Executing a special operation called system call\nC) Executing a special program called system program\nD) Executing a special program calle interrupt trigger program";
		
		ques[10]="What is an ISR ?\nA) Information Service Request   B) Interrupt Service Request   C) Interrupt Service Routine   D) Information Service Routine";
		
		ques[11]="The main reason to encrypt a file is to ______________.\nA) Reduce its size   B) Secure it for transmission   C) Prepare it for backup   D) Include it in the start-up sequence";
		
		ques[12]="Which of the following are forms of malicious attack ?\nA) Theft of information   B) Modification of data   C) Wiping of information   D) All of the mentioned";
		
		ques[13]="What is Trojan horse ?\nA) It is a useful way to encrypt password\nB) It is a user which steals valuable information\nC) It is a rogue program which tricks users\nD) It is a brute force attack algorithm";
		
		ques[14]="CPU can access which type of memory directly?\nA) random-access memory   B) magnetic disk   C) magnetic tape   D) None of the mentioned";
		
		char cans[]={'D','B','D','D','C','D','A','C','D','B','C','B','D','C','A'};
		
		// calling function to select random questions
		quesRandomSelector(ques,qSize,selectedQuestions,rSize);
	
		// calling function to ask selected questions 
		askQuestions(ques,selectedQuestions,rSize);
	}
	
	
	
	
	void play()
	{
		
		system ("cls");
	
	
	int a,c=1;
			system("cls");
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tRegister Your Name : ");
		    scanf("\n");
			gets(c1);
			system("cls");
			
			printf("\n\n\t\t\t\t\t\t Welcome %s",c1);
			printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t Loading....");
			
		while (c==1)      // loop for loading 
		{
			c++;
			printf("\n\n\t\t\t\t\t\t");
			for(a=1;a<5;a++)
			{
				printf("%c",177);
				sleep(1); // function to delay program excution for 1 second
			}
		}
					
		system("cls");
			
		puts("\n\n\n\n");	
		puts("\n\n\t\t\t\t\t\t   1. Random categories ");
		puts("\n\t\t\t\t\t\t   2. Gernal Knowledge");
		puts("\n\t\t\t\t\t\t   3. English ");
		puts("\n\t\t\t\t\t\t   4. IQ");
		puts("\n\t\t\t\t\t\t   5. Computer ");
		puts("\n\t\t\t\t\t\t   6. Exit");
		
		 
		int opt=0;
		while(opt<1 || opt>6 )
		{
			printf("    \n        ENTER A CHOICE (1...6) : ");
	//		fflush(stdin);
		    scanf("%d", &opt);
		    if(opt<1 || opt>6)
		    {
		    	printf("Invalid input. Try again.\n");
		    }
	//		fflush(stdin); 
	    }
	    
	    switch(opt)
		{
			case 1:
			random();
			break;	
			case 2:
			gk();
			break;
			case 3:
			eng();
			break;
			case 4:
			iq();
			break;
			case 5:
			computer();
			break;	
			case 6:
			exit(1);
			
	    }
		
		
	}
	
	
	void resetHighScore() {
	
	FILE *ptr;
	ptr  = fopen ("E://game.txt", "w");
	
	char * name1[] = {"Player1","Player2","Player3","Player4","Player5" };
	int z;

	for (z=0; z<5;  z++) {
	fprintf(ptr, "%d", 0);
	fputs(name1[z], ptr);
	fputs("\n", ptr);
	}
	
	
	 fclose(ptr);
	 
	 printf("\n\t\tScore reser successfully\n\n");
	
	}
	
			
	int  main ()
	{
	
	    
		int opt=0;
		Welcome();
		//mainscreen();
		printf("    \n        ENTER A CHOICE (1...6) : ");
	    scanf("%d", &opt);
		
		while(opt<1 || opt>6 )
		{
			printf("    \n        ENTER A CHOICE (1...6) : ");
		    scanf("%d", &opt);
			if(opt<1 || opt>6)
		    {
		    	printf("Invalid input. Try again.\n");
		    } 
	    }
	    
	    switch(opt)
		{
			case 1:
			play();
			break;
			case 2:
			displayHighScore();	
			break;
			case 3:
			resetHighScore();
			break;
		
		}

	}
