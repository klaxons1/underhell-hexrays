int __thiscall sub_102376C0(int *this)
{
  int v2; // esi
  unsigned int v3; // eax
  int v4; // ecx

  v2 = this[285] - 1;
  for ( *this = (int)&CSlideshowDisplay::`vftable'; v2 >= 0; --v2 )
  {
    v3 = *(_DWORD *)(this[282] + 4 * v2);
    if ( v3 == -1 || off_1061BE18[4 * (*(_DWORD *)(this[282] + 4 * v2) & 0xFFF) + 2] != v3 >> 12 )
      v4 = 0;
    else
      v4 = off_1061BE18[4 * (*(_DWORD *)(this[282] + 4 * v2) & 0xFFF) + 1];
    sub_10271760(v4);
  }
  this[285] = 0;
  sub_102375F0(this + 282);
  sub_102375F0(this + 266);
  return sub_100DF1D0(this);
}
