unsigned int __thiscall sub_10016810(int *this)
{
  unsigned int result; // eax
  _DWORD *v3; // ecx
  _DWORD *v4; // esi
  int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // ecx

  result = this[281];
  if ( result == -1 )
    goto LABEL_12;
  v3 = (_DWORD *)((char *)off_103DCD74 + 16 * (this[281] & 0xFFF) + 4);
  result >>= 12;
  if ( v3[1] != result || !*v3 )
    goto LABEL_12;
  if ( v3[1] != result )
  {
    v4 = 0;
    goto LABEL_8;
  }
  v4 = (_DWORD *)*v3;
  if ( !*v3 )
  {
LABEL_8:
    v5 = -1;
    goto LABEL_9;
  }
  v5 = *(_DWORD *)(*(int (__thiscall **)(_DWORD))(*v4 + 8))(*v3);
LABEL_9:
  if ( this[307] != v5 )
    this[307] = v5;
  sub_10038390(v4);
  result = sub_10015BC0(this);
  v4[78] |= 0x80u;
LABEL_12:
  v6 = this[339];
  if ( v6 != -1 )
  {
    result = (unsigned int)off_103DCD74 + 16 * (this[339] & 0xFFF) + 4;
    v7 = v6 >> 12;
    if ( *((_DWORD *)off_103DCD74 + 4 * (this[339] & 0xFFF) + 2) == v7 )
    {
      if ( *(_DWORD *)result )
      {
        if ( *((_DWORD *)off_103DCD74 + 4 * (this[339] & 0xFFF) + 2) == v7 )
          return sub_10016100(this, *(_DWORD **)result);
        else
          return sub_10016100(this, 0);
      }
    }
  }
  return result;
}
