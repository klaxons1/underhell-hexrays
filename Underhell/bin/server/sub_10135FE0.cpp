int __thiscall sub_10135FE0(int this)
{
  double v2; // st7

  v2 = *(float *)(this + 984);
  *(_DWORD *)(this + 968) = 0;
  if ( 0.0 == v2 && (*(_DWORD *)(this + 248) & 8) == 0 )
    sub_100EAB80((_DWORD *)this, 32);
  sub_100EC4A0((int *)this, -1.0, 0);
  return sub_100EC3F0((_DWORD *)this, 0, 0.0, 0);
}
