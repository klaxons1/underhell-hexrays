_DWORD *__cdecl sub_100735D0(int a1)
{
  int v1; // eax
  int v2; // esi
  int v3; // ecx
  int v4; // eax
  int *v5; // eax

  v1 = dword_10607410;
  v2 = dword_10607410;
  if ( dword_10607410 + 1 > dword_10607408 )
  {
    sub_102ABFC0(dword_10607410 - dword_10607408 + 1);
    v1 = dword_10607410;
  }
  v3 = dword_10607404;
  dword_10607410 = v1 + 1;
  v4 = v1 - v2;
  dword_10607414 = dword_10607404;
  if ( v4 > 0 )
  {
    memcpy((void *)(dword_10607404 + 4 * v2 + 4), (const void *)(dword_10607404 + 4 * v2), 4 * v4);
    v3 = dword_10607404;
  }
  v5 = (int *)(v3 + 4 * v2);
  if ( v5 )
    *v5 = a1;
  return sub_100734E0(a1);
}
