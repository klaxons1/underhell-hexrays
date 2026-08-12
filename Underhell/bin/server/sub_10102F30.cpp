unsigned int __cdecl sub_10102F30(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // ebx
  unsigned int result; // eax
  int v9; // edi
  _BYTE v10[48]; // [esp+8h] [ebp-30h] BYREF

  v7 = 1 << (a5 & 0x1F);
  result = (unsigned int)a5 >> 5;
  if ( (v7 & *(_DWORD *)(a7 + 4 * ((unsigned int)a5 >> 5))) == 0 )
  {
    sub_10425290(a4 + 16 * a5, a3 + 12 * a5, v10);
    v9 = *(_DWORD *)(*(_DWORD *)(a1 + 64) + 4 * a5);
    if ( v9 == -1 )
    {
      result = sub_10421E30(a2, v10, a6 + 48 * a5);
    }
    else
    {
      sub_10102F30(a1, a2, a3, a4, v9, a6, a7);
      result = sub_10421E30(a6 + 48 * v9, v10, a6 + 48 * a5);
    }
    *(_DWORD *)(a7 + 4 * (a5 >> 5)) |= v7;
  }
  return result;
}
