int *sub_1031F850()
{
  if ( (dword_106E4E6C & 1) == 0 )
  {
    dword_106E4E6C |= 1u;
    dword_106E4E50 = (int)"CAvoidBox";
    dword_106E4E58 = 0;
    dword_106E4E5C = 0;
    dword_106E4E60 = 0;
    dword_106E4E64 = 0;
    dword_106E4E68 = 0;
    dword_106E4E54 = 9;
    atexit(sub_10477B40);
  }
  dword_1066C960 = (int)&dword_1060F348;
  dword_1066C958 = 1;
  dword_1066C954 = (int)&unk_106E4E1C;
  return &dword_1066C954;
}
