int __thiscall sub_1028DDF0(int this, int a2)
{
  int result; // eax

  sub_10282320((_DWORD *)this, a2);
  *(_DWORD *)this = &CTEClientProjectile::`vftable';
  *(_DWORD *)(this + 44) = -1;
  if ( 0.0 != *(float *)(this + 12) )
    *(float *)(this + 12) = 0.0;
  if ( 0.0 != *(float *)(this + 16) )
    *(float *)(this + 16) = 0.0;
  if ( 0.0 != *(float *)(this + 20) )
    *(float *)(this + 20) = 0.0;
  if ( 0.0 != *(float *)(this + 24) )
    *(float *)(this + 24) = 0.0;
  if ( 0.0 != *(float *)(this + 28) )
    *(float *)(this + 28) = 0.0;
  if ( 0.0 != *(float *)(this + 32) )
    *(float *)(this + 32) = 0.0;
  if ( *(_DWORD *)(this + 36) )
    *(_DWORD *)(this + 36) = 0;
  if ( *(_DWORD *)(this + 40) )
    *(_DWORD *)(this + 40) = 0;
  if ( *(_DWORD *)(this + 44) == -1
    || off_1061BE18[4 * (*(_DWORD *)(this + 44) & 0xFFF) + 2] != *(_DWORD *)(this + 44) >> 12 )
  {
    return this;
  }
  result = this;
  if ( off_1061BE18[4 * (*(_DWORD *)(this + 44) & 0xFFF) + 1] )
    *(_DWORD *)(this + 44) = -1;
  return result;
}
