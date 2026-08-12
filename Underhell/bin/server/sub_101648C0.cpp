char __thiscall sub_101648C0(_DWORD *this, int a2)
{
  int v2; // ecx

  v2 = this[906];
  if ( v2 )
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 180))(v2, a2);
  else
    return 0;
}
