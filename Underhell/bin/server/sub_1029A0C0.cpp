char *__thiscall sub_1029A0C0(int this, char a2)
{
  _DWORD *v3; // ecx
  const char *v4; // edi
  const char *v5; // eax

  if ( *(_DWORD *)(dword_106DB0DC + 48) == 4 )
  {
    v3 = *(_DWORD **)(this + 4);
    v4 = (const char *)v3[23];
    if ( !v4 )
      v4 = String;
    v5 = sub_100D6390(v3);
    Msg("ACTBUSY: ForceActBusyLeave on NPC %s (%s)\n", v4, v5);
  }
  sub_10299D40(this, 0, *(float *)(this + 48), a2);
  *(_BYTE *)(this + 17) = 1;
  *(_BYTE *)(this + 26) = 1;
  *(_DWORD *)(this + 20) = -1;
  *(_DWORD *)(this + 68) = -1;
  return sub_10023CB0(*(char **)(this + 4), 25);
}
