int *sub_1024B9E0()
{
  if ( (dword_106C68FC & 1) == 0 )
  {
    dword_106C68FC |= 1u;
    dword_106C68E0 = (int)"TemplateEntityData_t";
    dword_106C68E8 = 0;
    dword_106C68EC = 0;
    dword_106C68F0 = 0;
    dword_106C68F4 = 0;
    dword_106C68F8 = 0;
    dword_106C68E4 = 20;
    atexit(sub_10474430);
  }
  dword_1064F868 = 0;
  dword_1064F860 = 3;
  dword_1064F85C = (int)&unk_1064F904;
  return &dword_1064F85C;
}
