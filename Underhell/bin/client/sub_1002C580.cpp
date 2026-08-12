int __thiscall sub_1002C580(int this, int a2, float a3, int a4, float *a5, int a6, int a7)
{
  unsigned int v8; // eax
  int v9; // edi
  float *v10; // esi
  double v11; // st7
  double v12; // st6
  float *v13; // esi
  int v14; // ecx
  float *v15; // edx
  double v16; // rt0
  double v17; // st7
  double v18; // st7
  double v19; // st6
  double v20; // st4
  double v21; // rt1
  float v23; // [esp+0h] [ebp-2Ch]
  float v24; // [esp+Ch] [ebp-20h]
  int v25[2]; // [esp+1Ch] [ebp-10h] BYREF
  int v26; // [esp+24h] [ebp-8h]
  char v27; // [esp+2Bh] [ebp-1h] BYREF

  sub_1022DFC0(&v27);
  v8 = *(unsigned __int8 *)(this + 29);
  *(float *)v25 = 0.0;
  v9 = 0;
  v26 = 0;
  v25[1] = 0;
  sub_1002BF20(v25, v8);
  v10 = a5;
  v24 = *(float *)a6 - *a5;
  sub_1002BD30(this, (int)v25, &a4, (int)&a5, v24);
  if ( *(_BYTE *)(this + 29) )
  {
    v11 = a3;
    v12 = 2.0;
    v13 = (float *)*((_DWORD *)v10 + 2);
    v14 = *(_DWORD *)(a4 + 8) - (_DWORD)v13;
    v15 = (float *)(a2 - (_DWORD)v13);
    a4 = v14;
    a5 = (float *)(a2 - (_DWORD)v13);
    while ( 1 )
    {
      if ( *(_BYTE *)(v9 + *(_DWORD *)(this + 32)) )
      {
        v23 = v11;
        v17 = sub_1002BE10(v23, *(float *)((char *)v13 + v14), *v13, *(float *)(*(_DWORD *)(a6 + 8) + 4 * v9));
        v15 = a5;
        *(float *)((char *)v13 + (_DWORD)a5) = v17;
        v18 = 2.0;
        v14 = a4;
        v19 = a3;
      }
      else
      {
        v20 = v11 * v11 * v11;
        *(float *)((char *)v13 + (_DWORD)v15) = (v20 - v11 * v11) * (*(float *)(*(_DWORD *)(a6 + 8) + 4 * v9) - *v13)
                                              + (v20 - v11 * v11 * v12 + v11) * (*v13 - *(float *)((char *)v13 + v14))
                                              + (v20 * v12 - v11 * v11 * 3.0 + 1.0) * *v13
                                              + (v11 * v11 * 3.0 - v20 * v12) * *(float *)(*(_DWORD *)(a6 + 8) + 4 * v9);
        v21 = v12;
        v19 = v11;
        v18 = v21;
      }
      ++v9;
      ++v13;
      if ( v9 >= *(unsigned __int8 *)(this + 29) )
        break;
      v16 = v19;
      v12 = v18;
      v11 = v16;
    }
  }
  sub_10034930(v26);
  v26 = 0;
  return sub_1022DFE0(&v27);
}
