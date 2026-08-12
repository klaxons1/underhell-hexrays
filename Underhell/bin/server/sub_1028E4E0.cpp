int __thiscall sub_1028E4E0(int this, int a2)
{
  int result; // eax

  sub_10282320((_DWORD *)this, a2);
  *(_DWORD *)this = &CTEDynamicLight::`vftable';
  if ( 0.0 != *(float *)(this + 12) )
    *(float *)(this + 12) = 0.0;
  if ( 0.0 != *(float *)(this + 16) )
    *(float *)(this + 16) = 0.0;
  if ( 0.0 != *(float *)(this + 20) )
    *(float *)(this + 20) = 0.0;
  if ( *(_DWORD *)(this + 28) )
    *(_DWORD *)(this + 28) = 0;
  if ( *(_DWORD *)(this + 32) )
    *(_DWORD *)(this + 32) = 0;
  if ( *(_DWORD *)(this + 36) )
    *(_DWORD *)(this + 36) = 0;
  if ( *(_DWORD *)(this + 40) )
    *(_DWORD *)(this + 40) = 0;
  if ( *(_DWORD *)(this + 24) != COERCE_INT(0.0) )
    *(float *)(this + 24) = 0.0;
  if ( *(_DWORD *)(this + 44) != COERCE_INT(0.0) )
    *(float *)(this + 44) = 0.0;
  result = this;
  if ( *(_DWORD *)(this + 48) != COERCE_INT(0.0) )
    *(float *)(this + 48) = 0.0;
  return result;
}
