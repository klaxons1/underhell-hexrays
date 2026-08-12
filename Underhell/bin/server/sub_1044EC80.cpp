BOOL __cdecl sub_1044EC80(float Src, float *a2)
{
  float v2; // esi
  float *v4; // edi
  double v5; // [esp-8h] [ebp-Ch]
  double _0; // [esp+0h] [ebp-4h]

  v2 = Src;
  if ( (*(_BYTE *)(LODWORD(Src) + 21) & 1) != 0 )
  {
    HIDWORD(v5) = a2 + 1;
    LODWORD(v5) = a2;
    return sub_1042E720(SLODWORD(Src), "%f %f", v5, _0) == 2 && !*(_BYTE *)(LODWORD(v2) + 20);
  }
  else
  {
    sub_10087780((_DWORD *)LODWORD(Src), (int *)&Src, (int)"%f");
    v4 = a2;
    *a2 = Src;
    sub_10087780((_DWORD *)LODWORD(v2), (int *)&Src, (int)"%f");
    v4[1] = Src;
    return *(_BYTE *)(LODWORD(v2) + 20) == 0;
  }
}
