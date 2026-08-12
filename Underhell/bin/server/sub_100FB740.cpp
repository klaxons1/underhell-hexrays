_DWORD *__thiscall sub_100FB740(_DWORD *this, int a2, float a3)
{
  sub_10219BB0(this);
  *this = &CPASFilter::`vftable';
  sub_1021A370(a2);
  *this = &CPASAttenuationFilter::`vftable';
  sub_1021A0E0(a2, a3);
  return this;
}
