_DWORD *__thiscall sub_101925E0(_DWORD *this)
{
  _DWORD *result; // eax

  result = this;
  *this = &C_HL2PlayerLocalData::`vftable';
  this[7] = -1;
  this[26] = -1;
  this[27] = -1;
  *((float *)this + 1) = 0.0;
  *((_BYTE *)this + 8) = 0;
  this[4] = 0;
  this[5] = 0;
  *((_WORD *)this + 12) = 0;
  this[16] = -1;
  *((float *)this + 12) = 0.0;
  *((float *)this + 13) = flt_10459240;
  *((_QWORD *)this + 7) = qword_10459244;
  return result;
}
