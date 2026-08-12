void __cdecl sub_100B9C00(int a1)
{
  int v1; // esi
  _DWORD *v2; // eax
  int v3; // ecx
  int v4; // edx

  v1 = a1;
  while ( v1 )
  {
    v2 = (_DWORD *)(v1 + 40);
    v3 = v1;
    v1 = *(_DWORD *)(v1 + 40);
    if ( v1 )
      *(_DWORD *)(v1 + 44) = *(_DWORD *)(v3 + 44);
    v4 = *(_DWORD *)(v3 + 44);
    if ( v4 )
      *(_DWORD *)(v4 + 40) = *v2;
    sub_1042FBE0(v3);
  }
}
