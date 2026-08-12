int __thiscall sub_1037FC10(int this)
{
  int v2; // ecx
  int result; // eax

  v2 = *(_DWORD *)(this + 3620);
  if ( dword_106E50AC > 0 )
    (*(void (__thiscall **)(int, int, _DWORD, int))(*(_DWORD *)v2 + 896))(v2, dword_106E50AC, 0, this);
  sub_101129A0(
    (unsigned __int16 *)(*(_DWORD *)(this + 3620) + 320),
    *(_WORD *)(*(_DWORD *)(this + 3620) + 356) & 0xFFFB);
  *(_DWORD *)(this + 3620) = 0;
  result = dword_106B31C8;
  *(float *)(this + 3636) = *(float *)(dword_106B31C8 + 12) + 8.0;
  *(float *)(this + 3640) = *(float *)(dword_106B31C8 + 12) - 0.1;
  return result;
}
