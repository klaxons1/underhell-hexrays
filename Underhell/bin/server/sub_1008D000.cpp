int *sub_1008D000()
{
  if ( (dword_1069370C & 1) == 0 )
  {
    dword_1069370C |= 1u;
    dword_106936F0 = (int)"CAI_NetworkManager";
    dword_106936F8 = 0;
    dword_106936FC = 0;
    dword_10693700 = 0;
    dword_10693704 = 0;
    dword_10693708 = 0;
    dword_106936F4 = 18;
    atexit(sub_1046F370);
  }
  dword_10608FA8 = (int)&dword_1060F348;
  if ( (dword_1069370C & 2) == 0 )
  {
    dword_1069370C |= 2u;
    dword_106090C8 = (int)sub_100390B0((char **)&dword_106936F0, "DelayedInit");
    word_106090D4 = 1;
    word_106090D6 = 32;
    dword_106090CC = 0;
    dword_106090D0 = 0;
    dword_106090D8 = 0;
    dword_106090DC = 0;
    dword_106090E0 = (int)sub_1008BD20;
    dword_106090E4 = 0;
    dword_106090E8 = 0;
    dword_106090EC = 0;
    dword_106090F0 = 0;
    dword_106090F4 = 0;
    dword_106090F8 = 0;
    dword_106090FC = (int)sub_100390B0((char **)&dword_106936F0, "RebuildThink");
    dword_10609100 = 0;
    dword_10609104 = 0;
    dword_10609108 = 2097153;
    dword_1060910C = 0;
    dword_10609110 = 0;
    dword_10609114 = (int)sub_1008C470;
    dword_10609118 = 0;
    dword_1060911C = 0;
    dword_10609120 = 0;
    dword_10609124 = 0;
    dword_10609128 = 0;
  }
  dword_10608FA0 = 4;
  dword_10608F9C = (int)&unk_1060905C;
  return &dword_10608F9C;
}
