int __cdecl sub_1019EB30(int a1)
{
  int v1; // eax
  _DWORD *v2; // ecx
  int result; // eax

  v1 = dword_1063282C;
  if ( dword_1063282C == -1 )
    return 0;
  while ( 1 )
  {
    v2 = (_DWORD *)(dword_10632820 + 12 * v1);
    result = *v2;
    if ( *(_DWORD *)(*v2 + 16) == a1 )
      break;
    v1 = v2[2];
    if ( v1 == -1 )
      return 0;
  }
  return result;
}
