char __thiscall sub_101E99A0(_DWORD *this)
{
  unsigned int v1; // eax
  _DWORD *v2; // esi
  int *v3; // edx
  unsigned int v4; // eax
  int v5; // eax
  _DWORD *v6; // eax
  int *v8; // ecx

  v1 = this[851];
  v2 = this + 851;
  if ( v1 == -1 )
    return 0;
  v3 = &off_1061BE18[4 * (this[851] & 0xFFF) + 1];
  v4 = v1 >> 12;
  if ( off_1061BE18[4 * (this[851] & 0xFFF) + 2] != v4 || !*v3 )
    return 0;
  if ( off_1061BE18[4 * (this[851] & 0xFFF) + 2] == v4 )
    v5 = *v3;
  else
    v5 = 0;
  (*(void (__thiscall **)(int, _DWORD *, _DWORD *, _DWORD, _DWORD))(*(_DWORD *)v5 + 372))(v5, this, this, 0, 0.0);
  if ( *v2 != -1 && off_1061BE18[4 * (*v2 & 0xFFF) + 2] == *v2 >> 12 && off_1061BE18[4 * (*v2 & 0xFFF) + 1] )
  {
    v6 = v2 - 851;
    if ( *((_BYTE *)v2 - 3320) )
    {
      *((_BYTE *)v6 + 88) |= 1u;
      *v2 = -1;
      return 1;
    }
    v8 = (int *)v6[6];
    if ( v8 )
      sub_100194B0(v8, 3404);
    *v2 = -1;
  }
  return 1;
}
