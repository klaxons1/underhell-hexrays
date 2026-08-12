int __cdecl sub_101F2960(float a1)
{
  int v1; // eax

  v1 = (int)(a1 * 1023.0);
  if ( v1 < 0 )
    return dword_1045AA78[0];
  if ( v1 > 1023 )
    v1 = 1023;
  return dword_1045AA78[v1];
}
