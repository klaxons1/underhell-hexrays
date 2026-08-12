int __cdecl sub_100D7120(int *a1)
{
  int v1; // eax
  int v3; // eax
  char *v4; // [esp-8h] [ebp-8h]

  if ( *a1 > 1 )
  {
    v4 = (char *)a1[259];
    v3 = sub_10153490();
    return sub_1010E550(v3, v4, 16);
  }
  else
  {
    v1 = sub_10153490();
    return sub_1010E550(v1, (char *)String, 16);
  }
}
