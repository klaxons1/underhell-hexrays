int __thiscall sub_1020C4D0(int this)
{
  unsigned int v2; // eax

  sub_100C1080(this);
  if ( *(_DWORD *)(this + 1552) )
  {
    v2 = *(_DWORD *)(this + 300);
    if ( v2 != -1
      && off_1061BE18[4 * (*(_DWORD *)(this + 300) & 0xFFF) + 2] == v2 >> 12
      && off_1061BE18[4 * (*(_DWORD *)(this + 300) & 0xFFF) + 1] )
    {
      sub_101C8460(this, this);
    }
  }
  sub_102085B0(
    this,
    *(float *)(this + 728),
    *(_DWORD *)(this + 732),
    *(_DWORD *)(this + 736),
    *(float *)(this + 1968),
    *(_DWORD *)(this + 1972),
    *(_DWORD *)(this + 1976),
    (float *)(this + 2004),
    (float *)(this + 2016));
  return sub_102085B0(
           this,
           *(float *)(this + 728),
           *(_DWORD *)(this + 732),
           *(_DWORD *)(this + 736),
           *(float *)(this + 1980),
           *(_DWORD *)(this + 1984),
           *(_DWORD *)(this + 1988),
           (float *)(this + 2028),
           (float *)(this + 2040));
}
