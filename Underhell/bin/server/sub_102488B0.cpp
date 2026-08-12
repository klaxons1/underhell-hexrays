int *sub_102488B0()
{
  if ( (dword_106C6278 & 1) == 0 )
  {
    dword_106C6278 |= 1u;
    dword_106C625C = (int)"CMultiDamage";
    dword_106C6264 = 0;
    dword_106C6268 = 0;
    dword_106C626C = 0;
    dword_106C6270 = 0;
    dword_106C6274 = 0;
    dword_106C6260 = 12;
    atexit(sub_10474370);
  }
  dword_1064ED74 = (int)&dword_1064ED50;
  dword_1064ED6C = 1;
  dword_1064ED68 = (int)&unk_1064F0E4;
  return &dword_1064ED68;
}
