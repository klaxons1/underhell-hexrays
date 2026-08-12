int *sub_103FD140()
{
  if ( (dword_106F02C8 & 1) == 0 )
  {
    dword_106F02C8 |= 1u;
    dword_106F02AC = (int)"game_shadowcontrol_params_t";
    dword_106F02B4 = 0;
    dword_106F02B8 = 0;
    dword_106F02BC = 0;
    dword_106F02C0 = 0;
    dword_106F02C4 = 0;
    dword_106F02B0 = 27;
    atexit(sub_104798F0);
  }
  dword_10685610 = 0;
  dword_10685608 = 8;
  dword_10685604 = (int)&unk_10685884;
  return &dword_10685604;
}
