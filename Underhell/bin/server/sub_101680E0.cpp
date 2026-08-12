int *sub_101680E0()
{
  if ( (dword_106B4F90 & 1) == 0 )
  {
    dword_106B4F90 |= 1u;
    dword_106B4F74 = (int)"globalentity_t";
    dword_106B4F7C = 0;
    dword_106B4F80 = 0;
    dword_106B4F84 = 0;
    dword_106B4F88 = 0;
    dword_106B4F8C = 0;
    dword_106B4F78 = 14;
    atexit(sub_10471BD0);
  }
  dword_10628BD8 = 0;
  dword_10628BD0 = 4;
  dword_10628BCC = (int)&unk_10628D44;
  return &dword_10628BCC;
}
