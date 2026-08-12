int __thiscall sub_10111050(unsigned __int8 *this, int a2, float a3, int a4, int a5, float *a6, int a7)
{
  unsigned int v8; // eax
  float *v9; // edi
  float *v10; // esi
  int v11; // ebx
  int v12; // edx
  int v13; // ecx
  int v14; // edi
  int v15; // ecx
  int v16; // edx
  double v17; // st7
  float *v18; // eax
  unsigned __int8 *v19; // ecx
  int v20; // edx
  float v22; // [esp+Ch] [ebp-58h]
  int v23[3]; // [esp+1Ch] [ebp-48h] BYREF
  int v24[3]; // [esp+28h] [ebp-3Ch] BYREF
  int v25[3]; // [esp+34h] [ebp-30h] BYREF
  int v26[3]; // [esp+40h] [ebp-24h] BYREF
  int v27[2]; // [esp+4Ch] [ebp-18h] BYREF
  int v28; // [esp+54h] [ebp-10h]
  unsigned __int8 *v29; // [esp+58h] [ebp-Ch]
  int v30; // [esp+5Ch] [ebp-8h]
  char v31; // [esp+63h] [ebp-1h] BYREF

  v29 = this;
  sub_1022DFC0(&v31);
  v8 = this[29];
  *(float *)v27 = 0.0;
  v28 = 0;
  v27[1] = 0;
  sub_1010FBA0(v27, v8);
  v9 = a6;
  v22 = *a6 - *(float *)a5;
  sub_10110780((int)this, (int)v27, (float **)&a4, (float **)&a5, v22);
  v30 = 0;
  if ( this[29] )
  {
    v10 = (float *)(a2 + 8);
    v11 = -8 - a2;
    while ( 1 )
    {
      v12 = *(_DWORD *)(a5 + 8);
      v13 = *((_DWORD *)v9 + 2);
      if ( *(_BYTE *)(v30 + *((_DWORD *)v29 + 8)) )
      {
        v26[0] = *(int *)((char *)v10 + v11 + v13);
        v14 = *(_DWORD *)((char *)v10 + v11 + v13 + 4);
        v26[2] = *(int *)((char *)v10 + v11 + v13 + 8);
        v25[0] = *(int *)((char *)v10 + v11 + v12);
        v15 = *(_DWORD *)((char *)v10 + v11 + v12 + 4);
        v16 = *(_DWORD *)((char *)v10 + v11 + v12 + 8);
        v25[1] = v15;
        v25[2] = v16;
        v26[1] = v14;
        sub_1003A3C0(v24, a3, (int)v24, (float *)v25, (float *)v26);
        *(v10 - 2) = *(float *)v24;
        *(v10 - 1) = *(float *)&v24[1];
        v17 = *(float *)&v24[2];
      }
      else
      {
        v18 = (float *)sub_1003A3C0(
                         v23,
                         a3,
                         (int)v10 + v11 + *(_DWORD *)(a4 + 8),
                         (float *)((char *)v10 + v11 + v12),
                         (float *)((char *)v10 + v11 + v13));
        *(v10 - 2) = *v18;
        *(v10 - 1) = v18[1];
        v17 = v18[2];
      }
      v19 = v29;
      *v10 = v17;
      v20 = v19[29];
      v10 += 3;
      if ( ++v30 >= v20 )
        break;
      v9 = a6;
    }
  }
  sub_10034930(v28);
  v28 = 0;
  return sub_1022DFE0(&v31);
}
