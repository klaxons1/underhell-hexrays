int __cdecl sub_100D7200(int *a1)
{
  const char *v1; // eax
  int result; // eax

  if ( *a1 > 1 )
    v1 = (const char *)a1[259];
  else
    v1 = String;
  result = atoi(v1);
  if ( result <= 0 )
    result = 1;
  dword_1060F304 = result;
  return result;
}
