char __thiscall sub_1042D470(int this, int a2)
{
  int v3; // eax
  int v4; // ecx

  if ( (*(_BYTE *)(this + 20) & 1) != 0 || (*(_BYTE *)(this + 21) & 8) != 0 )
    return 0;
  v3 = *(_DWORD *)(this + 16);
  v4 = *(_DWORD *)(this + 32);
  if ( (v3 < v4 || *(_DWORD *)(this + 4) < a2 + v3 - v4)
    && !(*(unsigned __int8 (__thiscall **)(int, int))(this + 40))(this, a2) )
  {
    *(_BYTE *)(this + 20) |= 1u;
    return 0;
  }
  return 1;
}
