void sub_1019CCA0()
{
  int v0; // eax
  int v1; // ecx
  int v2; // eax

  dword_10632748 = 1;
  if ( dword_106B8370 )
  {
    v0 = *(_DWORD *)(dword_106B8370 + 1212);
    if ( v0 != -1 )
    {
      v1 = *(_DWORD *)(dword_106B8370 + 1200);
      do
      {
        v2 = 12 * v0;
        *(_DWORD *)(*(_DWORD *)(v2 + v1) + 68) = dword_10632748++;
        v1 = *(_DWORD *)(dword_106B8370 + 1200);
        v0 = *(_DWORD *)(v2 + v1 + 8);
      }
      while ( v0 != -1 );
    }
  }
}
