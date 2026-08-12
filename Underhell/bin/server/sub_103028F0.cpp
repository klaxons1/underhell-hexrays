int *sub_103028F0()
{
  if ( (dword_106E2E28 & 1) == 0 )
  {
    dword_106E2E28 |= 1u;
    dword_106E2E0C = (int)"CNPC_Antlion";
    dword_106E2E14 = 0;
    dword_106E2E18 = 0;
    dword_106E2E1C = 0;
    dword_106E2E20 = 0;
    dword_106E2E24 = 0;
    dword_106E2E10 = 12;
    atexit(sub_10477830);
  }
  dword_1066A934 = (int)&dword_105FE114;
  if ( (dword_106E2E28 & 2) == 0 )
  {
    dword_106E2E28 |= 2u;
    dword_1066B4DC = 0;
    dword_1066B4E0 = 0;
    dword_1066B4E4 = 0;
    dword_1066B4E8 = 0;
    dword_1066B4EC = 0;
    dword_1066B4F0 = 0;
    word_1066B504 = 1;
    dword_1066B4D8 = (int)off_10614A2C;
    dword_1066B50C = (int)off_10614A2C;
    dword_1066B4F4 = 11;
    dword_1066B4F8 = (int)"m_OnUnBurrowed";
    dword_1066B4FC = 4016;
    dword_1066B500 = 0;
    word_1066B506 = 22;
    dword_1066B508 = (int)"OnUnBurrowed";
    dword_1066B510 = 0;
    dword_1066B514 = 0;
    dword_1066B518 = 0;
    dword_1066B51C = 0;
    dword_1066B520 = 0;
    dword_1066B524 = 0;
    dword_1066B528 = 0;
    dword_1066B52C = (int)sub_100390B0((char **)&dword_106E2E0C, "Touch");
    word_1066B538 = 1;
    word_1066B53A = 32;
    dword_1066B530 = 0;
    dword_1066B534 = 0;
    dword_1066B53C = 0;
    dword_1066B540 = 0;
    dword_1066B544 = (int)sub_10272970;
    dword_1066B548 = 0;
    dword_1066B54C = 0;
    dword_1066B550 = 0;
    dword_1066B554 = 0;
    dword_1066B558 = 0;
    dword_1066B55C = 0;
    dword_1066B560 = (int)sub_100390B0((char **)&dword_106E2E0C, "BurrowUse");
    word_1066B56E = 32;
    dword_1066B564 = 0;
    dword_1066B568 = 0;
    word_1066B56C = 1;
    dword_1066B570 = 0;
    dword_1066B574 = 0;
    dword_1066B578 = (int)sub_10301C40;
    dword_1066B57C = 0;
    dword_1066B580 = 0;
    dword_1066B584 = 0;
    dword_1066B588 = 0;
    dword_1066B58C = 0;
    dword_1066B590 = 0;
    dword_1066B594 = (int)sub_100390B0((char **)&dword_106E2E0C, "ZapThink");
    dword_1066B598 = 0;
    dword_1066B59C = 0;
    dword_1066B5A0 = 2097153;
    dword_1066B5A4 = 0;
    dword_1066B5A8 = 0;
    dword_1066B5AC = (int)sub_102FB610;
    dword_1066B5B0 = 0;
    dword_1066B5B4 = 0;
    dword_1066B5B8 = 0;
    dword_1066B5BC = 0;
    dword_1066B5C0 = 0;
  }
  dword_1066A92C = 50;
  dword_1066A928 = (int)&unk_1066AB9C;
  return &dword_1066A928;
}
