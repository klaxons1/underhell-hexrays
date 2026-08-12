int *sub_102105C0()
{
  if ( (dword_106C26B4 & 1) == 0 )
  {
    dword_106C26B4 |= 1u;
    dword_106C2698 = (int)"CPhysicsPropMultiplayer";
    dword_106C26A0 = 0;
    dword_106C26A4 = 0;
    dword_106C26A8 = 0;
    dword_106C26AC = 0;
    dword_106C26B0 = 0;
    dword_106C269C = 23;
    atexit(sub_10473B20);
  }
  dword_10643088 = (int)&dword_10642FF8;
  dword_10643080 = 5;
  dword_1064307C = (int)&unk_10643A64;
  return &dword_1064307C;
}
