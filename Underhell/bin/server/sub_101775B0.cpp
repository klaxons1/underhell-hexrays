char __thiscall sub_101775B0(int this)
{
  int v2; // eax
  int v3; // ebx
  const char *v4; // eax

  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)(this + 320) + 48))(this + 320);
  v3 = v2 | 0x10;
  if ( !*(_BYTE *)(this + 1152) )
    v3 = v2 | 0x18;
  if ( sub_100E9550((_DWORD *)this, 6, v3, 0, 0) )
    return 1;
  sub_10112C00(this + 320, 2);
  sub_101129A0((unsigned __int16 *)(this + 320), v3 | *(_WORD *)(this + 356));
  if ( sub_102615C0(this, 33570827, 0) )
    return 1;
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v4 = *(const char **)(this + 92);
  if ( !v4 )
    v4 = String;
  Warning(
    "Item %s fell out of level at %f,%f,%f\n",
    v4,
    *(float *)(this + 580),
    *(float *)(this + 584),
    *(float *)(this + 588));
  sub_1025FAC0(this);
  return 0;
}
