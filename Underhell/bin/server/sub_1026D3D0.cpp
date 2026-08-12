int *sub_1026D3D0()
{
  if ( (dword_106CEE84 & 1) == 0 )
  {
    dword_106CEE84 |= 1u;
    dword_106CEE68 = (int)"vehicle_crashsound_t";
    dword_106CEE70 = 0;
    dword_106CEE74 = 0;
    dword_106CEE78 = 0;
    dword_106CEE7C = 0;
    dword_106CEE80 = 0;
    dword_106CEE6C = 20;
    atexit(sub_10474AC0);
  }
  dword_1065495C = 0;
  dword_10654954 = 4;
  dword_10654950 = (int)&unk_10654CBC;
  return &dword_10654950;
}
