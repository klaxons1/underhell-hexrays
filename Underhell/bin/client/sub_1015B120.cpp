int __thiscall sub_1015B120(_DWORD *this)
{
  _DWORD *v2; // esi

  if ( !this[484] && (*(int (__thiscall **)(_DWORD *))(*this + 36))(this) )
    sub_10026520((int)(this - 1));
  v2 = (_DWORD *)this[484];
  if ( v2 && *v2 )
    return (this[27] & 0x30) != 0 ? 0 : 2;
  else
    return 0;
}
