bool __cdecl sub_1024C950(int *a1)
{
  const char *v1; // eax
  bool result; // al

  if ( *a1 < 2 )
    Error("Test_ProxyToggle_EnableProxy: requires parameter (0 or 1).");
  v1 = String;
  if ( *a1 > 1 )
    v1 = (const char *)a1[259];
  result = atoi(v1) != 0;
  byte_1064FE90 = result;
  return result;
}
