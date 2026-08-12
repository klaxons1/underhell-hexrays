char __thiscall sub_10094030(_DWORD *this, int a2)
{
  int v3; // esi
  int v4; // ecx

  v3 = 0;
  if ( (int)this[910] <= 0 )
    return 0;
  while ( 1 )
  {
    v4 = *(_DWORD *)(this[907] + 4 * v3);
    if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v4 + 36))(v4, a2) )
      break;
    if ( ++v3 >= this[910] )
      return 0;
  }
  return 1;
}
