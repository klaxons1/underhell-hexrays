int *sub_10077930()
{
  if ( (dword_10693200 & 1) == 0 )
  {
    dword_10693200 |= 1u;
    dword_106931E4 = (int)"CAI_Enemies";
    dword_106931EC = 0;
    dword_106931F0 = 0;
    dword_106931F4 = 0;
    dword_106931F8 = 0;
    dword_106931FC = 0;
    dword_106931E8 = 11;
    atexit(sub_1046F230);
  }
  dword_10607EBC = 0;
  dword_10607EB4 = 6;
  dword_10607EB0 = (int)asc_10607F4C;
  return &dword_10607EB0;
}
