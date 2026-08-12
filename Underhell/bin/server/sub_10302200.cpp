int __thiscall sub_10302200(int *this)
{
  _BYTE *v2; // esi
  int (__thiscall *v3)(int); // edx
  int v4; // ecx
  int result; // eax

  v2 = (_BYTE *)this[906];
  if ( !v2 )
    return sub_10020040(this);
  v3 = *(int (__thiscall **)(int))(*(_DWORD *)v2 + 116);
  v4 = this[906];
  v2[8] = 1;
  result = v3(v4);
  if ( !v2[8] )
    return sub_10020040(this);
  return result;
}
