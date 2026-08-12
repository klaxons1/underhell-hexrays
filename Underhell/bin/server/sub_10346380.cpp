int __usercall sub_10346380@<eax>(_DWORD *a1@<ecx>, int a2@<ebx>)
{
  long double v3; // st4
  long double v4; // st3
  long double v5; // rt2
  long double v6; // st3
  int v7; // eax
  int v8; // eax
  int v9; // edx
  int (__thiscall *v10)(_DWORD *); // edx
  int v11; // eax
  int v13[3]; // [esp+14h] [ebp-5Ch] BYREF
  int v14; // [esp+20h] [ebp-50h] BYREF
  float v15; // [esp+24h] [ebp-4Ch]
  float v16; // [esp+28h] [ebp-48h]
  int v17; // [esp+2Ch] [ebp-44h] BYREF
  float v18; // [esp+30h] [ebp-40h]
  float v19; // [esp+34h] [ebp-3Ch]
  int v20[3]; // [esp+38h] [ebp-38h] BYREF
  int v21[3]; // [esp+44h] [ebp-2Ch] BYREF
  float v22; // [esp+50h] [ebp-20h] BYREF
  float v23; // [esp+54h] [ebp-1Ch]
  int v24; // [esp+58h] [ebp-18h]
  float *v25; // [esp+5Ch] [ebp-14h]
  float *v26; // [esp+60h] [ebp-10h]
  float v27; // [esp+64h] [ebp-Ch]
  float v28; // [esp+68h] [ebp-8h] BYREF
  float v29; // [esp+6Ch] [ebp-4h] BYREF

  if ( (a1[59] & 0x400000) != 0 )
  {
    v27 = acos(0.7070000171661377);
    (*(void (__thiscall **)(_DWORD *, float *))(*a1 + 920))(a1, &v22);
    v25 = &v28;
    v26 = &v29;
    v28 = cos(v27);
    v29 = sin(v27);
    *(float *)v21 = v22 * v28 - v23 * v29;
    *(float *)&v21[1] = v28 * v23 + v29 * v22;
    v21[2] = v24;
    v3 = -v27;
    v4 = sin(v3);
    v29 = v4;
    v5 = v4;
    v6 = cos(v3);
    v28 = v6;
    *(float *)v20 = v22 * v6 - v23 * v5;
    *(float *)&v20[1] = v6 * v23 + v5 * v22;
    v20[2] = v24;
    *(float *)&v17 = 200.0;
    v18 = 0.0;
    v19 = 40.0;
    *(float *)&v14 = 0.0;
    v15 = 0.0;
    v16 = -40.0;
    *(float *)&v13[1] = 0.0;
    v13[0] = 50;
    v7 = (*(int (__thiscall **)(_DWORD *))(*a1 + 504))(a1);
    sub_1011BB60(v7, (int)v13, (int)&v14, (int)&v17, (int)v21, 255, 255, 0, *(float *)v13);
    *(float *)&v14 = 200.0;
    v15 = 0.0;
    v16 = 40.0;
    *(float *)&v17 = 0.0;
    v18 = 0.0;
    v19 = -40.0;
    *(float *)v13 = 0.0;
    v8 = (*(int (__thiscall **)(_DWORD *))(*a1 + 504))(a1);
    sub_1011BB60(v8, (int)v13, (int)&v17, (int)&v14, (int)v20, 255, 255, 0, COERCE_FLOAT(50));
    v9 = *a1;
    *(float *)&v14 = 2.0;
    v10 = *(int (__thiscall **)(_DWORD *))(v9 + 504);
    v15 = 2.0;
    v16 = 2.0;
    *(float *)&v17 = -2.0;
    v18 = -2.0;
    v19 = -2.0;
    v11 = v10(a1);
    sub_1011BB20(v11, (int)v13, (int)&v17, (int)&v14, 255, 255, 0, COERCE_FLOAT(128));
  }
  return sub_1002D900(a1, a2);
}
