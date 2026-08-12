int *sub_10073F90()
{
  if ( (dword_106930C8 & 1) == 0 )
  {
    dword_106930C8 |= 1u;
    dword_106930AC = (int)"CNodeEnt";
    dword_106930B4 = 0;
    dword_106930B8 = 0;
    dword_106930BC = 0;
    dword_106930C0 = 0;
    dword_106930C4 = 0;
    dword_106930B0 = 8;
    atexit(sub_1046F1E0);
  }
  dword_10607938 = (int)&dword_1060F348;
  dword_10607930 = 1;
  dword_1060792C = (int)&unk_10607CC4;
  return &dword_1060792C;
}
