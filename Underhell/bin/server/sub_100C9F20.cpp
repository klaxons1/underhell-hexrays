int __cdecl sub_100C9F20(int a1, int a2, float a3, int a4, int a5)
{
  int result; // eax
  double v6; // st7
  unsigned int v7; // eax
  int v8; // eax

  result = (*(int (__stdcall **)(int, int, _DWORD, int, int))(*(_DWORD *)dword_106B3CDC + 248))(
             a1,
             a2,
             LODWORD(a3),
             a4,
             a5);
  if ( (*(_BYTE *)(a1 + 64) & 0x40) != 0 )
  {
    v6 = a3 * 1.5;
    if ( v6 < 128.0 )
      v6 = 128.0;
    v7 = *(_DWORD *)(a1 + 40);
    if ( v7 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 40) & 0xFFF) + 2] != v7 >> 12 )
      v8 = 0;
    else
      v8 = off_1061BE18[4 * (*(_DWORD *)(a1 + 40) & 0xFFF) + 1];
    return sub_1023D4B0(33554433, a2, (int)v6, 0.25, v8, 0, 0);
  }
  return result;
}
