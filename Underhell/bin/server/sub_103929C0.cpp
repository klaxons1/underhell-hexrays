char __thiscall sub_103929C0(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  int v3; // eax
  char result; // al

  v2 = this;
  if ( *a2 != 78 )
    return sub_10092900(this, a2);
  v3 = sub_10039AE0(this, 367, 0);
  if ( v2[595] == 66 || v3 == -1 )
  {
    this = v2;
    return sub_10092900(this, a2);
  }
  result = sub_100C4E90(v2, v3);
  if ( !result )
  {
    if ( v2 != (_DWORD *)-2760 )
      sub_100B8C80((_BYTE *)v2 + 2760, 0);
    return sub_10027CD0(v2, 0);
  }
  return result;
}
