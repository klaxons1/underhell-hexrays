int *sub_101FCF40()
{
  if ( (dword_106C0EEC & 1) == 0 )
  {
    dword_106C0EEC |= 1u;
    dword_106C0ED0 = (int)"tonemap_params_t";
    dword_106C0ED8 = 0;
    dword_106C0EDC = 0;
    dword_106C0EE0 = 0;
    dword_106C0EE4 = 0;
    dword_106C0EE8 = 0;
    dword_106C0ED4 = 16;
    atexit(sub_104736F0);
  }
  dword_1063EDAC = 0;
  dword_1063EDA4 = 5;
  dword_1063EDA0 = (int)&unk_1063F6B4;
  return &dword_1063EDA0;
}
