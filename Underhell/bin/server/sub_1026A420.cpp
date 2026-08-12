char __thiscall sub_1026A420(_DWORD *this, int a2)
{
  int v2; // ecx

  v2 = this[12];
  if ( v2 )
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 60))(v2, a2);
  else
    return 1;
}
