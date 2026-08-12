bool __thiscall sub_100DCD90(int this)
{
  if ( !*(_DWORD *)(this + 24) )
    return 1;
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  if ( *(float *)(this + 580) >= 16384.0 )
    return 0;
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  if ( *(float *)(this + 584) >= 16384.0 )
    return 0;
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  if ( *(float *)(this + 588) >= 16384.0 )
    return 0;
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  return *(float *)(this + 580) > -16384.0
      && *((float *)sub_10019640((_DWORD *)this) + 1) > -16384.0
      && *((float *)sub_10019640((_DWORD *)this) + 2) > -16384.0
      && *(float *)sub_10019660((_DWORD *)this) < 2000.0
      && *((float *)sub_10019660((_DWORD *)this) + 1) < 2000.0
      && *((float *)sub_10019660((_DWORD *)this) + 2) < 2000.0
      && *(float *)sub_10019660((_DWORD *)this) > -2000.0
      && *((float *)sub_10019660((_DWORD *)this) + 1) > -2000.0
      && *((float *)sub_10019660((_DWORD *)this) + 2) > -2000.0;
}
