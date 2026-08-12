int *sub_1013E700()
{
  if ( (dword_106B0364 & 1) == 0 )
  {
    dword_106B0364 |= 1u;
    dword_106B0348 = (int)"CFilterClass";
    dword_106B0350 = 0;
    dword_106B0354 = 0;
    dword_106B0358 = 0;
    dword_106B035C = 0;
    dword_106B0360 = 0;
    dword_106B034C = 12;
    atexit(sub_10471040);
  }
  dword_10622350 = (int)&dword_106222FC;
  dword_10622348 = 1;
  dword_10622344 = (int)&unk_1062298C;
  return &dword_10622344;
}
