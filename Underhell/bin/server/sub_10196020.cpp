int sub_10196020()
{
  int result; // eax
  char v1; // dl
  char v2; // bl
  _DWORD *v3; // ecx

  result = dword_10632630;
  v1 = 0;
  v2 = 0;
  if ( dword_10632630 == -1 )
    return Warning("The nav mesh needs a full nav_analyze\n");
  do
  {
    v3 = (_DWORD *)(dword_10632624 + 12 * result);
    if ( *(_BYTE *)(*v3 + 476) )
      v1 = 1;
    if ( *(_DWORD *)(*v3 + 144) )
      v2 = 1;
    result = v3[2];
  }
  while ( result != -1 );
  if ( !v1 || !v2 )
    return Warning("The nav mesh needs a full nav_analyze\n");
  return result;
}
