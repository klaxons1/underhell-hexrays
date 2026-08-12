char __thiscall sub_100411C0(_WORD *this, int a2, int a3)
{
  int v3; // edi
  int i; // esi
  _DWORD *v5; // eax
  int v6; // ecx
  char *v7; // ecx

  v3 = 0;
  for ( i = a2 + 68; ; i += 84 )
  {
    *(_BYTE *)(i + 8) = 0;
    *(float *)(i + 12) = 0.0;
    if ( !*(_BYTE *)(i - 3) )
    {
      *(_BYTE *)(i - 3) = 1;
      *(_DWORD *)i = sub_10041030(dword_10406FF8, this, (char *)(i - 68), 0);
    }
    v5 = *(_DWORD **)i;
    *(_DWORD *)(i + 4) = 0;
    if ( v5 )
    {
      if ( a3 < 0 || a3 >= v5[22] || (v6 = *(_DWORD *)((char *)&v5[a3] + v5[23]), v6 == -1) )
        v7 = 0;
      else
        v7 = (char *)&v5[6 * v6] + v5[20];
      *(_DWORD *)(i + 4) = v7;
    }
    if ( *(_BYTE *)(i - 4) && (!v5 || !*(_DWORD *)(i + 4)) )
      break;
    if ( *(_DWORD *)(i + 4) )
      *(_BYTE *)(i + 8) = 1;
    if ( ++v3 >= 3 )
      return 0;
  }
  return 1;
}
