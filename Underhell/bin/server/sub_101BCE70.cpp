unsigned int __thiscall sub_101BCE70(_DWORD *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  _DWORD *v4; // ecx
  int v5; // edi

  v2 = this[103];
  if ( v2 == -1 )
    return sub_100DA1F0(this);
  v3 = &off_1061BE18[4 * (this[103] & 0xFFF) + 1];
  if ( v3[1] != v2 >> 12 )
    return sub_100DA1F0(this);
  v4 = (_DWORD *)*v3;
  if ( !v4 || !v4[24] )
    return sub_100DA1F0(this);
  v5 = (*(int (__thiscall **)(_DWORD *))(*v4 + 144))(v4);
  return (v5 | sub_100DA1F0(this)) & 0xFFFFFFFD;
}
