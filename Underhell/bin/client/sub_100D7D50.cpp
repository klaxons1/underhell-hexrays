void __thiscall sub_100D7D50(_DWORD *this, int a2)
{
  if ( a2 )
    this[63] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    this[63] = -1;
}
