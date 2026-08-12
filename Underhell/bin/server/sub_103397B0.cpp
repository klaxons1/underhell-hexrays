int *sub_103397B0()
{
  if ( (dword_106E64C4 & 1) == 0 )
  {
    dword_106E64C4 |= 1u;
    dword_106E64A8 = (int)"CCommandPoint";
    dword_106E64B0 = 0;
    dword_106E64B4 = 0;
    dword_106E64B8 = 0;
    dword_106E64BC = 0;
    dword_106E64C0 = 0;
    dword_106E64AC = 13;
    atexit(sub_10477F70);
  }
  dword_1066E8F8 = (int)&dword_1060F348;
  dword_1066E8F0 = 1;
  dword_1066E8EC = (int)&unk_1066EB94;
  return &dword_1066E8EC;
}
