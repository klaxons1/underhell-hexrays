void __thiscall sub_1018AE60(float *this, float *a2, float *a3)
{
  double v3; // st7
  int v4; // edx
  bool v5; // c0
  double v6; // st7
  int v7; // edx
  char v8; // fps^1
  double v9; // st7
  bool v10; // c0
  char v11; // c2
  bool v12; // c3
  char v13; // ah
  double v14; // st7
  bool v15; // c0
  bool v16; // c3
  double v17; // st7
  int v18; // edx
  bool v19; // c0
  double v20; // st7
  int v21; // edx
  double v22; // st7
  int v23; // edx
  bool v24; // c0
  double v25; // st7
  int v26; // edx
  double v27; // st7
  int v28; // edx

  if ( this[1] > (double)*a2 )
  {
    if ( this[2] > (double)a2[1] )
    {
      *a3 = this[1];
      a3[1] = this[2];
      a3[2] = this[3];
      v3 = sub_1018AD70(this, a3);
      *(float *)(v4 + 8) = v3;
      return;
    }
    v5 = this[5] < (double)a2[1];
    *a3 = this[1];
    if ( !v5 )
      goto LABEL_5;
LABEL_14:
    a3[1] = this[5];
    v25 = sub_1018AD70(this, a3);
    *(float *)(v26 + 8) = v25;
    return;
  }
  v9 = this[4];
  v10 = v9 < *a2;
  v11 = 0;
  v12 = v9 == *a2;
  v13 = v8;
  v14 = this[2];
  v15 = v14 < a2[1];
  v16 = v14 == a2[1];
  if ( __SETP__(v13 & 5, 0) )
  {
    if ( !v15 && !v16 )
    {
      *a3 = *a2;
      a3[1] = this[2];
      v22 = sub_1018AD70(this, a3);
      *(float *)(v23 + 8) = v22;
      return;
    }
    v24 = this[5] < (double)a2[1];
    *a3 = *a2;
    if ( v24 )
      goto LABEL_14;
    a3[1] = a2[1];
    a3[2] = a2[2];
    v27 = sub_1018AD70(this, a3);
    *(float *)(v28 + 8) = v27;
  }
  else if ( v15 || v16 )
  {
    v19 = this[5] < (double)a2[1];
    *a3 = this[4];
    if ( !v19 )
    {
LABEL_5:
      a3[1] = a2[1];
      v6 = sub_1018AD70(this, a3);
      *(float *)(v7 + 8) = v6;
      return;
    }
    a3[1] = this[5];
    a3[2] = this[6];
    v20 = sub_1018AD70(this, a3);
    *(float *)(v21 + 8) = v20;
  }
  else
  {
    *a3 = this[4];
    a3[1] = this[2];
    v17 = sub_1018AD70(this, a3);
    *(float *)(v18 + 8) = v17;
  }
}
