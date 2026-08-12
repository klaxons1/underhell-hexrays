int *sub_1013E7E0()
{
  if ( (dword_106B03A4 & 1) == 0 )
  {
    dword_106B03A4 |= 1u;
    dword_106B0388 = (int)"CFilterMassGreater";
    dword_106B0390 = 0;
    dword_106B0394 = 0;
    dword_106B0398 = 0;
    dword_106B039C = 0;
    dword_106B03A0 = 0;
    dword_106B038C = 18;
    atexit(sub_10471060);
  }
  dword_10622380 = (int)&dword_106222FC;
  dword_10622378 = 1;
  dword_10622374 = (int)&unk_10622A5C;
  return &dword_10622374;
}
