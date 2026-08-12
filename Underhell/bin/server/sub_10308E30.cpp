char __thiscall sub_10308E30(float *this, _DWORD *a2, int a3, float *a4)
{
  int (__thiscall *v4)(_DWORD *); // eax
  float *v5; // eax
  int v6; // edx
  double v7; // st7
  int (__thiscall *v8)(_DWORD *); // eax
  float *v9; // eax
  long double v10; // st7
  int (__thiscall *v11)(_DWORD *); // eax
  float *v12; // eax
  int (__thiscall *v13)(_DWORD *); // eax
  float *v14; // eax
  char result; // al
  float *v16; // eax
  int v17; // [esp+24h] [ebp-48h] BYREF
  float v18; // [esp+28h] [ebp-44h]
  float v19; // [esp+2Ch] [ebp-40h]
  float v20[3]; // [esp+30h] [ebp-3Ch] BYREF
  float v21; // [esp+3Ch] [ebp-30h] BYREF
  float v22; // [esp+40h] [ebp-2Ch]
  float v23; // [esp+44h] [ebp-28h]
  float v24[3]; // [esp+48h] [ebp-24h] BYREF
  float v25; // [esp+54h] [ebp-18h] BYREF
  float v26; // [esp+58h] [ebp-14h]
  float v27; // [esp+5Ch] [ebp-10h]
  float v28; // [esp+60h] [ebp-Ch]
  float v29; // [esp+64h] [ebp-8h]
  float v30; // [esp+68h] [ebp-4h]

  sub_10308A90(this, v20, a2, a3, &v21, (float *)&a3);
  if ( *(_DWORD *)(dword_106E3074 + 48) == 3 )
  {
    v4 = *(int (__thiscall **)(_DWORD *))(*a2 + 576);
    v25 = v21 * 64.0;
    v26 = v22 * 64.0;
    v27 = 64.0 * v23;
    v5 = (float *)v4(a2);
    v6 = *a2;
    *(float *)&v17 = *v5 + v25;
    v18 = v5[1] + v26;
    v7 = v5[2];
    v8 = *(int (__thiscall **)(_DWORD *))(v6 + 576);
    v19 = v7 + v27;
    v9 = (float *)v8(a2);
    sub_1011C3A0(v9, (float *)&v17, 16.0, 255, 255, 0, 16, 1, 15.0);
  }
  if ( (unsigned __int8)sub_10308C20(v20, v24) )
    goto LABEL_6;
  v30 = COERCE_FLOAT(&v25);
  v10 = atan2(-v22, -v21);
  v28 = v10;
  v29 = v10 + 0.78539819;
  v25 = cos(v29);
  v26 = sin(v29);
  v11 = *(int (__thiscall **)(_DWORD *))(*a2 + 576);
  v27 = 0.0;
  v21 = v25 * *(float *)&a3;
  v22 = v26 * *(float *)&a3;
  v30 = 0.0 * *(float *)&a3;
  v23 = v30;
  v12 = (float *)v11(a2);
  *(float *)&v17 = *v12 + v21;
  v18 = v12[1] + v22;
  v19 = v12[2] + v23;
  if ( (unsigned __int8)sub_10308C20(&v17, v24) )
    goto LABEL_6;
  v29 = COERCE_FLOAT(&v25);
  v28 = v28 - 0.78539819;
  v25 = cos(v28);
  v26 = sin(v28);
  v13 = *(int (__thiscall **)(_DWORD *))(*a2 + 576);
  v27 = 0.0;
  v21 = v25 * *(float *)&a3;
  v22 = *(float *)&a3 * v26;
  v23 = v30;
  v14 = (float *)v13(a2);
  *(float *)&v17 = *v14 + v21;
  v18 = v14[1] + v22;
  v19 = v14[2] + v23;
  result = sub_10308C20(&v17, v24);
  if ( result )
  {
LABEL_6:
    v16 = a4;
    if ( a4 )
    {
      *a4 = v24[0];
      v16[1] = v24[1];
      v16[2] = v24[2];
    }
    return 1;
  }
  return result;
}
