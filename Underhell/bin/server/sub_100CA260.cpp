int __thiscall sub_100CA260(int this, unsigned __int8 *a2, unsigned __int16 *a3, _BYTE *a4)
{
  unsigned __int16 v5; // di
  int result; // eax
  int v7; // esi
  int v8; // eax

  v5 = *(_WORD *)(this + 16);
  result = 0xFFFF;
  *a3 = -1;
  *a4 = 0;
  while ( v5 != 0xFFFF )
  {
    *a3 = v5;
    v7 = 24 * v5;
    if ( sub_100C76F0(a2, (unsigned __int8 *)(v7 + *(_DWORD *)(this + 4) + 8)) )
    {
      *a4 = 1;
      if ( (dword_10696910 & 1) == 0 )
      {
        dword_10696910 |= 1u;
        dword_10696908 = -1;
        dword_1069690C = 0x1FFFF;
      }
      v8 = *(_DWORD *)(this + 4);
      v5 = *(_WORD *)(v8 + 24 * v5);
      result = v7 + v8;
    }
    else
    {
      *a4 = 0;
      if ( (dword_10696910 & 1) == 0 )
      {
        dword_10696910 |= 1u;
        dword_10696908 = -1;
        dword_1069690C = 0x1FFFF;
      }
      result = v7 + *(_DWORD *)(this + 4);
      v5 = *(_WORD *)(result + 2);
    }
  }
  return result;
}
