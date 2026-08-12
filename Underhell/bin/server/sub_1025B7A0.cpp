int __thiscall sub_1025B7A0(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // edi
  int v5; // esi

  if ( this[212] != 1 )
    return Warning("Tried to disable CTriggerCamera, but its already disabled!\n");
  if ( !byte_106C1B24 )
    return sub_10259E20((int)this);
  byte_106C1B24 = 0;
  sub_10259E20((int)this);
  v3 = this[200];
  if ( v3 == -1 || off_1061BE18[4 * (this[200] & 0xFFF) + 2] != this[200] >> 12 )
    v4 = 0;
  else
    v4 = off_1061BE18[4 * (this[200] & 0xFFF) + 1];
  if ( v3 == -1 || off_1061BE18[4 * (this[200] & 0xFFF) + 2] != this[200] >> 12 )
    v5 = 0;
  else
    v5 = off_1061BE18[4 * (this[200] & 0xFFF) + 1];
  if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
    sub_100DAE60(v5);
  return (*(int (__thiscall **)(int, int, float *, _DWORD))(*(_DWORD *)v4 + 416))(v4, v5 + 580, &flt_106C1B28, 0);
}
