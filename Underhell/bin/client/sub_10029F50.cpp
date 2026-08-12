int __thiscall sub_10029F50(_DWORD *this, int a2)
{
  _DWORD *v4; // eax

  if ( a2 == -1 )
    return -1;
  if ( !this[485] && (*(int (__thiscall **)(_DWORD *))(this[1] + 36))(this + 1) )
    sub_10026520((int)this);
  v4 = (_DWORD *)this[485];
  if ( v4 && *v4 )
    return sub_10008C10((int)v4, a2, 0);
  else
    return -1;
}
