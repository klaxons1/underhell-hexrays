void __thiscall sub_1025AC20(int this)
{
  unsigned int v2; // edi
  int *v3; // ecx
  int v4; // edi
  int *v5; // ecx

  if ( (*(_DWORD *)(this + 248) & 0x10) != 0 )
  {
    DevMsg(
      "*** trigger_playermovement using obsolete spawnflag. Remove and reset with new value for \"Disable auto player movement\"\n");
    v2 = *(_DWORD *)(this + 248) & 0xFFFFFFEF;
    if ( *(_DWORD *)(this + 248) != v2 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v3 = *(int **)(this + 24);
        if ( v3 )
          sub_100194B0(v3, 248);
      }
      *(_DWORD *)(this + 248) = v2;
    }
    v4 = *(_DWORD *)(this + 248) | 0x80;
    if ( *(_DWORD *)(this + 248) != v4 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v5 = *(int **)(this + 24);
        if ( v5 )
          sub_100194B0(v5, 248);
      }
      *(_DWORD *)(this + 248) = v4;
    }
  }
  sub_102586B0(this);
  sub_102575A0(this);
}
