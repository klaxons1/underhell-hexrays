int __thiscall sub_1023DDA0(_DWORD *this)
{
  unsigned int v1; // ecx
  int *v2; // eax
  unsigned int v3; // ecx
  int v4; // eax

  v1 = this[13];
  if ( v1 == -1 )
    return -1;
  v2 = &off_1061BE18[4 * (v1 & 0xFFF) + 1];
  v3 = v1 >> 12;
  if ( v2[1] != v3 || !*v2 )
    return -1;
  if ( v2[1] == v3 )
    v4 = *v2;
  else
    v4 = 0;
  return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(v4 + 24));
}
