int __cdecl CompareFunction(_DWORD *a1, _DWORD *a2)
{
  int v2; // eax
  int v3; // ecx
  const char *v4; // eax
  int v5; // esi
  const char *v6; // eax
  int v7; // eax

  v2 = a1[1];
  v3 = a2[1];
  if ( v2 != v3 )
    return 2 * (v2 > v3) - 1;
  if ( !dword_106B6618 )
    return 0;
  if ( *a1 )
  {
    v4 = *(const char **)(*a1 + 92);
    if ( !v4 )
      v4 = String;
    v5 = sub_10244B60(v4);
  }
  else
  {
    v5 = -1;
  }
  if ( *a2 )
  {
    v6 = *(const char **)(*a2 + 92);
    if ( !v6 )
      v6 = String;
    v7 = sub_10244B60(v6);
  }
  else
  {
    v7 = -1;
  }
  if ( v7 > v5 )
    return 1;
  if ( v7 < v5 )
    return -1;
  else
    return 0;
}
