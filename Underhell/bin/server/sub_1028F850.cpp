int __thiscall sub_1028F850(int this, int a2)
{
  int result; // eax

  sub_10282320((_DWORD *)this, a2);
  *(float *)(this + 12) = 0.0;
  *(float *)(this + 16) = 0.0;
  *(float *)(this + 20) = 0.0;
  *(_DWORD *)this = &CTEGaussExplosion::`vftable';
  if ( *(_DWORD *)(this + 24) )
    *(_DWORD *)(this + 24) = 0;
  if ( 0.0 != *(float *)(this + 28) )
    *(float *)(this + 28) = 0.0;
  if ( 0.0 != *(float *)(this + 32) )
    *(float *)(this + 32) = 0.0;
  result = this;
  if ( 0.0 != *(float *)(this + 36) )
    *(float *)(this + 36) = 0.0;
  return result;
}
