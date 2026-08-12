int __cdecl sub_101B59D0(_DWORD *a1)
{
  _DWORD *v1; // esi
  const char *v2; // edx
  const char *v3; // eax

  v1 = a1;
  v2 = (const char *)a1[65];
  if ( !v2 )
    v2 = String;
  if ( !strlen(v2) )
  {
    v2 = *(const char **)(*(int (__thiscall **)(_DWORD *, _DWORD **))(*a1 + 28))(a1, &a1);
    if ( !v2 )
      v2 = String;
  }
  v3 = (const char *)v1[23];
  if ( !v3 )
    v3 = String;
  return Msg("%s - %s\n", v3, v2);
}
