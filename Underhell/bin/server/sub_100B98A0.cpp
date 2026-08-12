int *sub_100B98A0()
{
  if ( (dword_10695450 & 1) == 0 )
  {
    dword_10695450 |= 1u;
    dword_10695434 = (int)"AI_FreePassParams_t";
    dword_1069543C = 0;
    dword_10695440 = 0;
    dword_10695444 = 0;
    dword_10695448 = 0;
    dword_1069544C = 0;
    dword_10695438 = 19;
    atexit(sub_1046F6E0);
  }
  dword_1060C5F0 = 0;
  dword_1060C5E8 = 9;
  dword_1060C5E4 = (int)&unk_1060CB1C;
  return &dword_1060C5E4;
}
