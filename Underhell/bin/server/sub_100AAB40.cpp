int *sub_100AAB40()
{
  if ( (dword_10695054 & 1) == 0 )
  {
    dword_10695054 |= 1u;
    dword_10695038 = (int)"CAI_ScriptConditionsElement";
    dword_10695040 = 0;
    dword_10695044 = 0;
    dword_10695048 = 0;
    dword_1069504C = 0;
    dword_10695050 = 0;
    dword_1069503C = 27;
    atexit(sub_1046F580);
  }
  dword_1060AC34 = 0;
  dword_1060AC2C = 3;
  dword_1060AC28 = (int)&unk_1060AEFC;
  return &dword_1060AC28;
}
