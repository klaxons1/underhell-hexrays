int __thiscall sub_10029BC0(_DWORD *this, int a2, int a3, int a4)
{
  _DWORD *v5; // eax
  int result; // eax

  if ( !this[485] && (*(int (__thiscall **)(_DWORD *))(this[1] + 36))(this + 1) )
    sub_10026520((int)this);
  v5 = (_DWORD *)this[485];
  if ( !v5 || !*v5 )
    return -1;
  if ( !a4 )
  {
    a4 = 1;
    result = sub_10008670((int)v5, a2, a3, &a4);
    if ( a4 == 1 )
      return result;
    return -1;
  }
  return sub_10008670((int)v5, a2, a3, (int *)a4);
}
