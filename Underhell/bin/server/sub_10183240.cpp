int *sub_10183240()
{
  if ( (dword_106B675C & 1) == 0 )
  {
    dword_106B675C |= 1u;
    dword_106B6740 = (int)"CRulePointEntity";
    dword_106B6748 = 0;
    dword_106B674C = 0;
    dword_106B6750 = 0;
    dword_106B6754 = 0;
    dword_106B6758 = 0;
    dword_106B6744 = 16;
    atexit(sub_10472040);
  }
  dword_1062FF74 = (int)&dword_1062FF50;
  dword_1062FF6C = 1;
  dword_1062FF68 = (int)&unk_106302DC;
  return &dword_1062FF68;
}
