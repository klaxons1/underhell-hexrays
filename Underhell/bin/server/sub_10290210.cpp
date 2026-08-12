int __thiscall sub_10290210(int this, int a2)
{
  sub_10282320((_DWORD *)this, a2);
  *(_DWORD *)this = &CTEGlowSprite::`vftable';
  if ( 0.0 != *(float *)(this + 12) )
    *(float *)(this + 12) = 0.0;
  if ( 0.0 != *(float *)(this + 16) )
    *(float *)(this + 16) = 0.0;
  if ( 0.0 != *(float *)(this + 20) )
    *(float *)(this + 20) = 0.0;
  if ( *(_DWORD *)(this + 24) )
    *(_DWORD *)(this + 24) = 0;
  if ( *(_DWORD *)(this + 28) != COERCE_INT(0.0) )
    *(float *)(this + 28) = 0.0;
  if ( *(_DWORD *)(this + 32) != COERCE_INT(0.0) )
    *(float *)(this + 32) = 0.0;
  if ( *(_DWORD *)(this + 36) )
    *(_DWORD *)(this + 36) = 0;
  return this;
}
