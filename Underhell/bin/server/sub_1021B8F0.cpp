int __thiscall sub_1021B8F0(_DWORD *this)
{
  unsigned int v2; // eax
  int v3; // ecx

  *this = &CRopeKeyframe::`vftable';
  this[200] = &CRopeKeyframe::`vftable';
  sub_1021B2B0((int)this, 0, 0);
  sub_1021B330((int)this, 0, 0);
  v2 = this[77];
  if ( v2 != -1 && off_1061BE18[4 * (this[77] & 0xFFF) + 2] == v2 >> 12 )
  {
    v3 = off_1061BE18[4 * (this[77] & 0xFFF) + 1];
    if ( v3 )
    {
      --*(_BYTE *)(v3 + 304);
      sub_100D8500((_DWORD *)v3);
    }
  }
  sub_100E1C80((int)this, 0, 0);
  this[200] = &IWatcherCallback::`vftable';
  return sub_100DF1D0(this);
}
