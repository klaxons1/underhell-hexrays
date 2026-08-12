int *sub_10128010()
{
  if ( (dword_1069DB08 & 1) == 0 )
  {
    dword_1069DB08 |= 1u;
    dword_1069DAEC = (int)"CEnvBeverage";
    dword_1069DAF4 = 0;
    dword_1069DAF8 = 0;
    dword_1069DAFC = 0;
    dword_1069DB00 = 0;
    dword_1069DB04 = 0;
    dword_1069DAF0 = 12;
    atexit(sub_10470A30);
  }
  dword_10619908 = (int)&dword_1060F348;
  dword_10619900 = 3;
  dword_106198FC = (int)&unk_1061A724;
  return &dword_106198FC;
}
