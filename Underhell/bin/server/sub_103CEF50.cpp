float *__thiscall sub_103CEF50(float *this)
{
  float *result; // eax

  sub_10332930((int)this);
  *(_DWORD *)this = &CZombie::`vftable';
  *((_DWORD *)this + 526) = &CZombie::`vftable';
  *((_DWORD *)this + 905) = &CZombie::`vftable';
  sub_103313F0();
  if ( dword_1067DC7C != dword_10694898 )
  {
    sub_103CE960();
    byte_1067DC78 = 1;
    dword_1067DC7C = dword_10694898;
  }
  this[959] = NAN;
  this[962] = 2.0;
  result = this;
  this[963] = 6.0;
  this[961] = -1.0;
  this[965] = 3.0;
  this[964] = -1.0;
  return result;
}
