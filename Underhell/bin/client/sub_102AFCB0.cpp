int __cdecl sub_102AFCB0(float Src, float *a2)
{
  float v2; // esi
  int result; // eax
  double v4; // [esp-4h] [ebp-8h]

  v2 = Src;
  if ( (*(_BYTE *)(LODWORD(Src) + 21) & 1) != 0 )
  {
    LODWORD(v4) = a2;
    result = sub_1022F5B0(SLODWORD(Src), "%f", v4);
    if ( result != 1 || *(_BYTE *)(LODWORD(v2) + 20) )
      return 0;
  }
  else
  {
    sub_1011C490((_DWORD *)LODWORD(Src), (int *)&Src, "%f");
    *a2 = Src;
    return *(_BYTE *)(LODWORD(v2) + 20) == 0;
  }
  return result;
}
