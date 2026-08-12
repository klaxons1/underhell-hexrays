char __stdcall sub_102F41C0(_DWORD *a1)
{
  char *v1; // eax
  char result; // al

  v1 = (char *)dword_106E2780;
  if ( a1[23] == dword_106E2780 )
    return sub_10394440(a1);
  if ( !dword_106E2780 )
    v1 = (char *)String;
  result = sub_100D6240(a1, v1);
  if ( result )
    return sub_10394440(a1);
  return result;
}
