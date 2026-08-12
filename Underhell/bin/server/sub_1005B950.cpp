int *sub_1005B950()
{
  if ( (dword_106922D0 & 1) == 0 )
  {
    dword_106922D0 |= 1u;
    dword_106922B4 = (int)"CAI_LeadGoal_Weapon";
    dword_106922BC = 0;
    dword_106922C0 = 0;
    dword_106922C4 = 0;
    dword_106922C8 = 0;
    dword_106922CC = 0;
    dword_106922B8 = 19;
    atexit(sub_1046ECD0);
  }
  dword_10604634 = (int)&dword_10604610;
  dword_1060462C = 2;
  dword_10604628 = (int)&unk_10605404;
  return &dword_10604628;
}
