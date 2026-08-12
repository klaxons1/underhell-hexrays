int __thiscall sub_1028EAE0(int this, int a2)
{
  int result; // eax

  sub_10282320((_DWORD *)this, a2);
  *(_DWORD *)this = &CTEEnergySplash::`vftable';
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
  result = this;
  if ( *(_BYTE *)(this + 36) )
    *(_BYTE *)(this + 36) = 0;
  return result;
}
