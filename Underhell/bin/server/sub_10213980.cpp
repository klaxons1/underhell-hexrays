int __thiscall sub_10213980(int this)
{
  double v2; // st7
  int *v3; // ecx
  int v4; // eax
  int v5; // edx
  const char *v6; // eax
  unsigned int v7; // eax
  double v9; // [esp+0h] [ebp-24h]
  double v10; // [esp+8h] [ebp-1Ch]
  double v11; // [esp+10h] [ebp-14h]

  sub_10212CE0(this);
  v2 = 0.0;
  if ( *(_DWORD *)(this + 1072) != COERCE_INT(0.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
      {
        sub_100194B0(v3, 1072);
        v2 = 0.0;
      }
    }
    *(float *)(this + 1072) = v2;
  }
  v4 = *(_DWORD *)this;
  *(float *)(this + 1420) = v2;
  (*(void (__thiscall **)(int))(v4 + 100))(this);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 908))(this);
  if ( (*(_DWORD *)(this + 248) & 0x800) != 0 )
    *(_BYTE *)(this + 1720) = 1;
  sub_100E0970(this, v5, 7, 0);
  if ( 0.0 == *(float *)(this + 108) )
    *(float *)(this + 108) = 100.0;
  sub_100EA9A0((int *)this, 0x40000);
  sub_10112C00(this + 320, 6);
  sub_100E9630((float *)this, 0, 0, 0);
  sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 3);
  sub_100C1600(this, 1, *(_DWORD *)(this + 1668));
  if ( !*(_DWORD *)(this + 1668) && (*(_DWORD *)(this + 248) & 0x800) == 0 )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v11 = *(float *)(this + 588);
    v10 = *(float *)(this + 584);
    v9 = *(float *)(this + 580);
    v6 = sub_100D6390((_DWORD *)this);
    DevWarning(
      1,
      "Unlocked prop_door '%s' at (%.0f %.0f %.0f) has no hardware. All openable doors must have hardware!\n",
      v6,
      v9,
      v10,
      v11);
  }
  if ( !*(_BYTE *)(this + 1296) )
    sub_102076A0((_DWORD *)this);
  *(_DWORD *)(this + 1724) = -1;
  v7 = *(_DWORD *)(this + 1724);
  if ( v7 == -1
    || off_1061BE18[4 * (*(_DWORD *)(this + 1724) & 0xFFF) + 2] != v7 >> 12
    || !off_1061BE18[4 * (*(_DWORD *)(this + 1724) & 0xFFF) + 1] )
  {
    *(_BYTE *)(this + 1728) = 0;
  }
  return sub_10207D30(this);
}
