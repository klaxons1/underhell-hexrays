int *sub_101806F0()
{
  if ( (dword_106B6588 & 1) == 0 )
  {
    dword_106B6588 |= 1u;
    dword_106B656C = (int)"CLogicAutosave";
    dword_106B6574 = 0;
    dword_106B6578 = 0;
    dword_106B657C = 0;
    dword_106B6580 = 0;
    dword_106B6584 = 0;
    dword_106B6570 = 14;
    atexit(sub_10471FE0);
  }
  dword_1062CE48 = (int)&dword_1060F348;
  dword_1062CE40 = 7;
  dword_1062CE3C = (int)&unk_1062F304;
  return &dword_1062CE3C;
}
