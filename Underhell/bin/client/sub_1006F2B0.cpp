int __cdecl sub_1006F2B0(int *a1)
{
  const char *v1; // eax
  int result; // eax
  int v3; // ecx

  if ( *a1 >= 2 )
  {
    if ( !dword_104121D4 )
      Error("Test_ProxyToggle_EnsureValue: object doesn't exist on the client.");
  }
  else
  {
    Error("Test_ProxyToggle_EnsureValue: requires value parameter.");
  }
  v1 = Locale;
  if ( *a1 > 1 )
    v1 = (const char *)a1[259];
  result = atoi(v1);
  v3 = *(_DWORD *)(dword_104121D4 + 1192);
  if ( v3 != result )
    return Error("Test_ProxyToggle_EnsureValue: value (%d) doesn't match wanted value (%d).", v3, result);
  return result;
}
