int __cdecl sub_100D70E0(int *a1)
{
  int v1; // eax
  int v3; // eax
  char *v4; // [esp-4h] [ebp-4h]

  if ( *a1 > 1 )
  {
    v4 = (char *)a1[259];
    v3 = sub_10153490();
    return sub_100D6A10(v3, v4);
  }
  else
  {
    v1 = sub_10153490();
    return sub_100D6A10(v1, (char *)String);
  }
}
