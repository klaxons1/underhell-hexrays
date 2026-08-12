bool __thiscall sub_10037270(int this, char a2)
{
  int v3; // ecx

  v3 = *(_DWORD *)(this + 108);
  if ( (v3 & 0x20) != 0 )
    return 0;
  if ( (a2 & 1) != 0 )
    return !*(_BYTE *)(this + 112) || HIBYTE(*(_DWORD *)(this + 84));
  if ( (v3 & 0x40) != 0 )
    return 0;
  return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413178 + 36))(dword_10413178, *(_DWORD *)(this + 88)) != 3;
}
