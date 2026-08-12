int *sub_10282C20()
{
  if ( (dword_106D27A8 & 1) == 0 )
  {
    dword_106D27A8 |= 1u;
    dword_106D278C = (int)"ParticleSmokeGrenade";
    dword_106D2794 = 0;
    dword_106D2798 = 0;
    dword_106D279C = 0;
    dword_106D27A0 = 0;
    dword_106D27A4 = 0;
    dword_106D2790 = 20;
    atexit(sub_104755A0);
  }
  dword_1065A6AC = (int)&dword_1060F348;
  dword_1065A6A4 = 4;
  dword_1065A6A0 = (int)asc_1065A754;
  return &dword_1065A6A0;
}
