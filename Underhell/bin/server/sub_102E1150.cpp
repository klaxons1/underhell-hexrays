void __thiscall sub_102E1150(int this)
{
  unsigned int v2; // esi
  int *v3; // ecx
  int *v4; // ecx
  int v5; // [esp+14h] [ebp-14h]
  int v6; // [esp+18h] [ebp-10h]
  int v7; // [esp+1Ch] [ebp-Ch]

  if ( !sub_102DA6D0() || sub_102DF0B0(this, (int)dword_10665E5C) )
  {
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 320))(this) )
      sub_102EB480(this);
    v2 = *(_DWORD *)(this + 192) & 0xFFFFFFFB;
    if ( *(_DWORD *)(this + 192) != v2 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v3 = *(int **)(this + 24);
        if ( v3 )
          sub_100194B0(v3, 192);
      }
      *(_DWORD *)(this + 192) = v2;
    }
    sub_1023C380((_DWORD *)this, (int)"HL2Player.FlashLightOff", 0.0, 0);
    if ( *(_BYTE *)(this + 5061) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v4 = *(int **)(this + 24);
        if ( v4 )
          sub_100194B0(v4, 5061);
      }
      *(_BYTE *)(this + 5061) = 0;
    }
    *(float *)&v5 = *(float *)(this + 5084) * 0.0099999998;
    sub_102DCFA0((_DWORD *)this, "OnFlashlightOff", v5, v6, v7, -1, 1, this, this);
  }
}
