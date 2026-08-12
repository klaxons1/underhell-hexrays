void __thiscall sub_10036980(unsigned __int8 *this, int a2, float *a3, float *a4)
{
  int v6; // edi
  double v7; // st7
  int v8; // esi
  float *v9; // edx
  float *v10; // eax
  double v11; // st6
  double v12; // st5
  double v13; // st4
  double v14; // rt0
  int v15; // ecx
  int v16; // edx
  float *v17; // eax
  double v18; // st6
  double v19; // st5
  double v20; // st4
  double v21; // st6
  int v22; // [esp+20h] [ebp+Ch]

  if ( a3 == a4 || fabs(*a3 - *a4) < 0.000099999997 )
  {
    v15 = 0;
    if ( this[29] )
    {
      v16 = a2 + 8;
      v17 = a3 + 3;
      do
      {
        ++v15;
        v18 = *(v17 - 2) * 0.0;
        v17 += 3;
        v16 += 12;
        v19 = *(v17 - 4) * 0.0;
        v20 = v18;
        v21 = *(v17 - 3) * 0.0;
        *(float *)(v16 - 20) = v20;
        *(float *)(v16 - 16) = v19;
        *(float *)(v16 - 12) = v21;
      }
      while ( v15 < this[29] );
    }
  }
  else
  {
    v6 = 0;
    v7 = 1.0 / (*a4 - *a3);
    if ( this[29] )
    {
      v8 = a2;
      v9 = a4 + 1;
      v22 = (char *)a4 - (char *)a3;
      v10 = a3 + 2;
      do
      {
        v11 = *v9 - *(v10 - 1);
        ++v6;
        v12 = *(float *)((char *)v10 + v22) - *v10;
        v10 += 3;
        v13 = v9[2];
        v9 += 3;
        v8 += 12;
        v14 = v13 - *(v10 - 2);
        *(float *)(v8 - 12) = v11 * v7;
        *(float *)((char *)v9 + a2 - (_DWORD)a4 - 12) = v12 * v7;
        *(float *)((char *)v10 + a2 - (_DWORD)a3 - 12) = v14 * v7;
      }
      while ( v6 < this[29] );
    }
  }
}
