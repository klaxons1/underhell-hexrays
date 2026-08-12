void __thiscall sub_10159A40(float *this, float *a2, float *a3)
{
  int v3; // eax
  int v4; // edi
  float *v5; // edx
  double v6; // st2
  double v7; // st5
  double v8; // st2
  double v9; // st3
  double v10; // st5
  double v11; // st5
  double v12; // rt1
  double v13; // rt0
  double v14; // st6
  double v15; // st6

  v3 = *((_DWORD *)this + 589);
  if ( v3 )
  {
    v4 = 0;
    if ( v3 > 0 )
    {
      v5 = this + 370;
      do
      {
        v6 = *a2 - *(v5 - 2);
        v7 = v6 * v6;
        v8 = a2[1] - *(v5 - 1);
        v9 = a2[2] - *v5;
        v10 = v9 * v9 + v8 * v8 + v7;
        if ( v10 < v5[1] )
        {
          v11 = 1.0 - v10 / v5[1];
          v12 = *(v5 - 4) * v11;
          v13 = v11 * *(v5 - 3) * 0.1;
          *a3 = *(v5 - 5) * v11 * 0.1 + *a3;
          a3[1] = v12 * 0.1 + a3[1];
          a3[2] = v13 + a3[2];
        }
        ++v4;
        v5 += 7;
      }
      while ( v4 < *((_DWORD *)this + 589) );
    }
    if ( a3[2] >= (double)a3[1] )
      v14 = a3[2];
    else
      v14 = a3[1];
    if ( v14 >= *a3 )
    {
      if ( a3[2] >= (double)a3[1] )
        v15 = a3[2];
      else
        v15 = a3[1];
    }
    else
    {
      v15 = *a3;
    }
    if ( v15 > 1.0 )
    {
      *a3 = *a3 * (1.0 / v15);
      a3[1] = a3[1] * (1.0 / v15);
      a3[2] = 1.0 / v15 * a3[2];
    }
  }
}
