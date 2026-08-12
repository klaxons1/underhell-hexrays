char __thiscall sub_10302300(int *this, _DWORD *a2)
{
  int v2; // eax

  v2 = this[906];
  if ( v2 )
    return (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v2 + 184))(this[906], a2);
  else
    return sub_100246E0(this, a2);
}
