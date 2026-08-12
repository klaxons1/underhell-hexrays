int __cdecl sub_10016340(int a1, int a2)
{
  int result; // eax
  double v3; // st7
  float v4; // [esp+8h] [ebp+8h]

  result = a2;
  v3 = *(float *)(a1 + 4) * 0.1;
  v4 = v3;
  if ( *(_DWORD *)(a2 + 1332) != LODWORD(v4) )
    *(float *)(a2 + 1332) = v3;
  return result;
}
