/*********************************************************************
*                                                                    *
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                                                                    *
**********************************************************************
*                                                                    *
* C-file generated by:                                               *
*                                                                    *
*        GUI_Builder for emWin version 5.28                          *
*        Compiled Jan 30 2015, 16:41:06                              *
*        (c) 2015 Segger Microcontroller GmbH & Co. KG               *
*                                                                    *
**********************************************************************
*                                                                    *
*        Internet: www.segger.com  Support: support@segger.com       *
*                                                                    *
**********************************************************************
*/

// USER START (Optionally insert additional includes)
#include "DIALOG.h"
#include "FrameWinDLGSweeper.h"
#include "ADF4350_Messages.h"

extern unsigned long Register_Buf[12];

/*********************************************************************
*
*       Defines
*
**********************************************************************
*/
#define ID_FRAMEWIN_0     (GUI_ID_USER + 0x00)
#define ID_BUTTON_0     (GUI_ID_USER + 0x01)


// USER START (Optionally insert additional defines)
// USER END

#include "DIALOG.h"

/*********************************************************************
*
*       Defines
*
**********************************************************************
*/
#define ID_FRAMEWIN_0 (GUI_ID_USER + 0x00)
#define ID_BUTTON_0 (GUI_ID_USER + 0x01)
#define ID_BUTTON_1 (GUI_ID_USER + 0x02)
#define ID_BUTTON_2 (GUI_ID_USER + 0x03)
#define ID_BUTTON_3 (GUI_ID_USER + 0x04)
#define ID_BUTTON_4 (GUI_ID_USER + 0x05)
#define ID_BUTTON_5 (GUI_ID_USER + 0x06)
#define ID_BUTTON_6 (GUI_ID_USER + 0x07)
#define ID_BUTTON_7 (GUI_ID_USER + 0x08)
#define ID_BUTTON_8 (GUI_ID_USER + 0x09)
#define ID_BUTTON_9 (GUI_ID_USER + 0x0A)
#define ID_BUTTON_10 (GUI_ID_USER + 0x0B)
#define ID_BUTTON_11 (GUI_ID_USER + 0x0C)
#define ID_BUTTON_12 (GUI_ID_USER + 0x0D)
#define ID_BUTTON_13 (GUI_ID_USER + 0x0E)
#define ID_EDIT_0 (GUI_ID_USER + 0x0F)
#define ID_EDIT_1 (GUI_ID_USER + 0x10)
#define ID_EDIT_2 (GUI_ID_USER + 0x11)
#define ID_EDIT_3 (GUI_ID_USER + 0x12)
#define ID_EDIT_4 (GUI_ID_USER + 0x13)
#define ID_EDIT_5 (GUI_ID_USER + 0x14)
#define ID_EDIT_6 (GUI_ID_USER + 0x15)
#define ID_EDIT_7 (GUI_ID_USER + 0x16)
#define ID_EDIT_8 (GUI_ID_USER + 0x17)
#define ID_BUTTON_14 (GUI_ID_USER + 0x18)
#define ID_BUTTON_15 (GUI_ID_USER + 0x19)
#define ID_BUTTON_16 (GUI_ID_USER + 0x1A)
#define ID_BUTTON_17 (GUI_ID_USER + 0x1B)
#define ID_EDIT_9 (GUI_ID_USER + 0x1C)
#define ID_EDIT_10 (GUI_ID_USER + 0x1D)
#define ID_EDIT_11 (GUI_ID_USER + 0x1E)
#define ID_EDIT_12 (GUI_ID_USER + 0x1F)
#define ID_TEXT_0 (GUI_ID_USER + 0x20)
#define ID_TEXT_1 (GUI_ID_USER + 0x21)
#define ID_TEXT_2 (GUI_ID_USER + 0x22)
#define ID_TEXT_3 (GUI_ID_USER + 0x23)
#define ID_PROGBAR_0 (GUI_ID_USER + 0x24)


// USER START (Optionally insert additional defines)
// USER END

/*********************************************************************
*
*       Static data
*
**********************************************************************
*/

// USER START (Optionally insert additional static data)
// USER END

/*********************************************************************
*
*       _aDialogCreate
*/
static const GUI_WIDGET_CREATE_INFO _aDialogCreate[] = {
  { FRAMEWIN_CreateIndirect, "Framewin", ID_FRAMEWIN_0, 0, 0, 320, 240, 0, 0x64, 0 },
  { BUTTON_CreateIndirect, "-_7", ID_BUTTON_0, 20, 75, 20, 20, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "+_7", ID_BUTTON_1, 20, 26, 20, 20, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "+_6", ID_BUTTON_2, 71, 26, 20, 20, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "-_6", ID_BUTTON_3, 71, 75, 20, 20, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "+_5", ID_BUTTON_4, 106, 26, 20, 20, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "-_5", ID_BUTTON_5, 106, 75, 20, 20, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "+_4", ID_BUTTON_6, 142, 26, 20, 20, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "-_4", ID_BUTTON_7, 142, 75, 20, 20, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "+_3", ID_BUTTON_8, 196, 25, 20, 20, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "+_2", ID_BUTTON_9, 230, 24, 20, 20, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "-_3", ID_BUTTON_10, 196, 75, 20, 20, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "+_1", ID_BUTTON_11, 264, 25, 20, 20, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "-_2", ID_BUTTON_12, 230, 75, 20, 20, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "-_1", ID_BUTTON_13, 264, 75, 20, 20, 0, 0x0, 0 },
  { EDIT_CreateIndirect, "SW_SWEEP", ID_EDIT_0, 23, 121, 66, 20, 0, 0x64, 0 },
  { EDIT_CreateIndirect, "SW_STOP", ID_EDIT_1, 223, 121, 67, 20, 0, 0x64, 0 },
  { EDIT_CreateIndirect, "Edit_7", ID_EDIT_2, 20, 51, 20, 20, 0, 0x1, 0 },
  { EDIT_CreateIndirect, "Edit_6", ID_EDIT_3, 71, 51, 20, 20, 0, 0x1, 0 },
  { EDIT_CreateIndirect, "Edit_5", ID_EDIT_4, 106, 51, 20, 20, 0, 0x1, 0 },
  { EDIT_CreateIndirect, "Edit_4", ID_EDIT_5, 142, 51, 20, 20, 0, 0x1, 0 },
  { EDIT_CreateIndirect, "Edit_3", ID_EDIT_6, 196, 51, 20, 20, 0, 0x1, 0 },
  { EDIT_CreateIndirect, "Edit_2", ID_EDIT_7, 230, 51, 19, 20, 0, 0x1, 0 },
  { EDIT_CreateIndirect, "Edit_1", ID_EDIT_8, 264, 51, 20, 20, 0, 0x1, 0 },
  { BUTTON_CreateIndirect, "SW_Start_F", ID_BUTTON_14, 13, 184, 60, 20, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "SW_Stop_F", ID_BUTTON_15, 13, 157, 60, 20, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "SW_Pas", ID_BUTTON_16, 177, 157, 60, 20, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "SW_Vitesse", ID_BUTTON_17, 177, 184, 60, 20, 0, 0x0, 0 },
  { EDIT_CreateIndirect, "Edit_Stop_F", ID_EDIT_9, 80, 157, 56, 20, 0, 0x64, 0 },
  { EDIT_CreateIndirect, "Edit_Pas", ID_EDIT_10, 246, 157, 36, 20, 0, 0x64, 0 },
  { EDIT_CreateIndirect, "Edit_Start_F", ID_EDIT_11, 80, 184, 56, 20, 0, 0x64, 0 },
  { EDIT_CreateIndirect, "Edit_Vitesse", ID_EDIT_12, 246, 184, 36, 20, 0, 0x64, 0 },
  { TEXT_CreateIndirect, "kHz", ID_TEXT_0, 279, 159, 35, 20, 0, 0x64, 0 },
  { TEXT_CreateIndirect, "ms", ID_TEXT_1, 279, 182, 29, 20, 0, 0x0, 0 },
  { TEXT_CreateIndirect, "kHz", ID_TEXT_2, 143, 161, 26, 20, 0, 0x0, 0 },
  { TEXT_CreateIndirect, "kHz", ID_TEXT_3, 143, 186, 24, 20, 0, 0x0, 0 },
  { PROGBAR_CreateIndirect, "Progbar", ID_PROGBAR_0, 120, 121, 80, 20, 0, 0x0, 0 },
  // USER START (Optionally insert additional widgets)
  // USER END
};

/*********************************************************************
*
*       Static code
*
**********************************************************************
*/

// USER START (Optionally insert additional static code)
// USER END

/*********************************************************************
*
*       _cbDialog
*/
static void _cbDialog(WM_MESSAGE * pMsg) {
  WM_HWIN hItem;
  int     NCode;
  int     Id;
  // USER START (Optionally insert additional variables)
  // USER END

  switch (pMsg->MsgId) {
  case WM_INIT_DIALOG:
    //
    // Initialization of 'Framewin'
    //
    hItem = pMsg->hWin;
    FRAMEWIN_SetTextColor(hItem, 0x0000FFFF);
    FRAMEWIN_SetText(hItem, "ADF 4351 PLL     35 � 4400 MHz");
    //
    // Initialization of '-_7'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_0);
    BUTTON_SetText(hItem, "-");
    BUTTON_SetFont(hItem, GUI_FONT_24B_ASCII);
    //
    // Initialization of '+_7'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_1);
    BUTTON_SetText(hItem, "+");
    BUTTON_SetFont(hItem, GUI_FONT_20B_ASCII);
    //
    // Initialization of '+_6'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_2);
    BUTTON_SetText(hItem, "+");
    BUTTON_SetFont(hItem, GUI_FONT_20B_ASCII);
    //
    // Initialization of '-_6'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_3);
    BUTTON_SetText(hItem, "-");
    BUTTON_SetFont(hItem, GUI_FONT_24B_ASCII);
    //
    // Initialization of '+_5'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_4);
    BUTTON_SetText(hItem, "+");
    BUTTON_SetFont(hItem, GUI_FONT_20B_ASCII);
    //
    // Initialization of '-_5'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_5);
    BUTTON_SetText(hItem, "-");
    BUTTON_SetFont(hItem, GUI_FONT_24B_ASCII);
    //
    // Initialization of '+_4'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_6);
    BUTTON_SetText(hItem, "+");
    BUTTON_SetFont(hItem, GUI_FONT_20B_ASCII);
    //
    // Initialization of '-_4'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_7);
    BUTTON_SetText(hItem, "-");
    BUTTON_SetFont(hItem, GUI_FONT_24B_ASCII);
    //
    // Initialization of '+_3'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_8);
    BUTTON_SetText(hItem, "+");
    BUTTON_SetFont(hItem, GUI_FONT_20B_ASCII);
    //
    // Initialization of '+_2'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_9);
    BUTTON_SetText(hItem, "+");
    BUTTON_SetFont(hItem, GUI_FONT_20B_ASCII);
    //
    // Initialization of '-_3'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_10);
    BUTTON_SetText(hItem, "-");
    BUTTON_SetFont(hItem, GUI_FONT_24B_ASCII);
    //
    // Initialization of '+_1'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_11);
    BUTTON_SetText(hItem, "+");
    BUTTON_SetFont(hItem, GUI_FONT_20B_ASCII);
    //
    // Initialization of '-_2'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_12);
    BUTTON_SetText(hItem, "-");
    BUTTON_SetFont(hItem, GUI_FONT_24B_ASCII);
    //
    // Initialization of '-_1'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_13);
    BUTTON_SetText(hItem, "-");
    BUTTON_SetFont(hItem, GUI_FONT_24B_ASCII);
    //
    // Initialization of 'SW_SWEEP'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_0);
    EDIT_SetText(hItem, "SWEEP");
    EDIT_SetTextColor(hItem, EDIT_CI_ENABLED, 0x000000FF);
    EDIT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER);
    EDIT_SetFont(hItem, GUI_FONT_16B_ASCII);
    //
    // Initialization of 'SW_STOP'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_1);
    EDIT_SetText(hItem, "STOP");
    EDIT_SetTextColor(hItem, EDIT_CI_ENABLED, 0x000000FF);
    EDIT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER);
    EDIT_SetFont(hItem, GUI_FONT_16B_ASCII);
    //
    // Initialization of 'Edit_7'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_2);
    EDIT_SetText(hItem, "0");
    EDIT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER);
    //
    // Initialization of 'Edit_6'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_3);
    EDIT_SetText(hItem, "0");
    EDIT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER);
    //
    // Initialization of 'Edit_5'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_4);
    EDIT_SetText(hItem, "0");
    EDIT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER);
    //
    // Initialization of 'Edit_4'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_5);
    EDIT_SetText(hItem, "0");
    EDIT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER);
    //
    // Initialization of 'Edit_3'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_6);
    EDIT_SetText(hItem, "0");
    EDIT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER);
    //
    // Initialization of 'Edit_2'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_7);
    EDIT_SetText(hItem, "0");
    EDIT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER);
    //
    // Initialization of 'Edit_1'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_8);
    EDIT_SetText(hItem, "0");
    EDIT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER);
    //
    // Initialization of 'SW_Start_F'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_14);
    BUTTON_SetText(hItem, "Start_F");
    //
    // Initialization of 'SW_Stop_F'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_15);
    BUTTON_SetText(hItem, "STOP_F");
    //
    // Initialization of 'SW_Pas'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_16);
    BUTTON_SetText(hItem, "Pas");
    //
    // Initialization of 'SW_Vitesse'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_17);
    BUTTON_SetText(hItem, "Vitesse");
    //
    // Initialization of 'Edit_Stop_F'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_9);
    EDIT_SetText(hItem, "0 000 000");
    EDIT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER);
    //
    // Initialization of 'Edit_Pas'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_10);
    EDIT_SetText(hItem, "0 000");
    EDIT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER);
    //
    // Initialization of 'Edit_Start_F'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_11);
    EDIT_SetText(hItem, "0 000 000");
    EDIT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER);
    //
    // Initialization of 'Edit_Vitesse'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_12);
    EDIT_SetText(hItem, "0000");
    EDIT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER);
    //
    // Initialization of 'kHz'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_0);
    TEXT_SetText(hItem, "kHz");
    TEXT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER);
    //
    // Initialization of 'ms'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_1);
    TEXT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER);
    //
    // Initialization of 'Progbar'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_PROGBAR_0);
    PROGBAR_SetFont(hItem, GUI_FONT_16B_ASCII);
    // USER START (Optionally insert additional code for further widget initialization)
    // USER END
    break;
  case WM_NOTIFY_PARENT:
    Id    = WM_GetId(pMsg->hWinSrc);
    NCode = pMsg->Data.v;
    switch(Id) {
    case ID_BUTTON_0: // Notifications sent by '-_7'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_1: // Notifications sent by '+_7'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_2: // Notifications sent by '+_6'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_3: // Notifications sent by '-_6'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_4: // Notifications sent by '+_5'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_5: // Notifications sent by '-_5'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_6: // Notifications sent by '+_4'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_7: // Notifications sent by '-_4'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_8: // Notifications sent by '+_3'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_9: // Notifications sent by '+_2'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_10: // Notifications sent by '-_3'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_11: // Notifications sent by '+_1'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_12: // Notifications sent by '-_2'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_13: // Notifications sent by '-_1'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_EDIT_0: // Notifications sent by 'SW_SWEEP'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_VALUE_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_EDIT_1: // Notifications sent by 'SW_STOP'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_VALUE_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_EDIT_2: // Notifications sent by 'Edit_7'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_VALUE_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_EDIT_3: // Notifications sent by 'Edit_6'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_VALUE_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_EDIT_4: // Notifications sent by 'Edit_5'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_VALUE_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_EDIT_5: // Notifications sent by 'Edit_4'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_VALUE_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_EDIT_6: // Notifications sent by 'Edit_3'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_VALUE_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_EDIT_7: // Notifications sent by 'Edit_2'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_VALUE_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_EDIT_8: // Notifications sent by 'Edit_1'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_VALUE_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_14: // Notifications sent by 'SW_Start_F'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_15: // Notifications sent by 'SW_Stop_F'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_16: // Notifications sent by 'SW_Pas'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_17: // Notifications sent by 'SW_Vitesse'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_EDIT_9: // Notifications sent by 'Edit_Stop_F'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_VALUE_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_EDIT_10: // Notifications sent by 'Edit_Pas'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_VALUE_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_EDIT_11: // Notifications sent by 'Edit_Start_F'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_VALUE_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_EDIT_12: // Notifications sent by 'Edit_Vitesse'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_VALUE_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    // USER START (Optionally insert additional code for further Ids)
    // USER END
    }
    break;
  // USER START (Optionally insert additional message handling)
  // USER END
  default:
    WM_DefaultProc(pMsg);
    break;
  }
}

/*********************************************************************
*
*       Public code
*
**********************************************************************
*/
/*********************************************************************
*
*       CreateFramewin
*/
WM_HWIN CreateFramewin(void);
WM_HWIN CreateFramewin(void) {
  WM_HWIN hWin;

  hWin = GUI_CreateDialogBox(_aDialogCreate, GUI_COUNTOF(_aDialogCreate), _cbDialog, WM_HBKWIN, 0, 0);
  return hWin;
}

// USER START (Optionally insert additional public code)
// USER END

/*************************** End of file ****************************/
