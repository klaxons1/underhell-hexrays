int *sub_101B3F60()
{
  if ( (dword_106B9D00 & 1) == 0 )
  {
    dword_106B9D00 |= 1u;
    dword_106B9CE4 = (int)"CConstraintAnchor";
    dword_106B9CEC = 0;
    dword_106B9CF0 = 0;
    dword_106B9CF4 = 0;
    dword_106B9CF8 = 0;
    dword_106B9CFC = 0;
    dword_106B9CE8 = 17;
    atexit(sub_10472CD0);
  }
  dword_10636384 = (int)&dword_1060F348;
  dword_1063637C = 1;
  dword_10636378 = (int)&unk_1063684C;
  return &dword_10636378;
}
