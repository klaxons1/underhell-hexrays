int __thiscall sub_1001E620(_DWORD *this, _DWORD *a2)
{
  _BYTE *v3; // esi
  int (__thiscall *v4)(_BYTE *, _DWORD *); // edx
  int result; // eax

  if ( *a2 == 74 )
    return (*(int (__thiscall **)(_DWORD *, _DWORD *))(*this + 2232))(this, a2);
  v3 = (_BYTE *)this[906];
  if ( !v3 )
    return sub_10046510((int)this, (char)a2);
  v4 = *(int (__thiscall **)(_BYTE *, _DWORD *))(*(_DWORD *)v3 + 108);
  v3[8] = 1;
  result = v4(v3, a2);
  if ( !v3[8] )
    return sub_10046510((int)this, (char)a2);
  return result;
}
