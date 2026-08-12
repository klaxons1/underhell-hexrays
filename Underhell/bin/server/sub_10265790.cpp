_DWORD *__thiscall sub_10265790(_DWORD *this, int a2, int a3, int a4)
{
  _DWORD *result; // eax

  result = this;
  this[1] = a2;
  this[2] = a3;
  this[3] = a4;
  *this = &CTraceFilterLOS::`vftable';
  return result;
}
