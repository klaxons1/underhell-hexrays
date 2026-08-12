char __stdcall sub_10108EB0(int a1)
{
  _BYTE *v1; // eax
  _BYTE *v2; // esi
  int v3; // ebx
  _DWORD *v4; // edi
  unsigned int v5; // eax
  int v6; // esi
  unsigned int v7; // eax
  _BYTE *i; // [esp+8h] [ebp-4h]

  v1 = (_BYTE *)((int (__thiscall *)(int (__stdcall ***)(int)))(*off_103D89CC)[1])(off_103D89CC);
  v2 = v1;
  v3 = 0;
  for ( i = v1; v3 < (int)v2; ++v3 )
  {
    v1 = (_BYTE *)((int (__thiscall *)(int (__stdcall ***)(int), int))**off_103D89CC)(off_103D89CC, v3);
    v4 = v1;
    if ( v1 )
    {
      LOBYTE(v1) = sub_10034D10(v1);
      if ( (_BYTE)v1 )
      {
        v4[78] |= 0x3800u;
        v5 = v4[82];
        if ( v5 == -1 || *((_DWORD *)off_103DCD74 + 4 * (v4[82] & 0xFFF) + 2) != v5 >> 12 )
          v6 = 0;
        else
          v6 = *((_DWORD *)off_103DCD74 + 4 * (v4[82] & 0xFFF) + 1);
        while ( v6 )
        {
          sub_10108E20(v6, 14336, 0);
          v7 = *(_DWORD *)(v6 + 332);
          if ( v7 == -1 || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v6 + 332) & 0xFFF) + 2) != v7 >> 12 )
            v6 = 0;
          else
            v6 = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v6 + 332) & 0xFFF) + 1);
        }
        LOBYTE(v1) = sub_100351D0(v4, (char)"StorePredictionResults", a1, 0);
        v2 = i;
      }
    }
  }
  return (char)v1;
}
