int *sub_10248830()
{
  if ( (dword_106C6258 & 1) == 0 )
  {
    dword_106C6258 |= 1u;
    dword_106C623C = (int)"CTakeDamageInfo";
    dword_106C6244 = 0;
    dword_106C6248 = 0;
    dword_106C624C = 0;
    dword_106C6250 = 0;
    dword_106C6254 = 0;
    dword_106C6240 = 15;
    atexit(sub_10474360);
  }
  dword_1064ED5C = 0;
  dword_1064ED54 = 13;
  dword_1064ED50 = (int)&unk_1064EE0C;
  return &dword_1064ED50;
}
