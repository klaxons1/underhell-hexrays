int __cdecl sub_1044EC20(float Src, float *a2)
{
  float v2; // esi
  int result; // eax
  double v4; // [esp-4h] [ebp-8h]

  v2 = Src;
  if ( (*(_BYTE *)(LODWORD(Src) + 21) & 1) != 0 )
  {
    LODWORD(v4) = a2;
    result = sub_1042E720(SLODWORD(Src), "%f", v4);
    if ( result != 1 || *(_BYTE *)(LODWORD(v2) + 20) )
      return 0;
  }
  else
  {
    sub_10087780((_DWORD *)LODWORD(Src), (int *)&Src, (int)"%f");
    *a2 = Src;
    return *(_BYTE *)(LODWORD(v2) + 20) == 0;
  }
  return result;
}
