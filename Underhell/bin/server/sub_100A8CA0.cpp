bool __cdecl sub_100A8CA0(int *a1, int a2, float a3, char a4)
{
  int v5; // ecx
  double v6; // st7
  float *v7; // eax
  int v8; // edx
  int (__thiscall *v9)(int, _BYTE *); // edx
  float *v10; // esi
  float *v11; // eax
  double v12; // st6
  double v13; // st7
  double v14; // st7
  double v15; // st6
  float *v16; // eax
  int (__thiscall *v17)(int, _BYTE *); // edx
  float *v18; // esi
  float *v19; // eax
  double v20; // st7
  _BYTE v22[12]; // [esp+4h] [ebp-30h] BYREF
  _BYTE v23[12]; // [esp+10h] [ebp-24h] BYREF
  float v24; // [esp+1Ch] [ebp-18h]
  float v25; // [esp+20h] [ebp-14h]
  float v26; // [esp+24h] [ebp-10h]
  float v27; // [esp+28h] [ebp-Ch] BYREF
  float v28; // [esp+2Ch] [ebp-8h]
  float v29; // [esp+30h] [ebp-4h]
  int v30; // [esp+3Ch] [ebp+8h]

  if ( a1 )
    v5 = (*(int (__thiscall **)(int *))(*a1 + 288))(a1);
  else
    v5 = 0;
  v6 = a3;
  if ( a3 >= 360.0 || !v5 )
    return v6 >= 0.0;
  *(float *)&v30 = cos(v6 * 0.5 * 0.017453292);
  if ( a4 )
  {
    v7 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v5 + 924))(v5, v23);
    v8 = *a1;
    v24 = *v7;
    v9 = *(int (__thiscall **)(int, _BYTE *))(v8 + 504);
    v25 = v7[1];
    v26 = v7[2];
    v10 = (float *)v9((int)a1, v23);
    v11 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a2 + 504))(a2, v22);
    v12 = v11[1] - v10[1];
    v13 = v11[2] - v10[2];
    v27 = *v11 - *v10;
    v28 = v12;
    v29 = v13;
    off_10689714();
    v14 = v28 * v25 + v27 * v24;
    v15 = v26 * v29;
  }
  else
  {
    v16 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v5 + 920))(v5, v22);
    v24 = *v16;
    v17 = *(int (__thiscall **)(int, _BYTE *))(*a1 + 504);
    v25 = v16[1];
    v18 = (float *)v17((int)a1, v22);
    v19 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a2 + 504))(a2, v23);
    v20 = v19[1] - v18[1];
    v27 = *v19 - *v18;
    v28 = v20;
    v29 = 0.0;
    sub_100196B0(&v27);
    v14 = v28 * v25;
    v15 = v27 * v24;
  }
  if ( v14 + v15 >= *(float *)&v30 )
  {
    v6 = a3;
    return v6 >= 0.0;
  }
  return a3 < 0.0;
}
