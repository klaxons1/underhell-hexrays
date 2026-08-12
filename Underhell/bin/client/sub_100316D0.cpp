void *__cdecl sub_100316D0(int a1, int a2, int a3)
{
  int v3; // esi
  void *result; // eax

  v3 = *(_DWORD *)(a2 + a1 + 12);
  if ( v3 < a3 )
  {
    sub_10031080((int *)(a2 + a1), a3);
    return memset((void *)(*(_DWORD *)(a2 + a1) + 32 * v3), 0, 32 * (a3 - v3));
  }
  return result;
}
