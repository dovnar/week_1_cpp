// main.cpp : Defines the entry point for the console application.
/*

         **************************************************************************
														**********************************
																			****************

																						******
										************									 ****
			***************************************************************************   ****
****************														 ***************   ****
																						    ****
																						     ****
																			*************	  *****
															******************************	   ******
										************************************					********
							**************														 **********										*********
																						*****************************									*********
																			***********************************************************							*****
																	 ************************						*********************************               ***
															     *********																*********************************
															   *******																				   ***********************
															 *******																							************  ***
														    *******																									  ***********
														   ******																										  ******
														   ******																											**
														   ******
														   ******							**	 **	    **		**			**		**			**	**     **	**		**	**     **
														    ******							**	**	   ****		**			**		**			**	***    **	**		**	 **   **
															 ******							** **	  **  **	**			**		**			**	****   **	**		**	  ** **
															  *******						****	 **	   **	**			**		**			**	** **  **	**		**	   ***
															   *******						****	**********	**			**		**			**	**  ** **	**		**	   ***
															    ********					** **	**********	**			**		**			**	**	 ****	**      **	  ** **
																  ********					**  **	**	    **	*********	**		*********	**	**    ***	 **    **	 **   **
																    *********				**   **	**	    **	*********	**		*********	**	**	   **	   ****		**     **
																	   **********
																	      ***********
																		       ************
																			       *************
																				        *********************
																								******************************************
																											******************************************************
																																		*************************************
																																						***************		********
																																								  ********		  ********
																																									    ******			 *******
																																									      	****			 *******
																																										       ****			     *******
																																										          ***			     *****
																																										            **			         ***
																																											          *				        *
 */



#include "stdafx.h"
#include "DoubleRandomGeneration.h"


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	int vLuboe = 9;
	DoubleRandomGeneration v_RG;
	v_RG.Setp((int* const)12);
	auto x = v_RG.Getp();
	std::cout << v_RG.MyTextFromHere() << std::endl;
	return 0;
}

/*
  ___                          _ _ _                    
 ( / \                        ( / ) )          o        
  /  /__ _  ,__ _   __,  _     / / / __,  _., ,  _ _ _  
(/\_/(_)/ |/ / / /_(_/(_/ (_  / / (_(_/(_/ /\_(_/ / / /_
                                                        */