int __cdecl sub_10100080(int a1)
{
  int *v1; // ecx
  int v2; // ecx
  int v3; // esi
  int v4; // eax
  int i; // edx

  v2 = *v1;
  v3 = *(_DWORD *)(v2 + 164);
  v4 = 0;
  if ( v3 <= 0 )
    return 0;
  for ( i = 0; *(_DWORD *)(i + *(_DWORD *)(v2 + 168) + v2 + 20) != a1; i += 56 )
  {
    if ( ++v4 >= v3 )
      return 0;
  }
  return v2 + *(_DWORD *)(v2 + 168) + 56 * v4;
}
