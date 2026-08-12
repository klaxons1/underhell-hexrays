void *__thiscall sub_100B2110(float *this, float *a2)
{
  double v3; // st7
  void *result; // eax
  float v5; // [esp+0h] [ebp-8h]

  if ( this[19] <= 0.0 )
  {
    this[7] = *a2;
    this[8] = a2[1];
    this[9] = a2[2];
    result = off_103DC81C;
    this[19] = *(float *)off_103DC81C;
  }
  else
  {
    v3 = (*(float *)off_103DC81C - this[19]) * this[18];
    if ( v3 <= 1.0 )
    {
      if ( v3 < 0.01 )
        v3 = 0.01;
    }
    else
    {
      v3 = 1.0;
    }
    v5 = v3;
    result = (void *)sub_10076A00((int)(this + 7), (int)a2, (int)(this + 7), v5);
    this[19] = *(float *)off_103DC81C;
  }
  return result;
}
