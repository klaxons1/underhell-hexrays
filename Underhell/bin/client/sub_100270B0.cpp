int __thiscall sub_100270B0(int this, int a2)
{
  double v2; // st7
  int v3; // eax
  int v4; // edx
  double v5; // st7

  v2 = *(float *)(this + 1808);
  *(_DWORD *)(this + 1860) = *(_DWORD *)(this + 1800);
  *(float *)(this + 1856) = v2;
  v3 = this + 1536;
  *(float *)(this + 1736) = *(float *)(this + 1676);
  v4 = 3;
  *(float *)(this + 1740) = *(float *)(this + 1680);
  *(float *)(this + 1744) = *(float *)(this + 1684);
  *(float *)(this + 1748) = *(float *)(this + 1688);
  do
  {
    v5 = *(float *)(v3 - 140);
    v3 += 32;
    --v4;
    *(float *)(v3 - 32) = v5;
    *(float *)(v3 - 28) = *(float *)(v3 - 168);
    *(float *)(v3 - 24) = *(float *)(v3 - 164);
    *(float *)(v3 - 20) = *(float *)(v3 - 160);
    *(float *)(v3 - 16) = *(float *)(v3 - 156);
    *(float *)(v3 - 12) = *(float *)(v3 - 152);
    *(float *)(v3 - 8) = *(float *)(v3 - 148);
    *(float *)(v3 - 4) = *(float *)(v3 - 144);
  }
  while ( v4 );
  return sub_10037490(a2);
}
