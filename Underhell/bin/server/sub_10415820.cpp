int __thiscall sub_10415820(int this, int a2)
{
  int result; // eax

  sub_10282320((_DWORD *)this, a2);
  *(float *)(this + 12) = 0.0;
  *(float *)(this + 16) = 0.0;
  *(float *)(this + 20) = 0.0;
  *(_DWORD *)this = &CTEConcussiveExplosion::`vftable';
  if ( *(_DWORD *)(this + 40) )
    *(_DWORD *)(this + 40) = 0;
  if ( *(_DWORD *)(this + 44) )
    *(_DWORD *)(this + 44) = 0;
  if ( *(_DWORD *)(this + 36) != COERCE_INT(0.0) )
    *(float *)(this + 36) = 0.0;
  if ( 0.0 != *(float *)(this + 24) )
    *(float *)(this + 24) = 0.0;
  if ( 0.0 != *(float *)(this + 28) )
    *(float *)(this + 28) = 0.0;
  result = this;
  if ( 0.0 != *(float *)(this + 32) )
    *(float *)(this + 32) = 0.0;
  return result;
}
