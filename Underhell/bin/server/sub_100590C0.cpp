char __thiscall sub_100590C0(_DWORD **this)
{
  int v1; // eax

  v1 = (*(int (__thiscall **)(_DWORD *))(*this[1] + 1656))(this[1]);
  if ( v1 )
    return (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 8))(v1);
  else
    return 0;
}
