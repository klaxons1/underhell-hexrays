int __thiscall sub_1024E840(int this, int a2)
{
  int v3; // edx
  int v4; // esi
  int (__thiscall *v5)(float *); // eax
  float *v6; // esi
  float *v7; // eax
  float *v8; // eax
  double v9; // st7
  int v10; // eax
  double v11; // st6
  float *v12; // eax
  float *v13; // ebx
  double v14; // st7
  float *v15; // eax
  float *v16; // ebx
  double v17; // st7
  float v19; // [esp+Ch] [ebp-18h] BYREF
  float v20; // [esp+10h] [ebp-14h]
  float v21; // [esp+14h] [ebp-10h]
  float v22; // [esp+18h] [ebp-Ch] BYREF
  float v23; // [esp+1Ch] [ebp-8h]
  float v24; // [esp+20h] [ebp-4h]

  *(_DWORD *)(this + 800) = a2;
  sub_10112C00(this + 320, 1);
  sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 8);
  sub_100E0970(this, v3, 0, 0);
  sub_100E10C0(this, (float *)(a2 + 716));
  v4 = *(_DWORD *)(this + 800);
  v5 = *(int (__thiscall **)(float *))(*(_DWORD *)(v4 + 320) + 4);
  v6 = (float *)(v4 + 320);
  v7 = (float *)v5(v6);
  v22 = *v7 + 25.0;
  v23 = v7[1] + 25.0;
  v24 = v7[2];
  v8 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)v6 + 8))(v6);
  v19 = *v8 + 25.0;
  v20 = v8[1] + 25.0;
  v9 = v8[2];
  v10 = *(_DWORD *)(this + 800);
  v11 = v9 + 8.0;
  v21 = v11;
  v24 = v11 - (*(float *)(v10 + 824) - *(float *)(v10 + 836) + 8.0);
  v12 = (float *)sub_10022D70();
  *v12 = v6[5] - v6[2];
  v12[1] = v6[6] - v6[3];
  v12[2] = v6[7] - v6[4];
  if ( *v12 <= 50.0 )
  {
    v13 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)v6 + 8))(v6);
    v14 = (*v13 + *(float *)(*(int (__thiscall **)(float *))(*(_DWORD *)v6 + 4))(v6)) * 0.5;
    v22 = v14;
    v19 = v14 + 1.0;
  }
  v15 = (float *)sub_10022D70();
  *v15 = v6[5] - v6[2];
  v15[1] = v6[6] - v6[3];
  v15[2] = v6[7] - v6[4];
  if ( v15[1] <= 50.0 )
  {
    v16 = (float *)((*(int (__thiscall **)(float *))(*(_DWORD *)v6 + 8))(v6) + 4);
    v17 = (*(float *)((*(int (__thiscall **)(float *))(*(_DWORD *)v6 + 4))(v6) + 4) + *v16) * 0.5;
    v23 = v17;
    v20 = v17 + 1.0;
  }
  return sub_1025F360(this, &v22, &v19);
}
