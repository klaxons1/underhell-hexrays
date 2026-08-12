char __thiscall sub_10266210(_DWORD *this, int a2, int a3)
{
  int v3; // ecx

  if ( this[11] == -1124 )
    return 0;
  v3 = *(_DWORD *)(this[11] + 1160);
  if ( !v3 )
    return 0;
  else
    return (*(int (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)v3 + 32))(v3, a2, a3, 0);
}
