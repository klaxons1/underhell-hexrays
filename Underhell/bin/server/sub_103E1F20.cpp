void __thiscall sub_103E1F20(int this)
{
  long double v2; // st7
  unsigned int v3; // eax
  long double v4; // st5
  long double v5; // st7
  long double v6; // st6
  double v7; // st5
  bool v8; // c0
  long double v9; // st5
  long double v10; // st6
  long double v11; // st5
  int v12; // eax

  if ( !*(_BYTE *)(this + 1713) && !*(_BYTE *)(this + 1712) )
  {
    v2 = *(float *)(this + 1652);
    if ( 0.0 == v2 )
    {
      v3 = *(_DWORD *)(this + 1640);
      if ( v3 != -1
        && off_1061BE18[4 * (*(_DWORD *)(this + 1640) & 0xFFF) + 2] == v3 >> 12
        && off_1061BE18[4 * (*(_DWORD *)(this + 1640) & 0xFFF) + 1] )
      {
        v2 = 0.2;
      }
    }
    v4 = v2;
    v5 = *(float *)(this + 1820);
    if ( v4 <= v5 )
    {
      v6 = v4;
      if ( v4 >= *(float *)(this + 1820) )
        goto LABEL_17;
      v9 = *(float *)(this + 1820) - *(float *)(dword_106B31C8 + 16) * 0.4;
      *(float *)(this + 1820) = v9;
      v8 = v9 < v6;
    }
    else
    {
      v6 = v4;
      if ( v4 <= 0.0 )
        v7 = *(float *)(dword_106B31C8 + 16) * 0.4 + *(float *)(this + 1820);
      else
        v7 = *(float *)(dword_106B31C8 + 16) + *(float *)(this + 1820);
      *(float *)(this + 1820) = v7;
      v8 = v6 < *(float *)(this + 1820);
    }
    if ( v8 )
      *(float *)(this + 1820) = v6;
LABEL_17:
    v10 = fabs(*(float *)(this + 1820));
    if ( v10 <= 0.6 )
    {
      if ( v10 > 0.2 )
      {
        v11 = fabs(v5);
        if ( v11 > 0.2 && v11 <= 0.6 )
          goto LABEL_28;
        sub_100C1600(this, 2, 1);
        sub_100C1600(this, 3, 1);
        goto LABEL_27;
      }
      if ( fabs(v5) > 0.2 )
      {
        sub_100C1600(this, 2, 1);
        sub_100C1600(this, 3, 0);
        goto LABEL_27;
      }
    }
    else if ( fabs(v5) <= 0.6 )
    {
      sub_100C1600(this, 2, 0);
      sub_100C1600(this, 3, 1);
LABEL_27:
      v12 = sub_100BDF40(this, "propeller_spin1");
      sub_100C1170(this, v12);
    }
LABEL_28:
    sub_10045B20(this, *(float *)(this + 1820));
    *(float *)(this + 1816) = *(float *)(this + 1652);
  }
}
