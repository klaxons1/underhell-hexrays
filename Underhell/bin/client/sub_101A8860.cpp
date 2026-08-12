_DWORD *__cdecl sub_101A8860(int a1)
{
  int v1; // eax
  int v2; // esi
  int v3; // ecx
  int v4; // eax
  _DWORD *result; // eax

  v1 = dword_1044CAC8;
  v2 = dword_1044CAC8;
  if ( dword_1044CAC8 + 1 > dword_1044CAC0 )
  {
    sub_1010AFF0(&dword_1044CABC, dword_1044CAC8 - dword_1044CAC0 + 1);
    v1 = dword_1044CAC8;
  }
  v3 = dword_1044CABC;
  dword_1044CAC8 = v1 + 1;
  v4 = v1 - v2;
  dword_1044CACC = dword_1044CABC;
  if ( v4 > 0 )
  {
    memcpy((void *)(dword_1044CABC + 4 * v2 + 4), (const void *)(dword_1044CABC + 4 * v2), 4 * v4);
    v3 = dword_1044CABC;
  }
  result = (_DWORD *)(v3 + 4 * v2);
  if ( result )
    *result = a1;
  return result;
}
