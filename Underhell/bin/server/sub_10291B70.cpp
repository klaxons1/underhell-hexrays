int __thiscall sub_10291B70(int this, int a2)
{
  int result; // eax

  sub_10282320((_DWORD *)this, a2);
  *(_DWORD *)this = &CTEProjectedDecal::`vftable';
  if ( 0.0 != *(float *)(this + 12) )
    *(float *)(this + 12) = 0.0;
  if ( 0.0 != *(float *)(this + 16) )
    *(float *)(this + 16) = 0.0;
  if ( 0.0 != *(float *)(this + 20) )
    *(float *)(this + 20) = 0.0;
  if ( 0.0 != *(float *)(this + 32) )
    *(float *)(this + 32) = 0.0;
  if ( 0.0 != *(float *)(this + 36) )
    *(float *)(this + 36) = 0.0;
  if ( 0.0 != *(float *)(this + 40) )
    *(float *)(this + 40) = 0.0;
  if ( *(_DWORD *)(this + 28) != COERCE_INT(64.0) )
    *(float *)(this + 28) = 64.0;
  result = this;
  if ( *(_DWORD *)(this + 24) )
    *(_DWORD *)(this + 24) = 0;
  return result;
}
