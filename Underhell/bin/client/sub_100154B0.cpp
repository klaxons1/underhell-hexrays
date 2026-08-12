int __thiscall sub_100154B0(_DWORD *this, int a2, int a3)
{
  int v4; // eax

  if ( a3 )
    v4 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 8))(a3);
  else
    v4 = -1;
  if ( this[503] != v4 )
    this[503] = v4;
  return sub_1003B810(a2);
}
