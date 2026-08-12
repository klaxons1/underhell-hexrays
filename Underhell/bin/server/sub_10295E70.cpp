void __thiscall sub_10295E70(int this)
{
  _DWORD *v2; // ecx
  const char *v3; // edi
  const char *v4; // eax

  v2 = *(_DWORD **)(this + 4);
  if ( v2 )
  {
    *(_BYTE *)(this + 84) = 0;
    if ( *(_DWORD *)(dword_106DB0DC + 48) == 4 )
    {
      v3 = (const char *)v2[23];
      if ( !v3 )
        v3 = String;
      v4 = sub_100D6390(v2);
      Msg("ACTBUSY: StopBusying on NPC %s (%s)\n", v3, v4);
    }
    if ( *(_BYTE *)(this + 36) || *(_BYTE *)(this + 37) )
      sub_10023CB0(*(char **)(this + 4), 25);
    *(float *)(this + 44) = *(float *)(dword_106B31C8 + 12);
    *(_BYTE *)(this + 17) = 0;
    *(_WORD *)(this + 24) = 0;
    *(_BYTE *)(this + 26) = 0;
    *(_BYTE *)(this + 37) = 0;
    *(_DWORD *)(this + 20) = -1;
    *(_DWORD *)(this + 68) = -1;
  }
}
