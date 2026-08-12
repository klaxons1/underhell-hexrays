int __thiscall sub_1002A680(_DWORD *this)
{
  int v2; // esi

  if ( !this[485] && (*(int (__thiscall **)(_DWORD *))(this[1] + 36))(this + 1) )
    sub_10026520((int)this);
  v2 = this[485];
  if ( v2 && *(_DWORD *)v2 )
    return *(_DWORD *)(*(_DWORD *)v2 + 268);
  else
    return 0;
}
