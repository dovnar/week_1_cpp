
// MFCApplication1.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "MFCApplication1Dlg.h"
#include <iostream>
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication1App

BEGIN_MESSAGE_MAP(CMFCApplication1App, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()


// CMFCApplication1App construction

CMFCApplication1App::CMFCApplication1App()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}


// The one and only CMFCApplication1App object

CMFCApplication1App theApp;


// CMFCApplication1App initialization
///@brief  



class RandomGenerator///@brief  random 
{
private:
	double starts, count;
protected:
public:
	void SetMinValue(double a_start)
	{
		starts = a_start;		///@brief initialization start
	}
	void SetMaxValue(double a_count)
	{
		count = a_count;		///@brief initialization count
	}
	double GeneratorRandom()			///@brief  random 
	{
		return (double)(rand() % (int)count + starts);
	}
};
class MyRandom : public RandomGenerator
{
protected:

};

//class RG
//{
//	int reg = 10;
//public:
//	int* r = &reg;
//};
//class myRG : public RG
//{
//public:
//	void printRG()
//	{
//		std::cout << r << std::endl;
//	}
//};


BOOL CMFCApplication1App::InitInstance()
{
	CWinApp::InitInstance();                               

	std::cout << "																																		      ____ _""\n"
		"	  _																																			     (__  ^ \\""\n"
		"   _/ \_																																			    \____\\""\n"
		"  (	 )																																				    _\\__""\n"
		"   \   /																												     ___________________		  /		 \\""\n"
		"	 | |																													/				   /|		 |		  |""\n"
		"  \\| \              ________________________________________________    ________________________________________________ /__________________/ |		  \		 /""\n"
		"\\ \   |            /                                               /|  /                                               /||				  | |__________|	|_____""\n"
		" \\ |  |           /_______________________________________________/ | /_______________________________________________/ ||	_________     | /		   |____|	 /\\""\n"
		"  \\|  |  /|      |       _________               _________       |  ||       _________               _________       |  ||	|   |   |	  |/____________________/  \\""\n"
		"   \   | / /      |       |   |   |               |   |   |       |  ||       |   |   |               |   |   |       |  ||	|---+---|			___ 	____	\   )""\n"
		"    |  |/ /       |       |---+---|               |---+---|       |  ||       |---+---|               |---+---|       |  ||	|___|___|			   \		\	 \ /""\n"
		"    |    /        |       |___|___|               |___|___|       |  /|       |___|___|               |___|___|       |  /|						====)--------)----)""\n"
		"    |   /         |                                               | / |                                               | /	|  _______			___/	____/	 /""\n"
		"    |  |         =|_______________________________________________|/==|_______________________________________________|/==|_//     \\___________________________/""\n"
		"    |  |            |_/  \_/  \ _|              |_/  \_/  \ _|          |_/  \_/  \ _|              |_/  \_/  \ _|        (   *   )          |_/  \_/  \ _|""\n"
		"======================\__/=\__/===================\__/=\__/===============\__/=\__/===================\__/=\__/============\_____/=============\__/=\__/============""\n"
		"=lol=lol=lol=lol=lol=lol=lol=lol=lol=lol=lol=lol=lol=lol=lol=lol=lol=lol=lol=lol=lol=lol=lol=lol=lol=lol=lol=lol=lol=lol=lol=lol=lol=lol=lol=lol=lol=lol=lol=lol=" "\n";

	MyRandom myRg;
	myRg.SetMinValue(100);

	// Create the shell manager, in case the dialog contains
	// any shell tree view or shell list view controls.
	CShellManager *pShellManager = new CShellManager;

	// Activate "Windows Native" visual manager for enabling themes in MFC controls
	CMFCVisualManager::SetDefaultManager(RUNTIME_CLASS(CMFCVisualManagerWindows));

	// Standard initialization
	// If you are not using these features and wish to reduce the size
	// of your final executable, you should remove from the following
	// the specific initialization routines you do not need
	// Change the registry key under which our settings are stored
	// TODO: You should modify this string to be something appropriate
	// such as the name of your company or organization
	SetRegistryKey(_T("Local AppWizard-Generated Applications"));

	CMFCApplication1Dlg dlg;
	m_pMainWnd = &dlg;
	INT_PTR nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
		// TODO: Place code here to handle when the dialog is
		//  dismissed with OK
	}
	else if (nResponse == IDCANCEL)
	{
		// TODO: Place code here to handle when the dialog is
		//  dismissed with Cancel
	}
	else if (nResponse == -1)
	{
		TRACE(traceAppMsg, 0, "Warning: dialog creation failed, so application is terminating unexpectedly.\n");
		TRACE(traceAppMsg, 0, "Warning: if you are using MFC controls on the dialog, you cannot #define _AFX_NO_MFC_CONTROLS_IN_DIALOGS.\n");
	}

	// Delete the shell manager created above.
	if (pShellManager != NULL)
	{
		delete pShellManager;
	}

	// Since the dialog has been closed, return FALSE so that we exit the
	//  application, rather than start the application's message pump.
	return FALSE;
}

