void __thiscall sub_10206C90(int this)
{
  const char *v2; // eax
  double v3; // [esp+0h] [ebp-1Ch]
  double v4; // [esp+8h] [ebp-14h]
  double v5; // [esp+10h] [ebp-Ch]

  if ( !*(_DWORD *)(this + 1668) )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v5 = *(float *)(this + 588);
    v4 = *(float *)(this + 584);
    v3 = *(float *)(this + 580);
    v2 = sub_100D6390((_DWORD *)this);
    DevWarning(
      1,
      "Unlocking prop_door '%s' at (%.0f %.0f %.0f) with no hardware. All openable doors must have hardware!\n",
      v2,
      v3,
      v4,
      v5);
  }
  *(_BYTE *)(this + 1720) = 0;
}
