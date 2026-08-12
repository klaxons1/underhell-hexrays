int __thiscall sub_1002CDF0(_BYTE *this, int a2, float a3, int a4, float *a5, float *a6, int a7)
{
  float *v8; // ebx
  int v9; // edi
  double v10; // st7
  double v11; // st6
  float *v12; // esi
  int v13; // ebx
  float *v14; // eax
  double v15; // rt0
  double v16; // st7
  double v17; // st6
  double v18; // st4
  double v19; // rt1
  float v21; // [esp+0h] [ebp-2Ch]
  float v22; // [esp+Ch] [ebp-20h]
  float v23[2]; // [esp+1Ch] [ebp-10h] BYREF
  _BYTE *v24; // [esp+24h] [ebp-8h]
  char v25; // [esp+2Bh] [ebp-1h] BYREF

  v24 = this;
  sub_1022DFC0(&v25);
  v8 = a6;
  v22 = *a6 - *a5;
  sub_1002C7C0((int)this, v23, (float **)&a4, &a5, v22);
  v9 = 0;
  if ( this[29] )
  {
    v10 = a3;
    v11 = 2.0;
    v12 = a5 + 1;
    v13 = (char *)v8 - (char *)a5;
    v14 = (float *)(a4 - (_DWORD)a5);
    a5 = (float *)(a4 - (_DWORD)a5);
    while ( 1 )
    {
      if ( *(_BYTE *)(v9 + *((_DWORD *)v24 + 8)) )
      {
        v21 = v10;
        *(float *)(a2 + 4 * v9) = sub_1002BE10(
                                    v21,
                                    *(float *)((char *)v12 + (_DWORD)v14),
                                    *v12,
                                    *(float *)((char *)v12 + v13));
        v14 = a5;
        v16 = 2.0;
        v17 = a3;
      }
      else
      {
        v18 = v10 * v10 * v10;
        *(float *)(a2 + 4 * v9) = (v18 - v10 * v10) * (*(float *)((char *)v12 + v13) - *v12)
                                + (v18 - v10 * v10 * v11 + v10) * (*v12 - *(float *)((char *)v12 + (_DWORD)v14))
                                + (v18 * v11 - v10 * v10 * 3.0 + 1.0) * *v12
                                + (v10 * v10 * 3.0 - v18 * v11) * *(float *)((char *)v12 + v13);
        v19 = v11;
        v17 = v10;
        v16 = v19;
      }
      ++v9;
      ++v12;
      if ( v9 >= (unsigned __int8)v24[29] )
        break;
      v15 = v17;
      v11 = v16;
      v10 = v15;
    }
  }
  return sub_1022DFE0(&v25);
}
