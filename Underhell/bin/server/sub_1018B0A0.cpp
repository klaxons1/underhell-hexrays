void __thiscall sub_1018B0A0(float *this, float *a2, int a3, float *a4, float *a5)
{
  double v5; // st7
  double v6; // st7
  double v7; // st6
  double v8; // st7
  double v9; // st6
  double v10; // rt0
  double v11; // st7
  double v12; // st6
  double v13; // rt1
  double v14; // st7
  double v15; // st7
  double v16; // st6
  double v17; // st7
  double v18; // st6
  double v19; // rt0
  double v20; // st7
  double v21; // st6
  double v22; // rt1

  if ( a3 )
  {
    if ( a3 != 2 )
    {
      if ( a3 == 3 )
        v5 = this[1];
      else
        v5 = this[4];
      *a4 = v5;
      if ( a2[2] >= (double)this[2] )
        v6 = a2[2];
      else
        v6 = this[2];
      if ( a2[5] <= (double)this[5] )
        v7 = a2[5];
      else
        v7 = this[5];
      if ( this[2] <= v6 )
      {
        if ( this[5] >= v6 )
        {
          v10 = v7;
          v9 = v6;
          v8 = v10;
        }
        else
        {
          v8 = v7;
          v9 = this[5];
        }
      }
      else
      {
        v8 = v7;
        v9 = this[2];
      }
      if ( this[2] <= v8 )
      {
        if ( this[5] >= v8 )
        {
          v13 = v9;
          v12 = v8;
          v11 = v13;
        }
        else
        {
          v11 = v9;
          v12 = this[5];
        }
      }
      else
      {
        v11 = v9;
        v12 = this[2];
      }
      a4[1] = (v12 + v11) * 0.5;
      *a5 = (v12 - v11) * 0.5;
      return;
    }
    v14 = this[5];
  }
  else
  {
    v14 = this[2];
  }
  a4[1] = v14;
  if ( a2[1] >= (double)this[1] )
    v15 = a2[1];
  else
    v15 = this[1];
  if ( a2[4] <= (double)this[4] )
    v16 = a2[4];
  else
    v16 = this[4];
  if ( this[1] <= v15 )
  {
    if ( this[4] >= v15 )
    {
      v19 = v16;
      v18 = v15;
      v17 = v19;
    }
    else
    {
      v17 = v16;
      v18 = this[4];
    }
  }
  else
  {
    v17 = v16;
    v18 = this[1];
  }
  if ( this[1] <= v17 )
  {
    if ( this[4] >= v17 )
    {
      v22 = v18;
      v21 = v17;
      v20 = v22;
    }
    else
    {
      v20 = v18;
      v21 = this[4];
    }
  }
  else
  {
    v20 = v18;
    v21 = this[1];
  }
  *a4 = (v21 + v20) * 0.5;
  *a5 = (v21 - v20) * 0.5;
}
