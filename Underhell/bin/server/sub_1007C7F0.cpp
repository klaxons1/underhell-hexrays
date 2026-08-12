float *__thiscall sub_1007C7F0(float *this)
{
  float *result; // eax

  result = this;
  this[3] = 0.0;
  this[1] = 0.0;
  this[4] = -1.0;
  *(_DWORD *)this = &CAI_MoveAndShootOverlay::`vftable';
  *((_WORD *)this + 4) = 0;
  return result;
}
