int __thiscall sub_10029C40(_DWORD *this, int a2, int a3)
{
  _DWORD *v4; // eax

  if ( !this[485] && (*(int (__thiscall **)(_DWORD *))(this[1] + 36))(this + 1) )
    sub_10026520((int)this);
  v4 = (_DWORD *)this[485];
  if ( !v4 || !*v4 )
    v4 = 0;
  return sub_10008A70((int)v4, this + 300, a2, a3);
}
