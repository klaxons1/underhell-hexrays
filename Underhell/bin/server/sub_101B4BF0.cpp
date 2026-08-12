int *sub_101B4BF0()
{
  if ( (dword_106B9DE0 & 1) == 0 )
  {
    dword_106B9DE0 |= 1u;
    dword_106B9DC4 = (int)"CRagdollConstraint";
    dword_106B9DCC = 0;
    dword_106B9DD0 = 0;
    dword_106B9DD4 = 0;
    dword_106B9DD8 = 0;
    dword_106B9DDC = 0;
    dword_106B9DC8 = 18;
    atexit(sub_10472D40);
  }
  dword_1063642C = (int)&dword_106363A8;
  dword_10636424 = 9;
  dword_10636420 = (int)&unk_10637554;
  return &dword_10636420;
}
