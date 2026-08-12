_BYTE *__cdecl sub_10227B70(_BYTE *a1, int a2)
{
  _BYTE *v2; // esi
  int v3; // edi

  v2 = a1;
  v3 = a2;
  AssertValidStringPtr(a1, a2);
  if ( !a1 )
    return 0;
  while ( 1 )
  {
    --v3;
    if ( !*v2 )
      break;
    *v2 = tolower((char)*v2);
    ++v2;
  }
  if ( v3 )
    v2[v3 - 1] = 0;
  return a1;
}
