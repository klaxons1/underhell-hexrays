void *__thiscall sub_100A4E80(float *this, float a2, float a3, float a4, int a5)
{
  void *result; // eax
  double v6; // st7
  double v7; // st7
  double v8; // st6

  if ( a4 > 0.0 )
  {
    result = off_103DC81C;
    v7 = a4 + *((float *)off_103DC81C + 3);
    v8 = *((float *)off_103DC81C + 3);
    *((_DWORD *)this + 4) = a5;
    *this = v8;
    this[1] = v7;
    this[2] = a2;
    this[3] = a3;
  }
  else
  {
    this[3] = a3;
    this[2] = a3;
    result = off_103DC81C;
    v6 = *((float *)off_103DC81C + 3);
    this[4] = 0.0;
    this[1] = v6;
    *this = v6;
  }
  return result;
}
