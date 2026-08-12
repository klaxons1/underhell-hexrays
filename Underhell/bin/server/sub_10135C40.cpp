int *sub_10135C40()
{
  if ( (dword_106AFE88 & 1) == 0 )
  {
    dword_106AFE88 |= 1u;
    dword_106AFE6C = (int)"CEnvZoom";
    dword_106AFE74 = 0;
    dword_106AFE78 = 0;
    dword_106AFE7C = 0;
    dword_106AFE80 = 0;
    dword_106AFE84 = 0;
    dword_106AFE70 = 8;
    atexit(sub_10470EE0);
  }
  dword_1061FF44 = (int)&dword_1060F348;
  dword_1061FF3C = 5;
  dword_1061FF38 = (int)&unk_1061FFCC;
  return &dword_1061FF38;
}
