char __thiscall sub_103966C0(_DWORD *this, int a2)
{
  int v2; // eax
  _BYTE *v3; // esi
  int (__thiscall *v4)(_BYTE *, int); // edx
  char v5; // bl
  char result; // al
  char v7; // cl

  v2 = *(__int16 *)(a2 + 816);
  if ( v2 > 902 )
  {
    if ( (unsigned int)(v2 - 950) > 1 )
      goto LABEL_4;
    return 1;
  }
  if ( v2 == 902 || v2 == 14 )
    return 1;
LABEL_4:
  v3 = (_BYTE *)this[906];
  if ( !v3 )
    return sub_101722C0(a2);
  v4 = *(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)v3 + 156);
  v5 = v3[8];
  v3[8] = 1;
  result = v4(v3, a2);
  v7 = v3[8];
  v3[8] = v5;
  if ( !v7 )
    return sub_101722C0(a2);
  return result;
}
