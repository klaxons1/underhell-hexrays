int __thiscall sub_10208920(int this, int a2)
{
  double v3; // st7

  if ( *(_DWORD *)(a2 + 24) == 1 )
    v3 = *(float *)(a2 + 8);
  else
    v3 = 0.0;
  *(float *)(this + 1932) = v3;
  sub_10206E20((float *)this);
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
