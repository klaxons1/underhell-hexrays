int *sub_1004F3F0()
{
  if ( (dword_10691E5C & 1) == 0 )
  {
    dword_10691E5C |= 1u;
    dword_10691E40 = (int)"CRallyPoint";
    dword_10691E48 = 0;
    dword_10691E4C = 0;
    dword_10691E50 = 0;
    dword_10691E54 = 0;
    dword_10691E58 = 0;
    dword_10691E44 = 11;
    atexit(sub_1046EBB0);
  }
  dword_10601D7C = (int)&dword_1060F348;
  if ( (dword_10691E5C & 2) == 0 )
  {
    dword_10691E5C |= 2u;
    dword_10602240 = (int)off_10614A2C;
    dword_10602244 = 0;
    dword_10602248 = 0;
    dword_1060224C = 0;
    dword_10602250 = 0;
    dword_10602254 = 0;
    dword_10602258 = 0;
  }
  dword_10601D74 = 10;
  dword_10601D70 = (int)&unk_10602054;
  return &dword_10601D70;
}
