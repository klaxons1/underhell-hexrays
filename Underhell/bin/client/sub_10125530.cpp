int __thiscall sub_10125530(int this)
{
  int result; // eax

  sub_10123DC0((float *)this);
  *(_DWORD *)this = &C_SpriteTrail::`vftable';
  *(_DWORD *)(this + 4) = &C_SpriteTrail::`vftable';
  *(_DWORD *)(this + 8) = &C_SpriteTrail::`vftable';
  *(_DWORD *)(this + 12) = &C_SpriteTrail::`vftable';
  *(_DWORD *)(this + 1192) = &C_SpriteTrail::`vftable';
  *(_DWORD *)(this + 2824) = 0;
  *(_DWORD *)(this + 2828) = 0;
  if ( *(_DWORD *)(this + 2888) != COERCE_INT(0.0) )
    *(float *)(this + 2888) = 0.0;
  if ( 0.0 != *(float *)(this + 2900) )
    *(float *)(this + 2900) = 0.0;
  if ( 0.0 != *(float *)(this + 2904) )
    *(float *)(this + 2904) = 0.0;
  if ( 0.0 != *(float *)(this + 2908) )
    *(float *)(this + 2908) = 0.0;
  if ( *(_DWORD *)(this + 2912) != COERCE_INT(1.0) )
    *(float *)(this + 2912) = 1.0;
  result = this;
  if ( *(_DWORD *)(this + 2884) != COERCE_INT(-1.0) )
    *(float *)(this + 2884) = -1.0;
  return result;
}
