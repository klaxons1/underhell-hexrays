int *sub_102BF9E0()
{
  if ( (dword_106DDF50 & 1) == 0 )
  {
    dword_106DDF50 |= 1u;
    dword_106DDF34 = (int)"CEnvStarfield";
    dword_106DDF3C = 0;
    dword_106DDF40 = 0;
    dword_106DDF44 = 0;
    dword_106DDF48 = 0;
    dword_106DDF4C = 0;
    dword_106DDF38 = 13;
    atexit(sub_10476AD0);
  }
  dword_10662290 = (int)&dword_1060F348;
  dword_10662288 = 5;
  dword_10662284 = (int)&unk_1066232C;
  return &dword_10662284;
}
