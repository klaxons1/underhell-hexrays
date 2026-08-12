char __cdecl sub_10217AC0(int *a1)
{
  int v1; // edi
  _DWORD *i; // esi

  v1 = 0;
  if ( *a1 <= 0 )
    return 1;
  for ( i = a1 + 6; !*i || (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)*i + 8))(*i); i += 6 )
  {
    if ( ++v1 >= *a1 )
      return 1;
  }
  return 0;
}
