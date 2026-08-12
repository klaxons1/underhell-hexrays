void __thiscall sub_1011CB80(int *this, int a2, int a3, float a4, float a5, float a6)
{
  int v7; // eax
  int v8; // edi
  double v9; // st7
  double v10; // st6
  int v11; // ebx
  double v12; // rt0
  double v13; // rt1
  double v14; // st6
  double v15; // st7
  float *v16; // ecx
  double v17; // st5

  if ( a2 )
  {
    if ( !this[3] )
      sub_1011CA20(this, 0);
    v7 = 32 * this[3] + *this - 32;
    *(float *)(v7 + 24) = a6;
    *(_DWORD *)v7 = a3;
    *(float *)(v7 + 20) = a4;
    v8 = 0;
    *(float *)(v7 + 16) = a5;
    if ( this[3] - 1 > 0 )
    {
      v9 = 0.0;
      v10 = 1.0;
      v11 = 0;
      while ( 1 )
      {
        v13 = v10;
        v14 = v9;
        v15 = v13;
        v16 = (float *)(v11 + *this);
        if ( v14 < v16[7] )
        {
          v17 = v15 - (a6 - v16[6]) / v16[7];
          if ( v17 <= v14 || v17 > v15 )
          {
            if ( v17 > v15 )
            {
              ++v8;
              v11 += 32;
              v16[2] = v15;
              goto LABEL_18;
            }
          }
          else
          {
            v17 = 3.0 * v17 * v17 - v17 * ((v17 + v17) * v17);
          }
          if ( v17 > v14 )
          {
            ++v8;
            v16[2] = v17;
            v11 += 32;
            goto LABEL_18;
          }
        }
        if ( this[3] - v8 - 1 > 0 )
        {
          memcpy(v16, v16 + 8, 32 * (this[3] - v8 - 1));
          v15 = 1.0;
          v14 = 0.0;
        }
        --this[3];
LABEL_18:
        if ( v8 >= this[3] - 1 )
          return;
        v12 = v14;
        v10 = v15;
        v9 = v12;
      }
    }
  }
}
