int __cdecl sub_10063A80(int *a1)
{
  const char *v1; // eax
  int v2; // eax
  char *v4; // [esp-8h] [ebp-8h]

  if ( *a1 > 1 )
    v1 = (const char *)a1[259];
  else
    v1 = String;
  v4 = (char *)v1;
  v2 = sub_10153490();
  return sub_1010E550(v2, v4, 0x100000);
}
