int *sub_10127F20()
{
  if ( (dword_1069DA94 & 1) == 0 )
  {
    dword_1069DA94 |= 1u;
    dword_1069DA78 = (int)"CBlood";
    dword_1069DA80 = 0;
    dword_1069DA84 = 0;
    dword_1069DA88 = 0;
    dword_1069DA8C = 0;
    dword_1069DA90 = 0;
    dword_1069DA7C = 6;
    atexit(sub_10470A10);
  }
  dword_106198D8 = (int)&dword_1060F348;
  dword_106198D0 = 4;
  dword_106198CC = (int)&unk_1061A61C;
  return &dword_106198CC;
}
