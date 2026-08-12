int __thiscall sub_100AC4C0(_DWORD *this)
{
  float *v2; // eax
  float *v3; // ecx
  float *v4; // eax
  int v5; // esi
  float v6; // ecx
  float v7; // edx
  float v8; // eax
  int v9; // edx
  int v10; // eax
  double v11; // st7
  float *v12; // esi
  float *v13; // eax
  int v14; // edx
  double v15; // st7
  int (*v16)(void); // eax
  float *v17; // esi
  float *v18; // eax
  double v19; // st7
  double v20; // st6
  double v21; // st5
  float *v22; // eax
  double v23; // st6
  double v24; // rt0
  float v26; // [esp+4h] [ebp-14h]
  float v27; // [esp+8h] [ebp-10h]
  float v28; // [esp+Ch] [ebp-Ch]
  float v29; // [esp+10h] [ebp-8h]
  float v30; // [esp+14h] [ebp-4h]

  sub_1000DEB0((_DWORD *)this[1], 2);
  *(_BYTE *)(this[1] + 3528) = 1;
  *(_BYTE *)(this[1] + 3529) = 0;
  v2 = (float *)(*(int (__thiscall **)(_DWORD *, int))(*this + 28))(this, 1);
  v3 = (float *)this[1];
  v3[55] = *v2;
  v3[56] = v2[1];
  v3[57] = v2[2];
  if ( sub_100F7AF0(v3) )
  {
    v4 = (float *)(this[2] + 152);
    v5 = 0;
    do
    {
      v6 = *v4;
      v7 = v4[1];
      v8 = v4[2];
      v27 = v6;
      v28 = v7;
      v9 = *(_DWORD *)dword_10412D50;
      v29 = v8;
      v30 = *(float *)(v5 + (*(int (__thiscall **)(int))(v9 + 120))(dword_10412D50) + 36);
      v10 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10412D50 + 120))(dword_10412D50);
      v11 = v30 - *(float *)(v5 + v10 + 12);
      v4 = (float *)(this[2] + 152);
      v5 += 4;
      *(float *)((char *)&v26 + v5) = *(float *)((char *)&v26 + v5) - v11;
      *v4 = v27;
      v4[1] = v28;
      v4[2] = v29;
    }
    while ( v5 < 12 );
  }
  else
  {
    v12 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_10412D50 + 120))(dword_10412D50);
    v13 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_10412D50 + 120))(dword_10412D50);
    v14 = *(_DWORD *)dword_10412D50;
    v27 = v13[6] - v12[3];
    v28 = v13[7] - v12[4];
    v15 = v13[8];
    v16 = *(int (**)(void))(v14 + 120);
    v29 = v15 - v12[5];
    v17 = (float *)v16();
    v18 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_10412D50 + 120))(dword_10412D50);
    v19 = v18[12] - v17[9];
    v20 = v18[13] - v17[10];
    v21 = v18[14];
    v22 = (float *)this[2];
    v23 = v28 - v20 + v22[39];
    v24 = v29 - (v21 - v17[11]) + v22[40];
    v22[38] = v27 - v19 + v22[38];
    v22[39] = v23;
    v22[40] = v24;
  }
  sub_100AC020(this, 1);
  return (*(int (__thiscall **)(_DWORD *))(*this + 144))(this);
}
