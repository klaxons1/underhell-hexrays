float *__cdecl sub_10273260(float *a1)
{
  _DWORD *v1; // eax
  _DWORD *v2; // esi
  float *result; // eax
  float v4; // edx
  float v5; // ecx
  int (__thiscall *v6)(_DWORD *, char *); // edx
  double v7; // st5
  float *v8; // eax
  float v9; // edx
  double v10; // st7
  double v11; // st7
  char v12[12]; // [esp+4h] [ebp-3Ch] BYREF
  float v13; // [esp+10h] [ebp-30h]
  float v14; // [esp+14h] [ebp-2Ch]
  float v15; // [esp+18h] [ebp-28h]
  float v16; // [esp+1Ch] [ebp-24h]
  float v17; // [esp+20h] [ebp-20h]
  float v18; // [esp+24h] [ebp-1Ch]
  float v19; // [esp+28h] [ebp-18h]
  float v20; // [esp+2Ch] [ebp-14h]
  float v21; // [esp+30h] [ebp-10h]
  float v22; // [esp+34h] [ebp-Ch] BYREF
  float v23; // [esp+38h] [ebp-8h]
  float v24; // [esp+3Ch] [ebp-4h]

  v1 = (_DWORD *)sub_1025FB50(dword_1060F300);
  v2 = v1;
  if ( v1 )
  {
    sub_100F5A30(v1, (int)&v22, 0, 0);
    v20 = v23;
    v21 = 0.0;
    v19 = v22;
    off_10689714();
    off_10689714();
    v6 = *(int (__thiscall **)(_DWORD *, char *))(*v2 + 504);
    v7 = flt_10608FBC / (v20 * v23 + v19 * v22 + v21 * v24);
    v16 = v22 * v7;
    v17 = v23 * v7;
    v18 = v24 * v7;
    v8 = (float *)v6(v2, v12);
    v13 = *v8 + v16;
    v14 = v8[1] + v17;
    v9 = v14;
    v10 = v8[2];
    result = a1;
    v11 = v10 + v18;
    *a1 = v13;
    a1[1] = v9;
    v15 = v11;
    a1[2] = v15;
  }
  else
  {
    result = a1;
    v4 = flt_106F1CAC;
    *a1 = flt_106F1CA8;
    v5 = flt_106F1CB0;
    a1[1] = v4;
    a1[2] = v5;
  }
  return result;
}
