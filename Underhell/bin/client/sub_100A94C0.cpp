int __thiscall sub_100A94C0(int *this, int a2)
{
  float *v3; // eax
  float *v4; // edi
  float *v5; // eax
  float *v6; // edi
  float *v7; // eax
  double v8; // st7
  float *v9; // eax
  float *v10; // eax
  int v11; // edx
  float *v12; // eax
  float v14; // [esp+4h] [ebp-28h]
  float v15; // [esp+8h] [ebp-24h]
  float v16; // [esp+Ch] [ebp-20h]
  float v17; // [esp+10h] [ebp-1Ch]
  float v18; // [esp+14h] [ebp-18h]
  float v19; // [esp+18h] [ebp-14h]
  float v20; // [esp+1Ch] [ebp-10h]
  float v21; // [esp+1Ch] [ebp-10h]
  float v22; // [esp+20h] [ebp-Ch]
  float v23; // [esp+20h] [ebp-Ch]
  float v24; // [esp+24h] [ebp-8h]
  float v25; // [esp+24h] [ebp-8h]
  float v26; // [esp+28h] [ebp-4h]

  v3 = (float *)this[2];
  v14 = v3[38];
  v15 = v3[39];
  v16 = v3[40];
  v4 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_10412D50 + 120))(dword_10412D50);
  v5 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_10412D50 + 120))(dword_10412D50);
  v20 = v5[6] - v4[3];
  v22 = v5[7] - v4[4];
  v24 = v5[8] - v4[5];
  v6 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_10412D50 + 120))(dword_10412D50);
  v7 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_10412D50 + 120))(dword_10412D50);
  v17 = v20 - (v7[12] - v6[9]);
  v18 = v22 - (v7[13] - v6[10]);
  v8 = v24 - (v7[14] - v6[11]);
  v26 = v8;
  v19 = v8 * *(float *)(a2 + 44);
  sub_1000DEC0((_DWORD *)this[1], 2);
  *(_BYTE *)(this[1] + 3528) = 0;
  *(_BYTE *)(this[1] + 3529) = 0;
  *(_BYTE *)(this[1] + 3530) = 0;
  *(float *)(this[1] + 3532) = 0.0;
  *(float *)(this[1] + 3536) = 0.0;
  *(float *)(this[1] + 3540) = 0.0;
  v9 = (float *)(*(int (__thiscall **)(int *, _DWORD))(*this + 28))(this, 0);
  v21 = *v9;
  v23 = v9[1];
  v25 = v9[2];
  v10 = (float *)this[1];
  v11 = *this;
  v10[55] = v21;
  v10[56] = v23;
  v10[57] = v25 - (v26 - v19);
  v12 = (float *)this[2];
  v12[38] = v14 - v17;
  v12[39] = v15 - v18;
  v12[40] = v16 - v19;
  return (*(int (__thiscall **)(int *))(v11 + 144))(this);
}
