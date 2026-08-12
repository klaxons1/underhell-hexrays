int __cdecl sub_1012C930(void *a1, int a2)
{
  int v2; // esi

  v2 = dword_1061BE34;
  if ( a2 < dword_1061BE34 )
    v2 = a2;
  memcpy_0(a1, Src, 4 * v2);
  return v2;
}
