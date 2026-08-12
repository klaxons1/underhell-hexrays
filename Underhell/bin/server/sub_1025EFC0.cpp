__int16 __cdecl sub_1025EFC0(int a1, _BYTE *a2, float a3, float a4, __int16 a5)
{
  int v5; // eax
  int v6; // eax
  __int16 result; // ax

  v5 = (int)(a3 * 512.0);
  if ( v5 >= 0 )
  {
    if ( v5 > 0xFFFF )
      LOWORD(v5) = -1;
  }
  else
  {
    LOWORD(v5) = 0;
  }
  *(_WORD *)a1 = v5;
  v6 = (int)(512.0 * a4);
  if ( v6 >= 0 )
  {
    if ( v6 > 0xFFFF )
      LOWORD(v6) = -1;
  }
  else
  {
    LOWORD(v6) = 0;
  }
  *(_WORD *)(a1 + 2) = v6;
  *(_BYTE *)(a1 + 6) = *a2;
  *(_BYTE *)(a1 + 7) = a2[1];
  *(_BYTE *)(a1 + 8) = a2[2];
  result = a5;
  *(_BYTE *)(a1 + 9) = a2[3];
  *(_WORD *)(a1 + 4) = a5;
  return result;
}
