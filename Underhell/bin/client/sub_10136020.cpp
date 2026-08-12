int __cdecl sub_10136020(int a1)
{
  const char *v1; // esi
  const char *v2; // edi
  float v4[3]; // [esp+24h] [ebp-18h] BYREF
  float v5[3]; // [esp+30h] [ebp-Ch] BYREF

  sub_10135F40(a1, v5, v4);
  v1 = "setpos";
  v2 = "setang";
  if ( *(_DWORD *)a1 == 2 && atoi(*(const char **)(a1 + 1036)) == 2 )
  {
    v1 = "setpos_exact";
    v2 = "setang_exact";
  }
  Warning("%s %f %f %f;", v1, v5[0], v5[1], v5[2]);
  return Warning("%s %f %f %f\n", v2, v4[0], v4[1], v4[2]);
}
