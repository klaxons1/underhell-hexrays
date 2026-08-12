int __thiscall sub_10329F40(int this, float a2)
{
  float *v3; // eax
  float v4; // ecx
  float v5; // edx
  float v6; // eax
  double v7; // st7
  int v8; // ecx
  double v9; // st7
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  float v14[3]; // [esp+18h] [ebp-3Ch] BYREF
  float v15[3]; // [esp+24h] [ebp-30h] BYREF
  float v16[6]; // [esp+30h] [ebp-24h] BYREF
  float v17; // [esp+48h] [ebp-Ch] BYREF
  float v18; // [esp+4Ch] [ebp-8h]
  float v19; // [esp+50h] [ebp-4h]

  v3 = (float *)sub_100217F0((void *)this);
  v4 = *v3;
  v5 = v3[1];
  v6 = v3[2];
  v17 = v4;
  v7 = v4 - *(float *)(this + 716);
  v18 = v5;
  v19 = v6;
  v16[3] = v7;
  v16[4] = v5 - *(float *)(this + 720);
  v16[5] = v6 - *(float *)(this + 724);
  off_10689714();
  sub_10328520((float *)this, a2, (float *)(this + 3804), 1600.0, 1600.0, 0.050000001);
  v8 = *(_DWORD *)(this + 424);
  v17 = 1.0;
  v18 = 0.0;
  v19 = 0.0;
  (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)v8 + 228))(v8, v16, &v17);
  v9 = *(float *)(this + 3816);
  v10 = *(_DWORD *)(this + 424);
  v15[0] = v16[0] * v9;
  v15[1] = v16[1] * v9;
  v15[2] = v9 * v16[2];
  (*(void (__thiscall **)(int, float *))(*(_DWORD *)v10 + 244))(v10, v15);
  v11 = *(_DWORD *)(this + 424);
  v17 = 0.0;
  v18 = 1.0;
  v19 = 0.0;
  (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)v11 + 228))(v11, v14, &v17);
  v12 = *(_DWORD *)(this + 424);
  v17 = v14[0] * 2000.0;
  v18 = v14[1] * 2000.0;
  v19 = 2000.0 * v14[2];
  return (*(int (__thiscall **)(int, float *))(*(_DWORD *)v12 + 236))(v12, &v17);
}
