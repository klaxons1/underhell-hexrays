int __cdecl sub_100B9A80(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // esi
  int v3; // eax
  bool v4; // zf
  int v5; // eax
  int v6; // edi
  int v7; // eax
  int v8; // ecx
  int result; // eax
  int v10; // edi
  int v11; // edx
  int v12; // ecx
  int v13; // ecx

  v2 = a1;
  v3 = (int)(a1 + 10);
  if ( a1[10] )
  {
    do
    {
      v2 = *(_DWORD **)v3;
      v4 = *(_DWORD *)(*(_DWORD *)v3 + 40) == 0;
      v3 = *(_DWORD *)v3 + 40;
    }
    while ( !v4 );
  }
  v5 = v2[4];
  v2[8] &= ~8u;
  if ( v5 == -1 || v5 != a2[4] )
  {
    v11 = v2[10];
    result = (int)(v2 + 10);
    if ( v11 )
      *(_DWORD *)(v11 + 44) = 0;
    *(_DWORD *)result = a2;
    if ( a2 )
    {
      v12 = a2[11];
      if ( v12 )
        *(_DWORD *)(v12 + 40) = 0;
      *(_DWORD *)(*(_DWORD *)result + 44) = v2;
    }
  }
  else
  {
    v6 = a2[10];
    if ( v6 )
      *(_DWORD *)(v6 + 44) = a2[11];
    v7 = a2[11];
    if ( v7 )
      *(_DWORD *)(v7 + 40) = a2[10];
    sub_1042FBE0(a2);
    v8 = v2[10];
    result = (int)(v2 + 10);
    if ( v8 )
      *(_DWORD *)(v8 + 44) = 0;
    *(_DWORD *)result = v6;
    if ( v6 )
    {
      v10 = *(_DWORD *)(v6 + 44);
      if ( v10 )
        *(_DWORD *)(v10 + 40) = 0;
      *(_DWORD *)(*(_DWORD *)result + 44) = v2;
    }
  }
  if ( *(_DWORD *)result )
  {
    do
    {
      v13 = *(_DWORD *)result;
      v4 = *(_DWORD *)(*(_DWORD *)result + 40) == 0;
      result = *(_DWORD *)result + 40;
    }
    while ( !v4 );
    *(_DWORD *)(v13 + 32) |= 8u;
  }
  else
  {
    v2[8] |= 8u;
  }
  return result;
}
