void __thiscall sub_100A4FA0(float *this, float a2, float a3, int a4)
{
  float *v4; // edi
  double v6; // st7
  double v7; // st7
  double v8; // st6

  v4 = (float *)off_103DC81C;
  v6 = sub_100A4EE0((int)this, *((float *)off_103DC81C + 3));
  if ( a3 > 0.0 )
  {
    v8 = a3 + v4[3];
    *this = v4[3];
    *((_DWORD *)this + 4) = a4;
    this[1] = v8;
    this[2] = v6;
    this[3] = a2;
  }
  else
  {
    this[3] = a2;
    this[2] = a2;
    v7 = *((float *)off_103DC81C + 3);
    this[4] = 0.0;
    this[1] = v7;
    *this = v7;
  }
}
