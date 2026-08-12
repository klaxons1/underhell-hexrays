int __thiscall sub_101126F0(int *this)
{
  int result; // eax
  int v3; // esi

  *(_DWORD *)(this[1] + 252) |= 0x4000u;
  result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
             dword_106B31D0,
             *(_DWORD *)(this[1] + 24));
  if ( result )
  {
    result = this[1];
    if ( (*(_DWORD *)(result + 252) & 0x8000) == 0 )
    {
      *(_DWORD *)(result + 252) |= 0x8000u;
      result = sub_101122E0(dword_1069B490, this[1]);
    }
  }
  v3 = this[1];
  if ( *(_DWORD *)(v3 + 24) )
    **(_DWORD **)(v3 + 24) |= 0x80u;
  return result;
}
