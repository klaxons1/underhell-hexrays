int __thiscall sub_1028F110(int this, int a2)
{
  int result; // eax

  sub_10282320((_DWORD *)this, a2);
  *(float *)(this + 12) = 0.0;
  *(float *)(this + 16) = 0.0;
  *(float *)(this + 20) = 0.0;
  *(_DWORD *)this = &CTEExplosion::`vftable';
  if ( *(_DWORD *)(this + 24) )
    *(_DWORD *)(this + 24) = 0;
  if ( *(_DWORD *)(this + 28) != COERCE_INT(0.0) )
    *(float *)(this + 28) = 0.0;
  if ( *(_DWORD *)(this + 32) )
    *(_DWORD *)(this + 32) = 0;
  if ( *(_DWORD *)(this + 36) )
    *(_DWORD *)(this + 36) = 0;
  if ( 0.0 != *(float *)(this + 40) )
    *(float *)(this + 40) = 0.0;
  if ( 0.0 != *(float *)(this + 44) )
    *(float *)(this + 44) = 0.0;
  if ( 0.0 != *(float *)(this + 48) )
    *(float *)(this + 48) = 0.0;
  if ( *(_BYTE *)(this + 52) != 67 )
    *(_BYTE *)(this + 52) = 67;
  if ( *(_DWORD *)(this + 56) )
    *(_DWORD *)(this + 56) = 0;
  result = this;
  if ( *(_DWORD *)(this + 60) )
    *(_DWORD *)(this + 60) = 0;
  return result;
}
