int *sub_10110E40()
{
  if ( (dword_1069B0F4 & 1) == 0 )
  {
    dword_1069B0F4 |= 1u;
    dword_1069B0D8 = (int)"CPointServerCommand";
    dword_1069B0E0 = 0;
    dword_1069B0E4 = 0;
    dword_1069B0E8 = 0;
    dword_1069B0EC = 0;
    dword_1069B0F0 = 0;
    dword_1069B0DC = 19;
    atexit(sub_104705C0);
  }
  dword_10615210 = (int)&dword_1060F348;
  dword_10615208 = 1;
  dword_10615204 = (int)&unk_1061537C;
  return &dword_10615204;
}
