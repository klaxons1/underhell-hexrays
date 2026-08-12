int __thiscall sub_103023F0(_DWORD *this)
{
  _BYTE *v2; // esi
  int (__thiscall *v3)(_BYTE *); // edx
  char v4; // bl
  int result; // eax
  char v6; // cl

  v2 = (_BYTE *)this[906];
  if ( !v2 )
    return sub_100254E0(this);
  v3 = *(int (__thiscall **)(_BYTE *))(*(_DWORD *)v2 + 252);
  v4 = v2[8];
  v2[8] = 1;
  result = v3(v2);
  v6 = v2[8];
  v2[8] = v4;
  if ( !v6 )
    return sub_100254E0(this);
  return result;
}
