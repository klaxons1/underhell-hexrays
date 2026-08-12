_BYTE *__thiscall sub_10143810(_BYTE *this, _BYTE *a2, _BYTE *a3)
{
  _BYTE *result; // eax

  result = a2;
  *a2 = *this + *a3;
  a2[1] = this[1] + a3[1];
  a2[2] = this[2] + a3[2];
  a2[3] = this[3] + a3[3];
  return result;
}
