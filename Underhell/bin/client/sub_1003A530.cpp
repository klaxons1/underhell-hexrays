void __thiscall sub_1003A530(unsigned __int8 *this, float *a2, float *a3, float *a4, float a5, float a6)
{
  double v8; // st7
  double v9; // st7
  int v10; // ebx
  float *v11; // edi
  int v12; // eax
  int v13; // edx
  float *v14; // esi
  float *v15; // eax
  unsigned __int8 *v16; // edx
  int v17; // esi
  float *v18; // ecx
  float *v19; // eax
  int v20[3]; // [esp+14h] [ebp-10h] BYREF
  unsigned __int8 *v21; // [esp+20h] [ebp-4h]
  int v22; // [esp+2Ch] [ebp+8h]
  float v23; // [esp+30h] [ebp+Ch]
  int v24; // [esp+34h] [ebp+10h]
  int v25; // [esp+38h] [ebp+14h]

  v8 = *a3;
  v21 = this;
  if ( fabs(v8 - *a4) < 0.001 || a5 <= (double)*a4 )
  {
    v17 = 0;
    if ( this[29] )
    {
      v18 = a2 + 2;
      v19 = a4 + 3;
      do
      {
        ++v17;
        *(v18 - 2) = *(v19 - 2);
        v19 += 3;
        v18 += 3;
        *(v18 - 4) = *(v19 - 4);
        *(v18 - 3) = *(v19 - 3);
      }
      while ( v17 < this[29] );
    }
  }
  else
  {
    v9 = a5 - *a4;
    if ( a6 <= v9 )
      v9 = a6;
    v10 = 0;
    *(float *)&v24 = 1.0 / (*a4 - *a3);
    if ( this[29] )
    {
      v11 = a2;
      v12 = (char *)a4 - (char *)a3;
      v13 = (char *)a2 - (char *)a3;
      v14 = a3 + 1;
      v22 = v12;
      v25 = v13;
      while ( 1 )
      {
        v23 = v9;
        v15 = (float *)sub_1003A470(v20, v14, (float *)((char *)v14 + v12), *(float *)&v24, v23);
        *v11 = *v15;
        v16 = v21;
        *(float *)((char *)v14 + v25) = v15[1];
        ++v10;
        v11[2] = v15[2];
        v14 += 3;
        v11 += 3;
        if ( v10 >= v16[29] )
          break;
        v12 = v22;
      }
    }
  }
}
