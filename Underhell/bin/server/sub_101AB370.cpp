void __cdecl sub_101AB370(int *a1)
{
  int v1; // eax
  int v2; // eax
  char *v3; // [esp-8h] [ebp-8h]

  if ( *a1 > 1 )
  {
    v3 = (char *)a1[259];
    v2 = sub_10153490();
    sub_101AB260(v2, v3);
  }
  else
  {
    v1 = sub_10153490();
    sub_101AB260(v1, (char *)String);
  }
}
