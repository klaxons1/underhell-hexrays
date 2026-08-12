void sub_101A0A80()
{
  float **v0; // esi

  if ( dword_1063288C != -1 )
  {
    v0 = (float **)&dword_106B8C60;
    do
    {
      if ( *((_BYTE *)*v0 + 37) )
        sub_1011BC50(
          *v0,
          *v0 + 3,
          *((_DWORD *)*v0 + 6),
          *((_DWORD *)*v0 + 7),
          *((_DWORD *)*v0 + 8),
          *((unsigned __int8 *)*v0 + 36),
          0.0);
      ++v0;
    }
    while ( (int)v0 < (int)&unk_106B8CB0 );
  }
}
