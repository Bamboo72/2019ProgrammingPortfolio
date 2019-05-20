//============================================================================
// Name        : Calc.cpp
// Author      : Nicholai Gontcharov
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<cmath>

using namespace std;

class adventure {
private:
	int j; // job
			int t; // total money
			int yn; // yes or no
			int s; // salary
			int sp; // money spent every month
			bool run;
			int choice;

public:
	void start() {

		cout << "Welcome to Automated teller!!" << endl;
		cout << "You are going to start with a grand total of $1,000!" << endl;
		cout << "it will be up to you to decide what to do with this money, and try "
				"to end the game with as much as you can get." << endl;
		cout << "You can get stocks, to put your money in the bank for savings, or take "
				"money out to pay for something, and even enter in the lottery" << endl;
		cout << "But be careful because bad things can happen to you like you can break your "
				"leg or even have your house wiped out by a natural disaster, so be prepared "
				"to have extra money to pay for these things." << endl;
		cout << "Now your going to pick a number 1 or 2 that will decide what job you have "
				"and how much money you make/spend a year" << endl;

		cin >> j;

		if (j == 1) {

			cout << "Congratulations!! you work at a gas station and live in your parents "
					"basement!" << endl;
			cout << "You make $2475 a month but because you live with your mom you don't have "
					"to pay for rent your bills or for food so you spend about $350 a month "
					"on things like gas and video games" << endl;

			cout << "Are you ready to begin? (1 = yes; 2 = no)";
			cin >> yn;

			if(yn == 1 || 2) {
				t = 1000;
				s = 2475;
				sp = 350;

				int v;
				int n;
				int e;
				int m;

				cout << "if you said yes welcome, if you said no... thats too bad your starting anyways." << endl;

				cout << "you have " << t << " dollars currently would you like to do anything with it?" << endl;
				cout << "You could..." << endl;
				cout << "buy a new mic ( click v) cost $120" << endl;
				cout << "take your parents out to do something to thank them for letting you stay in the basement (click n) "
						"cost from 100 to 1,000 dollars" << endl;
				cout << "take some extra shifts at the gas station and make an extra $635 (click e) cost $0" << endl;
				cout << "continue to the next month (click m)" << endl;

				cin >> choice;

				if (choice == v) {
					cout << "you walked to the store to buy a mic and then went home to your basement and started playing"
							"with it" << endl;
					t = t - 120 + s - sp;

					cout << "You now have " << t << " dollars, you make " << s << " dollars, and you spend " << sp << " dollars "
							"every month" << endl;


								cout << "you have " << t << " dollars currently would you like to do anything with it?" << endl;
								cout << "You could..." << endl;
								cout << "buy a new controller ( click v) cost $80" << endl;
								cout << "take your parents out to do something to thank them for letting you stay in the basement (click n) "
										"cost from 100 to 1,000 dollars" << endl;
								cout << "take some extra shifts at the gas station and make an extra $635 (click e) cost $0" << endl;
								cout << "continue to the next month (click m)" << endl;

								cin >> choice;

								if (choice == v) {
									cout << "you walked to the store to buy a controller and then went home to your basement and started playing"
											"video games with it" << endl;
									t = t - 80 + s - sp;

									cout << "You now have " << t << " dollars, you make " << s << " dollars, and you spend " << sp << " dollars "
											"every month" << endl;


																cout << "you have " << t << " dollars currently would you like to do anything with it?" << endl;
																cout << "You could..." << endl;
																cout << "buy a new Console ( click v) cost $400" << endl;
																cout << "take your parents out to do something or get them something to thank them for letting you stay in the basement (click n) "
																		"cost from 100 to 1,000 dollars" << endl;
																cout << "take some extra shifts at the gas station and make an extra $635 (click e) cost $0" << endl;
																cout << "continue to the next month (click m)" << endl;

																cin >> choice;

																if (choice == v) {
																	cout << "you walked to the store to buy a console and then went home to your basement and started playing"
																			"video games with it" << endl;
																	t = t - 400 + s - sp;

																	cout << "You now have " << t << " dollars, you make " << s << " dollars, and you spend " << sp << " dollars "
																			"every month. And you've been kicked out of the basement cause all you do is play video games all day "
																			"and spend all your money on them too, and your parents hate you" << endl;
																} else if (choice == n) {
																	cout << "You go to the store and bought your mom some chocolates and your dad some ice-cream and both a movie "
																			"so that they could have a movie night. " << endl;
																	t = t - 35 + s - sp;

																	cout << "You now have " << t << " dollars, you make " << s << " dollars, and you spend " << sp << " dollars "
																			"every month" << endl;
																} else if (choice == e) {
																	cout << "You decided to get up off your but this month and took some extra shifts at the gas station and "
																			"made an extra $635" << endl;
																	t = t + 635 + s - sp;

																	cout << "You now have " << t << " dollars, you make " << s << " dollars, and you spend " << sp << " dollars "
																			"every month, and you made your first real life friend during your extra shifts" << endl;
																} else if (choice == m) {
																	cout << "You didn't do much this month and just stuck to the usual which is playing video games until you have "
																			"to go to work and spending zero time with your parents" << endl;
																	t = t + s - sp;

																	cout << "You now have " << t << " dollars, you make " << s << " dollars, and you spend " << sp << " dollars "
																			"every month and your parents are slowly growing apart from you and are getting mad more often" << endl;
																}



								} else if (choice == n) {
									cout << "You took your parents to a really nice resturant where you spent $250 and then gave your "
											"mom a $300 necklace and your dad a really nice $200 watch." << endl;
									t = t - 750 + s - sp;

									cout << "You now have " << t << " dollars, you make " << s << " dollars, and you spend " << sp << " dollars "
											"every month" << endl;


																cout << "you have " << t << " dollars currently would you like to do anything with it?" << endl;
																cout << "You could..." << endl;
																cout << "buy a new controller ( click v) cost $80" << endl;
																cout << "take your parents out to do something to thank them for letting you stay in the basement (click n) "
																		"cost from 100 to 1,000 dollars" << endl;
																cout << "take some extra shifts at the gas station and make an extra $635 (click e) cost $0" << endl;
																cout << "continue to the next month (click m)" << endl;

																cin >> choice;

																if (choice == v) {
																	cout << "you walked to the store to buy a controller and then went home to your basement and started playing"
																			"video games with it" << endl;
																	t = t - 80 + s - sp;

																	cout << "You now have " << t << " dollars, you make " << s << " dollars, and you spend " << sp << " dollars "
																			"every month" << endl;
																} else if (choice == n) {
																	cout << "You took your parents out again cause you had so much fun last time and they really appreciated"
																			"it so you all went bowling and you paid for it all" << endl;
																	t = t - 50 + s - sp;

																	cout << "You now have " << t << " dollars, you make " << s << " dollars, and you spend " << sp << " dollars "
																			"every month" << endl;
																} else if (choice == e) {
																	cout << "You decided to get up off your but this month and took some extra shifts at the gas station and "
																			"made an extra $635" << endl;
																	t = t + 635 + s - sp;

																	cout << "You now have " << t << " dollars, you make " << s << " dollars, and you spend " << sp << " dollars "
																			"every month" << endl;
																} else if (choice == m) {
																	cout << "You didn't do much this month and just stuck to the usual which is playing video games until you have "
																			"to go to work and spending zero time with your parents" << endl;
																	t = t + s - sp;

																	cout << "You now have " << t << " dollars, you make " << s << " dollars, and you spend " << sp << " dollars "
																			"every month" << endl;
																}



								} else if (choice == e) {
									cout << "You decided to get up off your but this month and took some extra shifts at the gas station and "
											"made an extra $635" << endl;
									t = t + 635 + s - sp;

									cout << "You now have " << t << " dollars, you make " << s << " dollars, and you spend " << sp << " dollars "
											"every month" << endl;


																cout << "you have " << t << " dollars currently would you like to do anything with it?" << endl;
																cout << "You could..." << endl;
																cout << "buy a new controller ( click v) cost $80" << endl;
																cout << "take your parents out to do something to thank them for letting you stay in the basement (click n) "
																		"cost from 100 to 1,000 dollars" << endl;
																cout << "take some extra shifts at the gas station and make an extra $635 (click e) cost $0" << endl;
																cout << "continue to the next month (click m)" << endl;

																cin >> choice;

																if (choice == v) {
																	cout << "you walked to the store to buy a controller and then went home to your basement and started playing"
																			"video games with it" << endl;
																	t = t - 80 + s - sp;

																	cout << "You now have " << t << " dollars, you make " << s << " dollars, and you spend " << sp << " dollars "
																			"every month" << endl;
																} else if (choice == n) {
																	cout << "You took your parents to the best sushi place in town" << endl;
																	t = t - 233 + s - sp;

																	cout << "You now have " << t << " dollars, you make " << s << " dollars, and you spend " << sp << " dollars "
																			"every month" << endl;
																} else if (choice == e) {
																	cout << "You decided to take extra shifts again this month at the gas station and "
																			"made an extra $635" << endl;
																	t = t + 635 + s - sp;

																	cout << "You now have " << t << " dollars, you make " << s << " dollars, and you spend " << sp << " dollars "
																			"every month" << endl;
																} else if (choice == m) {
																	cout << "You didn't do much this month and just stuck to the usual which is playing video games until you have "
																			"to go to work and spending zero time with your parents" << endl;
																	t = t + s - sp;

																	cout << "You now have " << t << " dollars, you make " << s << " dollars, and you spend " << sp << " dollars "
																			"every month" << endl;
																}
								} else if (choice == m) {
									cout << "You didn't do much this month and just stuck to the usual which is playing video games until you have "
											"to go to work and spending zero time with your parents" << endl;
									t = t + s - sp;

									cout << "You now have " << t << " dollars, you make " << s << " dollars, and you spend " << sp << " dollars "
											"every month" << endl;


																cout << "you have " << t << " dollars currently would you like to do anything with it?" << endl;
																cout << "You could..." << endl;
																cout << "buy a new controller ( click v) cost $80" << endl;
																cout << "take your parents out to do something to thank them for letting you stay in the basement (click n) "
																		"cost from 100 to 1,000 dollars" << endl;
																cout << "take some extra shifts at the gas station and make an extra $635 (click e) cost $0" << endl;
																cout << "continue to the next month (click m)" << endl;

																cin >> choice;

																if (choice == v) {
																	cout << "you walked to the store to buy a controller and then went home to your basement and started playing"
																			"video games with it" << endl;
																	t = t - 80 + s - sp;

																	cout << "You now have " << t << " dollars, you make " << s << " dollars, and you spend " << sp << " dollars "
																			"every month" << endl;
																} else if (choice == n) {
																	cout << "You took your parents to a really nice resturant where you spent $250 and then gave your "
																			"mom a $300 necklace and your dad a really nice $200 watch to make up for not hanging out"
																			"with them lately" << endl;
																	t = t - 750 + s - sp;

																	cout << "You now have " << t << " dollars, you make " << s << " dollars, and you spend " << sp << " dollars "
																			"every month. And your parents were really appreciative that you decided to do something with "
																			"them." << endl;
																} else if (choice == e) {
																	cout << "You decided to get up off your but this month and took some extra shifts at the gas station and "
																			"made an extra $635" << endl;
																	t = t + 635 + s - sp;

																	cout << "You now have " << t << " dollars, you make " << s << " dollars, and you spend " << sp << " dollars "
																			"every month" << endl;
																} else if (choice == m) {
																	cout << "You didn't do much this month and just stuck to the usual which is playing video games until you have "
																			"to go to work and spending zero time with your parents" << endl;
																	t = t + s - sp;

																	cout << "You now have " << t << " dollars, you make " << s << " dollars, and you spend " << sp << " dollars "
																			"every month. Your parents are starting to grow away from you and might kick you "
																			"out soon." << endl;
																}
								}



				} else if (choice == n) {
					cout << "You drove you parents to a fast food resturant called McWendys and spent $114 dollars cause you also"
							"got them both gift cards for Amazin" << endl;
					t = t - 114 + s - sp;

					cout << "You now have " << t << " dollars, you make " << s << " dollars, and you spend " << sp << " dollars "
							"every month" << endl;



								cout << "you have " << t << " dollars currently would you like to do anything with it?" << endl;
								cout << "You could..." << endl;
								cout << "buy a new mic ( click v) cost $120" << endl;
								cout << "take your parents out to do something to thank them for letting you stay in the basement (click n) "
										"cost from 100 to 1,000 dollars" << endl;
								cout << "take some extra shifts at the gas station and make an extra $635 (click e) cost $0" << endl;
								cout << "continue to the next month (click m)" << endl;

								cin >> choice;

								if (choice == v) {
									cout << "you walked to the store to buy a mic and then went home to your basement and started playing"
											"with it" << endl;
									t = t - 120 + s - sp;

									cout << "You now have " << t << " dollars, you make " << s << " dollars, and you spend " << sp << " dollars "
											"every month" << endl;
								} else if (choice == n) {
									cout << "You offer to pay for tickets to Hawaii for your parents where they can go over the "
											"break and the tickets costed you $998" << endl;
									t = t - 998 + s - sp;

									cout << "You now have " << t << " dollars, you make " << s << " dollars, and you spend " << sp << " dollars "
											"every month" << endl;
								} else if (choice == e) {
									cout << "You decided to get up off your but this month and took some extra shifts at the gas station and"
											"made an extra $635" << endl;
									t = t + 635 + s - sp;

									cout << "You now have " << t << " dollars, you make " << s << " dollars, and you spend " << sp << " dollars "
											"every month" << endl;
								} else if (choice == m) {
									cout << "You didn't do much this month and just stuck to the usual which is playing video games until you have"
											"to go to work and spending zero time with your family" << endl;
									t = t + s - sp;

									cout << "You now have " << t << " dollars, you make " << s << " dollars, and you spend " << sp << " dollars "
											"every month" << endl;
								}



				} else if (choice == e) {
					cout << "You decided to get up off your but this month and took some extra shifts at the gas station and"
							"made an extra $635" << endl;
					t = t + 635 + s - sp;

					cout << "You now have " << t << " dollars, you make " << s << " dollars, and you spend " << sp << " dollars "
							"every month" << endl;


												cout << "you have " << t << " dollars currently would you like to do anything with it?" << endl;
												cout << "You could..." << endl;
												cout << "buy a new mic ( click v) cost $120" << endl;
												cout << "take your parents out to do something to thank them for letting you stay in the basement (click n) "
														"cost from 100 to 1,000 dollars" << endl;
												cout << "take some extra shifts at the gas station and make an extra $635 (click e) cost $0" << endl;
												cout << "continue to the next month (click m)" << endl;

												cin >> choice;

												if (choice == v) {
													cout << "you walked to the store to buy a mic and then went home to your basement and started playing"
															"with it" << endl;
													t = t - 120 + s - sp;

													cout << "You now have " << t << " dollars, you make " << s << " dollars, and you spend " << sp << " dollars "
															"every month" << endl;
												} else if (choice == n) {
													cout << "You offer to pay for tickets to Hawaii with some of the extra money you made for your parents where"
															" they can go over the break and the tickets costed you $998" << endl;
													t = t - 998 + s - sp;

													cout << "You now have " << t << " dollars, you make " << s << " dollars, and you spend " << sp << " dollars "
															"every month" << endl;
												} else if (choice == e) {
													cout << "You decided to take some extra shifts again this month at the gas station and"
															"made an extra $635, it was also hinted you could get a raise if you keep coming in like this" << endl;
													t = t + 635 + s - sp;

													cout << "You now have " << t << " dollars, you make " << s << " dollars, and you spend " << sp << " dollars "
															"every month" << endl;
												} else if (choice == m) {
													cout << "You didn't do much this month and just stuck to the usual which is playing video games until you have"
															"to go to work and spending zero time with your family" << endl;
													t = t + s - sp;

													cout << "You now have " << t << " dollars, you make " << s << " dollars, and you spend " << sp << " dollars "
															"every month" << endl;
												}



				} else if (choice == m) {
					cout << "You didn't do much this month and just stuck to the usual which is playing video games until you have"
							"to go to work and spending zero time with your family" << endl;
					t = t + s - sp;

					cout << "You now have " << t << " dollars, you make " << s << " dollars, and you spend " << sp << " dollars "
							"every month" << endl;


									cout << "you have " << t << " dollars currently would you like to do anything with it?" << endl;
									cout << "You could..." << endl;
									cout << "buy a new mic ( click v) cost $120" << endl;
									cout << "take your parents out to do something to thank them for letting you stay in the basement (click n) "
											"cost from 100 to 1,000 dollars" << endl;
									cout << "take some extra shifts at the gas station and make an extra $635 (click e) cost $0" << endl;
									cout << "continue to the next month (click m)" << endl;

									cin >> choice;

									if (choice == v) {
										cout << "you walked to the store to buy a mic and then went home to your basement and started playing"
												"more video games all month again with it" << endl;
										t = t - 120 + s - sp;

										cout << "You now have " << t << " dollars, you make " << s << " dollars, and you spend " << sp << " dollars "
												"every month" << endl;
									} else if (choice == n) {
										cout << "You ask your parents if they want to go somewhere like Grape Gardens and then you do but you end"
												"up having them pay because you didn't want to" << endl;
										t = t + s - sp;

										cout << "You now have " << t << " dollars, you make " << s << " dollars, and you spend " << sp << " dollars "
												"every month" << endl;
									} else if (choice == e) {
										cout << "You decided to take some extra shifts this month at the gas station to make up for your lazy month last month and"
												"made an extra $635" << endl;
										t = t + 635 + s - sp;

										cout << "You now have " << t << " dollars, you make " << s << " dollars, and you spend " << sp << " dollars "
												"every month" << endl;
									} else if (choice == m) {
										cout << "You didn't do much this month again and just stuck to the usual, playing video games until you have"
												"to go to work and spending zero time with your family" << endl;
										t = t + s - sp;

										cout << "You now have " << t << " dollars, you make " << s << " dollars, and you spend " << sp << " dollars "
												"every month" << endl;
									}



				}
			}

	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

		} else if (j == 2) {

			cout << "Congratulations you are a surgeon and make $23,406 a month and you own "
					"a big house in a rich neighborhood with your three kids who are all in "
					"school and two dogs. Your wife died in a car accident a while ago so you "
					"have to hire a nanny to watch the kids after school" << endl;
			cout << "You spend a total of $16611 a month for all the bills food clothing "
					"you get you and your kids every month, and this includes the nanny";

			cout << "Are you ready to begin? (1 = yes; 2 = no)";
					cin >> yn;

					if(yn == 1 || 2) {
						t = 1000;
						s = 23406;
						sp = 16611;

						cout << "if you said yes welcome, if you said no... thats too bad your starting anyways." << endl;

						cout << "you have " << t << " dollars currently would you like to do anything with it?" << endl;
						cout << "You could..." << endl;
					}


		} else if (j == 3) {

			cout << "Congratulations you are an artist and your monthly income will depend "
					"on how much art you sell that much but your pieces usually go for around "
					"5 - 10 thousand dollars, you live alone and have no relatives or family "
					"except your dad who's in jail and you live in a small apartment complex, "
					"you also have a cabin out in the woods where you go to get away from people." << endl;

			cout << "You spend $5000 a month on your apartment food bills food art supplies "
					"and other things." << endl;

			cout << "Are you ready to begin? (1 = yes; 2 = no)";
					cin >> yn;

					if(yn == 1 || 2) {
						t = 1000;
						s = 5000;
						sp = 5000;

						cout << "if you said yes welcome, if you said no... thats too bad your starting anyways." << endl;

						cout << "you have " << t << " dollars currently would you like to do anything with it?" << endl;
						cout << "You could..." << endl;
					}


		} else if (j == 4) {

			cout << " Congratulations!! You are a 2nd Grade Teacher with 4 kids and a husband."
					"You live in an apartment." << endl;
			cout << "You make $4500 a month and you have to spend $3000 a month on rent, bills, food, clothing"
					"and entertainment" << endl;

			cout << "Are you ready to begin? (1 = yes; 2 = no)";
					cin >> yn;

					if(yn == 1 || 2) {
						t = 1000;
						s = 4500;
						sp = 3000;

						cout << "if you said yes welcome, if you said no... thats too bad your starting anyways." << endl;

						cout << "you have " << t << " dollars currently would you like to do anything with it?" << endl;
						cout << "You could..." << endl;
					}


		} else if (j == 5) {

			cout << " Congratulations!! You are a football player in the NFL. You live in a big house"
					"and you currently have a girlfriend " << endl;
			cout << "You make $208,333 a month. You have to spend $15000 a month on clothes, gas, "
					"and bills. Most restaurants let you get discounted or free food.";

			cout << "Are you ready to begin? (1 = yes; 2 = no)";
					cin >> yn;

					if(yn == 1 || 2) {
						t = 1000;
						s = 208333;
						sp = 15000;

						cout << "if you said yes welcome, if you said no... thats too bad your starting anyways." << endl;

						cout << "you have " << t << " dollars currently would you like to do anything with it?" << endl;
						cout << "You could..." << endl;
					}


		} else if (j == 6) {

			cout << " Congratulations!! You are a truck driver. You live in a small house with your "
					"wife, and daughter. " << endl;
			cout << "You make $5300 a month and you have to spend it on bills, food, clothing, and "
					"entertainment. Your company pays for all of your gas and your rich sister insists on"
					"paying for your rent, so you spend about 2000 a month";

			cout << "Are you ready to begin? (1 = yes; 2 = no)";
					cin >> yn;

					if(yn == 1 || 2) {
						t = 1000;
						s = 5300;
						sp = 2000;

						cout << "if you said yes welcome, if you said no... thats too bad your starting anyways." << endl;

						cout << "you have " << t << " dollars currently would you like to do anything with it?" << endl;
						cout << "You could..." << endl;
					}


		} else if (j == 7) {

			cout << " Congratulations!! You now work as a waiter at Grape Garden and live in an apartment with your room-mate!"<< endl;
			cout << " You make $3,500 a month and you spend a total of $1500 a month on food and bills for the apartment." << endl;

			cout << "Are you ready to begin? (1 = yes; 2 = no)";
					cin >> yn;

					if(yn == 1 || 2) {
						t = 1000;
						s = 3500;
						sp = 1500;

						cout << "if you said yes welcome, if you said no... thats too bad your starting anyways." << endl;

						cout << "you have " << t << " dollars currently would you like to do anything with it?" << endl;
						cout << "You could..." << endl;
					}


		} else if (j == 8) {

			int b; // Business
			int wb; // what business does
			int mmm; // money you make a month
			int msm; // money spent a month
			int od; // other details about job or daily life

			cout << "Congratulation you are an entrepreneur and have created a business "
					"called... ";
			cin >> b;
			cout << "What does your business do?" << endl;
			cin >> wb;
			cout << "You make... ";
			cin >> mmm;
			cout << " a month" << endl;
			cout << "you spend... ";
			cin >> msm;
			cout << " a month" << endl;
			cout << "(any other details you want to share about your daily life as the owner "
					"of " << b << " ?)";
			cin >> od;

			cout << "Are you ready to begin? (1 = yes; 2 = no)";
					cin >> yn;

					if(yn == 1 || 2) {
						t = 1000;
						s = mmm;
						sp = msm;

						cout << "if you said yes welcome, if you said no... thats too bad your starting anyways." << endl;

						cout << "you have " << t << " dollars currently would you like to do anything with it?" << endl;
						cout << "You could..." << endl;
					}


		} else if (j == 9) {

			cout << " Congratulations!! You now work as an engineer at an office building and live in a suite in New York "
					"with your dog, you also have a girlfriend who you might ask to marry soon!" << endl;
			cout << "You make 8,500 a month and spend 2,000 a month on rent and food and dates and your dog"<< endl;

			cout << "Are you ready to begin? (1 = yes; 2 = no)";
					cin >> yn;

					if(yn == 1 || 2) {
						t = 1000;
						s = 8500;
						sp = 2000;

						cout << "if you said yes welcome, if you said no... thats too bad your starting anyways." << endl;

						cout << "you have " << t << " dollars currently would you like to do anything with it?" << endl;
						cout << "You could..." << endl;
					}


		} else if (j == 10) {

			cout << " Congratulations!! You now work as a nurse in a hospital and live in a three bedroom home with your "
					"husband and three kids." << endl;
			cout << "You make $6,500 a month and spend $2000 a month on transportation, rent, and your kids. " << endl;

			cout << "Are you ready to begin? (1 = yes; 2 = no)";
					cin >> yn;

					if(yn == 1 || 2) {
						t = 1000;
						s = 6500;
						sp = 2000;

						cout << "if you said yes welcome, if you said no... thats too bad your starting anyways." << endl;

						cout << "you have " << t << " dollars currently would you like to do anything with it?" << endl;
						cout << "You could..." << endl;
					}


		}
	}
};
