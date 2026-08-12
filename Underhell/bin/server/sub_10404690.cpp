int __thiscall sub_10404690(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // edi
  double v5; // st7

  v2 = *(_DWORD *)(this + 412);
  if ( v2 == -1 || (v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 412) & 0xFFF) + 1], v3[1] != v2 >> 12) )
    v4 = 0;
  else
    v4 = *v3;
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v5 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)this + 496))(this);
  return sub_1013D350((float *)(this + 580), (float *)(this + 704), v4, (int)v5, 200, 1064, 0.0, this, -1, 0, 0);
}
