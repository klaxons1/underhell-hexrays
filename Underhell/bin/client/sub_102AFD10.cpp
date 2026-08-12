BOOL __cdecl sub_102AFD10(float Src, float *a2)
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
    return sub_1022F5B0(SLODWORD(Src), "%f %f", v5, _0) == 2 && !*(_BYTE *)(LODWORD(v2) + 20);
  }
  else
  {
    sub_1011C490((_DWORD *)LODWORD(Src), (int *)&Src, "%f");
    v4 = a2;
    *a2 = Src;
    sub_1011C490((_DWORD *)LODWORD(v2), (int *)&Src, "%f");
    v4[1] = Src;
    return *(_BYTE *)(LODWORD(v2) + 20) == 0;
  }
}
