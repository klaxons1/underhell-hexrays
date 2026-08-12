int *sub_1012E9E0()
{
  if ( (dword_106AE654 & 1) == 0 )
  {
    dword_106AE654 |= 1u;
    dword_106AE638 = (int)"CEntityParticleTrail";
    dword_106AE640 = 0;
    dword_106AE644 = 0;
    dword_106AE648 = 0;
    dword_106AE64C = 0;
    dword_106AE650 = 0;
    dword_106AE63C = 20;
    atexit(sub_10470C80);
  }
  dword_1061E000 = (int)&dword_1060F348;
  dword_1061DFF8 = 3;
  dword_1061DFF4 = (int)asc_1061E10C;
  return &dword_1061DFF4;
}
