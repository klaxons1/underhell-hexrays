void *__cdecl sub_10229080(int a1, int a2, int a3)
{
  int v3; // ebx
  void *result; // eax

  v3 = *(_DWORD *)(a2 + a1 + 12);
  if ( v3 < a3 )
  {
    sub_10227650((int *)(a2 + a1), a3);
    return memset((void *)(*(_DWORD *)(a2 + a1) + 4 * v3), 0, 4 * (a3 - v3));
  }
  return result;
}
