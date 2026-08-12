int *sub_1031F750()
{
  if ( (dword_106E4E18 & 1) == 0 )
  {
    dword_106E4E18 |= 1u;
    dword_106E4DFC = (int)"CAvoidSphere";
    dword_106E4E04 = 0;
    dword_106E4E08 = 0;
    dword_106E4E0C = 0;
    dword_106E4E10 = 0;
    dword_106E4E14 = 0;
    dword_106E4E00 = 12;
    atexit(sub_10477B20);
  }
  dword_1066C948 = (int)&dword_1060F348;
  dword_1066C940 = 1;
  dword_1066C93C = (int)&unk_1066CD94;
  return &dword_1066C93C;
}
