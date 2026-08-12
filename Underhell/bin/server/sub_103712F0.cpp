int __thiscall sub_103712F0(_DWORD *this)
{
  _DWORD *v2; // ecx
  int v3; // eax
  int v5; // edi
  int v6; // [esp+4h] [ebp-4h] BYREF

  v2 = (_DWORD *)this[699];
  if ( !v2 )
    return 1;
  v3 = sub_100B1560(v2, &v6, 1);
  if ( !v3 )
    return 1;
  v5 = 0;
  do
  {
    if ( *(_DWORD *)(v3 + 92) == this[23] )
      ++v5;
    v3 = sub_100B1630((_DWORD *)this[699], &v6, 1);
  }
  while ( v3 );
  return v5;
}
