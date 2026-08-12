int __thiscall sub_101C7650(unsigned __int16 *this, int a2, int a3)
{
  unsigned __int16 v3; // di
  int v4; // ebx
  int v5; // ecx
  int v6; // esi
  unsigned int v7; // eax
  unsigned __int16 v9; // [esp+Ch] [ebp-Ch]
  int v11; // [esp+14h] [ebp-4h]

  v3 = *(_WORD *)(dword_10638748 + 10 * *this);
  v4 = 0;
  v11 = 0;
  if ( v3 != 0xFFFF )
  {
    do
    {
      v5 = dword_1063873C[0];
      v6 = 12 * v3;
      v9 = *(_WORD *)(v6 + dword_1063873C[0] + 10);
      v7 = *(_DWORD *)(v6 + dword_1063873C[0]);
      if ( v7 != -1 )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(v6 + dword_1063873C[0]) & 0xFFF) + 2] == v7 >> 12
          && off_1061BE18[4 * (*(_DWORD *)(v6 + dword_1063873C[0]) & 0xFFF) + 1] )
        {
          *(_DWORD *)(a2 + 4 * v11) = *(_DWORD *)(v6 + dword_1063873C[0] + 4);
          v4 = v11 + 1;
          v11 = v4;
          if ( v4 >= a3 )
            return v4;
          goto LABEL_12;
        }
        v4 = v11;
      }
      if ( v3 < (unsigned __int16)word_1063876C && *(_WORD *)(v6 + dword_1063873C[0] + 8) != v3 )
      {
        sub_101C63C0(dword_1063873C, *this, v3);
        v5 = dword_1063873C[0];
      }
      *(_WORD *)(v6 + v5 + 10) = word_10638768;
      --word_1063876A;
      word_10638768 = v3;
LABEL_12:
      v3 = v9;
    }
    while ( v9 != 0xFFFF );
  }
  return v4;
}
