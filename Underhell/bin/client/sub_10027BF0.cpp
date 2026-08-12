int __thiscall sub_10027BF0(_DWORD *this)
{
  int *v2; // edi
  int v4; // edi

  if ( !this[484] && (*(int (__thiscall **)(_DWORD *))(*this + 36))(this) )
    sub_10026520((int)(this - 1));
  v2 = (int *)this[484];
  if ( !v2 || !*v2 || !(unsigned __int8)sub_101282A0(this[484]) || (this[27] & 0x30) != 0 )
    return 0;
  if ( !sub_10126D70(v2) || this[297] && *((_BYTE *)this + 80) == 23 )
    return 2;
  if ( sub_10126D90(v2) <= 0 )
  {
    v4 = *v2;
    if ( *(int *)(v4 + 164) <= 0 && *(int *)(v4 + 284) <= 0 )
      return 2;
  }
  return 3;
}
