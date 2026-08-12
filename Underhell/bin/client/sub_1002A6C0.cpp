int __thiscall sub_1002A6C0(_DWORD *this, int a2)
{
  int v3; // eax

  if ( !this[485] && (*(int (__thiscall **)(_DWORD *))(this[1] + 36))(this + 1) )
    sub_10026520((int)this);
  v3 = this[485];
  if ( v3 && *(_DWORD *)v3 )
    return *(_DWORD *)v3
         + *(_DWORD *)(*(_DWORD *)v3 + 272)
         + 20 * a2
         + *(_DWORD *)(*(_DWORD *)v3 + *(_DWORD *)(*(_DWORD *)v3 + 272) + 20 * a2 + 4);
  else
    return 0;
}
