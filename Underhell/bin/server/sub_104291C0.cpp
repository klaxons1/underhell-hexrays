int __cdecl sub_104291C0(_BYTE *a1, _BYTE *a2, int a3)
{
  int v3; // esi
  _BYTE *v4; // edi
  _BYTE *v5; // ebx

  v3 = a3;
  v4 = a1;
  AssertValidStringPtr(a1, a3);
  v5 = a2;
  AssertValidStringPtr(a2, a3);
  if ( a3 <= 0 )
    return 0;
  while ( 1 )
  {
    --v3;
    if ( *v4 != *v5 )
      break;
    if ( *v4 )
    {
      ++v4;
      ++v5;
      if ( v3 > 0 )
        continue;
    }
    return 0;
  }
  return 2 * (*v4 >= *v5) - 1;
}
