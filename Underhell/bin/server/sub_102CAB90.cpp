char __thiscall sub_102CAB90(_DWORD *this)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx
  int v6; // eax
  void *v7; // esi
  int v8; // [esp+4h] [ebp-4h] BYREF

  v2 = this[230];
  if ( v2 == -1 )
    return 1;
  v3 = &off_1061BE18[4 * (v2 & 0xFFF) + 1];
  v4 = v2 >> 12;
  if ( v3[1] != v4 || !*v3 )
    return 1;
  if ( v3[1] == v4 )
    v6 = *v3;
  else
    v6 = 0;
  v7 = (void *)sub_100D7680(v6);
  if ( !v7 || !(*(unsigned __int8 (__thiscall **)(void *, _DWORD))(*(_DWORD *)v7 + 1528))(v7, 0) )
    return 0;
  if ( sub_102C9AB0(v7, &v8) )
    sub_1029CCC0(v8);
  this[230] = -1;
  return 1;
}
