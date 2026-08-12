int __thiscall sub_100F98F0(__int16 *this, int a2, int a3)
{
  int v3; // edi
  int v4; // ebx
  int v5; // ecx
  int v6; // esi
  unsigned int v7; // eax
  unsigned __int16 v9; // [esp+Ch] [ebp-Ch]
  int v11; // [esp+14h] [ebp-4h]

  v3 = *(unsigned __int16 *)(dword_103E1B58 + 10 * (unsigned __int16)*this);
  v4 = 0;
  v11 = 0;
  if ( (_WORD)v3 != 0xFFFF )
  {
    do
    {
      v5 = dword_103E1B4C;
      v6 = 12 * (unsigned __int16)v3;
      v9 = *(_WORD *)(v6 + dword_103E1B4C + 10);
      v7 = *(_DWORD *)(v6 + dword_103E1B4C);
      if ( v7 != -1 )
      {
        if ( *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v6 + dword_103E1B4C) & 0xFFF) + 2) == v7 >> 12
          && *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v6 + dword_103E1B4C) & 0xFFF) + 1) )
        {
          *(_DWORD *)(a2 + 4 * v11) = *(_DWORD *)(v6 + dword_103E1B4C + 4);
          v4 = v11 + 1;
          v11 = v4;
          if ( v4 >= a3 )
            return v4;
          goto LABEL_12;
        }
        v4 = v11;
      }
      if ( (unsigned __int16)v3 < (unsigned __int16)word_103E1B7C && *(_WORD *)(v6 + dword_103E1B4C + 8) != (_WORD)v3 )
      {
        sub_1022D600(*this, v3);
        v5 = dword_103E1B4C;
      }
      *(_WORD *)(v6 + v5 + 10) = word_103E1B78;
      --word_103E1B7A;
      word_103E1B78 = v3;
LABEL_12:
      v3 = v9;
    }
    while ( v9 != 0xFFFF );
  }
  return v4;
}
