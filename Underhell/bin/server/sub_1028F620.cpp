int __thiscall sub_1028F620(int this, int a2)
{
  sub_10282320((_DWORD *)this, a2);
  *(_DWORD *)this = &CTEFootprintDecal::`vftable';
  if ( 0.0 != *(float *)(this + 12) )
    *(float *)(this + 12) = 0.0;
  if ( 0.0 != *(float *)(this + 16) )
    *(float *)(this + 16) = 0.0;
  if ( 0.0 != *(float *)(this + 20) )
    *(float *)(this + 20) = 0.0;
  if ( *(_DWORD *)(this + 36) )
    *(_DWORD *)(this + 36) = 0;
  if ( *(_DWORD *)(this + 40) )
    *(_DWORD *)(this + 40) = 0;
  if ( *(_BYTE *)(this + 44) != 67 )
    *(_BYTE *)(this + 44) = 67;
  return this;
}
