int *sub_10164F30()
{
  if ( (dword_106B4D74 & 1) == 0 )
  {
    dword_106B4D74 |= 1u;
    dword_106B4D58 = (int)"CGenericActor";
    dword_106B4D60 = 0;
    dword_106B4D64 = 0;
    dword_106B4D68 = 0;
    dword_106B4D6C = 0;
    dword_106B4D70 = 0;
    dword_106B4D5C = 13;
    atexit(sub_10471B40);
  }
  dword_106284D0 = (int)&dword_105FD568;
  dword_106284C8 = 1;
  dword_106284C4 = (int)&unk_10628674;
  return &dword_106284C4;
}
