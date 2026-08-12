int *sub_1017EF40()
{
  if ( (dword_106B6468 & 1) == 0 )
  {
    dword_106B6468 |= 1u;
    dword_106B644C = (int)"CLogicLineToEntity";
    dword_106B6454 = 0;
    dword_106B6458 = 0;
    dword_106B645C = 0;
    dword_106B6460 = 0;
    dword_106B6464 = 0;
    dword_106B6450 = 18;
    atexit(sub_10471F50);
  }
  dword_1062CD70 = (int)&dword_1060F348;
  if ( (dword_106B6468 & 2) == 0 )
  {
    dword_106B6468 |= 2u;
    dword_1062D9D8 = (int)off_10614A2C;
    dword_1062D9DC = 0;
    dword_1062D9E0 = 0;
    dword_1062D9E4 = 0;
    dword_1062D9E8 = 0;
    dword_1062D9EC = 0;
    dword_1062D9F0 = 0;
  }
  dword_1062CD68 = 4;
  dword_1062CD64 = (int)&unk_1062D924;
  return &dword_1062CD64;
}
