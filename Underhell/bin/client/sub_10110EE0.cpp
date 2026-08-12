int __thiscall sub_10110EE0(unsigned __int8 *this, int a2, float a3, int a4, int a5, float *a6, int a7)
{
  unsigned int v8; // eax
  int v9; // esi
  float *v10; // ebx
  bool v11; // zf
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // ebx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // edx
  double v21; // st7
  float *v22; // eax
  unsigned __int8 *v23; // ecx
  int v24; // edx
  float v26; // [esp+Ch] [ebp-64h]
  float v27[3]; // [esp+1Ch] [ebp-54h] BYREF
  int v28[3]; // [esp+28h] [ebp-48h] BYREF
  int v29[3]; // [esp+34h] [ebp-3Ch] BYREF
  int v30[3]; // [esp+40h] [ebp-30h] BYREF
  int v31[3]; // [esp+4Ch] [ebp-24h] BYREF
  int v32[2]; // [esp+58h] [ebp-18h] BYREF
  int v33; // [esp+60h] [ebp-10h]
  unsigned __int8 *v34; // [esp+64h] [ebp-Ch]
  int v35; // [esp+68h] [ebp-8h]
  char v36; // [esp+6Fh] [ebp-1h] BYREF

  v34 = this;
  sub_1022DFC0(&v36);
  v8 = this[29];
  *(float *)v32 = 0.0;
  v9 = 0;
  v33 = 0;
  v32[1] = 0;
  sub_1010FBA0(v32, v8);
  v10 = a6;
  v26 = *a6 - *(float *)a5;
  sub_1010FD90(this, (int)v32, &a4, (int)&a5, v26);
  v11 = this[29] == 0;
  v35 = 0;
  if ( !v11 )
  {
    do
    {
      if ( *(_BYTE *)(v35 + *((_DWORD *)v34 + 8)) )
      {
        v12 = *((_DWORD *)v10 + 2);
        v13 = *(_DWORD *)(a5 + 8);
        v14 = *(_DWORD *)(a4 + 8);
        v31[0] = *(_DWORD *)(v9 + v12);
        v15 = *(_DWORD *)(v9 + v12 + 4);
        v31[2] = *(_DWORD *)(v9 + v12 + 8);
        v30[0] = *(_DWORD *)(v9 + v13);
        v16 = *(_DWORD *)(v9 + v13 + 4);
        v17 = *(_DWORD *)(v9 + v13 + 8);
        v30[1] = v16;
        v18 = *(_DWORD *)(v9 + v14);
        v30[2] = v17;
        v19 = *(_DWORD *)(v9 + v14 + 4);
        v20 = *(_DWORD *)(v9 + v14 + 8);
        v29[0] = v18;
        v29[1] = v19;
        v29[2] = v20;
        v31[1] = v15;
        sub_100353D0((float *)v28, a3, (float *)v29, (float *)v30, (float *)v31);
        v10 = a6;
        *(float *)(a2 + v9) = *(float *)v28;
        *(float *)(a2 + v9 + 4) = *(float *)&v28[1];
        v21 = *(float *)&v28[2];
      }
      else
      {
        v22 = sub_100353D0(
                v27,
                a3,
                (float *)(v9 + *(_DWORD *)(a4 + 8)),
                (float *)(v9 + *(_DWORD *)(a5 + 8)),
                (float *)(v9 + *((_DWORD *)v10 + 2)));
        *(float *)(a2 + v9) = *v22;
        *(float *)(a2 + v9 + 4) = v22[1];
        v21 = v22[2];
      }
      v23 = v34;
      *(float *)(a2 + v9 + 8) = v21;
      v24 = v23[29];
      v9 += 12;
      ++v35;
    }
    while ( v35 < v24 );
  }
  sub_10034930(v33);
  v33 = 0;
  return sub_1022DFE0(&v36);
}
