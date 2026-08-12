int __thiscall sub_10164810(_DWORD *this, int a2)
{
  _BYTE *v2; // esi
  int (__thiscall *v3)(_BYTE *, int); // edx
  char v4; // bl
  int result; // eax
  char v6; // cl

  v2 = (_BYTE *)this[906];
  if ( !v2 )
    return sub_101722C0(a2);
  v3 = *(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)v2 + 156);
  v4 = v2[8];
  v2[8] = 1;
  result = v3(v2, a2);
  v6 = v2[8];
  v2[8] = v4;
  if ( !v6 )
    return sub_101722C0(a2);
  return result;
}
