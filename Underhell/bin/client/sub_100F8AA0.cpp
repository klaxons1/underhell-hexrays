unsigned int __thiscall sub_100F8AA0(_DWORD *this, _BYTE *a2)
{
  unsigned int result; // eax
  _BYTE *v4; // ecx
  int v5; // ebx

  result = this[122];
  if ( result == -1 || *((_DWORD *)off_103DCD74 + 4 * (this[122] & 0xFFF) + 2) != this[122] >> 12 )
    v4 = 0;
  else
    v4 = (_BYTE *)*((_DWORD *)off_103DCD74 + 4 * (this[122] & 0xFFF) + 1);
  if ( v4 != a2 )
  {
    if ( result == -1 || *((_DWORD *)off_103DCD74 + 4 * (result & 0xFFF) + 2) != result >> 12 )
      v5 = 0;
    else
      v5 = *((_DWORD *)off_103DCD74 + 4 * (result & 0xFFF) + 1);
    if ( a2 )
      this[122] = *(_DWORD *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 8))(a2);
    else
      this[122] = -1;
    if ( v5 )
    {
      if ( !a2 )
      {
        sub_100F8800((int)this, v5);
        return sub_1000DEC0(this, 1);
      }
    }
    else if ( a2 )
    {
      goto LABEL_16;
    }
    sub_100F8800((int)this, v5);
LABEL_16:
    sub_100F7DF0(a2, this);
    if ( a2 )
      return sub_1000DEB0(this, 1);
    return sub_1000DEC0(this, 1);
  }
  return result;
}
