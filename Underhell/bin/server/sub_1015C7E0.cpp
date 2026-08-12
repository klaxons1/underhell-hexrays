int __userpurge sub_1015C7E0@<eax>(_DWORD *a1@<ecx>, int a2@<edi>, int a3)
{
  float *v4; // eax
  float *v5; // edi
  float *v6; // eax
  int (__thiscall *v7)(int); // edx
  float *v8; // edi
  float *v9; // eax
  int *v10; // ecx
  double v11; // rt0
  double v12; // st6
  _BYTE *v13; // edi
  _BYTE *v14; // edi
  _BYTE *v15; // edi
  int v16; // edi
  double v17; // st7
  int v18; // ecx
  float *v19; // edi
  int v20; // edi
  int v21; // ecx
  float *v22; // edi
  int v23; // edi
  int v24; // ecx
  float *v25; // edi
  float *v26; // eax
  float *v27; // ecx
  float *v28; // eax
  int v29; // edx
  float v31; // [esp+4h] [ebp-34h]
  float v32; // [esp+8h] [ebp-30h]
  float v33; // [esp+Ch] [ebp-2Ch]
  float v34; // [esp+10h] [ebp-28h]
  float v35; // [esp+14h] [ebp-24h]
  float v36; // [esp+18h] [ebp-20h]
  float v37[2]; // [esp+1Ch] [ebp-1Ch] BYREF
  float v38; // [esp+24h] [ebp-14h]
  float v39; // [esp+28h] [ebp-10h]
  float v40; // [esp+2Ch] [ebp-Ch]
  float v41; // [esp+30h] [ebp-8h]
  float v42; // [esp+34h] [ebp-4h]
  float v43; // [esp+40h] [ebp+8h]
  float v44; // [esp+40h] [ebp+8h]

  v4 = (float *)a1[2];
  v34 = v4[38];
  v35 = v4[39];
  v36 = v4[40];
  v5 = (float *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC, a2);
  v6 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC);
  v39 = v6[6] - v5[3];
  v40 = v6[7] - v5[4];
  v7 = *(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120);
  v41 = v6[8] - v5[5];
  v8 = (float *)v7(dword_106B3CDC);
  v9 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC);
  v10 = (int *)a1[1];
  v11 = v9[14] - v8[11];
  v31 = v39 - (v9[12] - v8[9]);
  v32 = v40 - (v9[13] - v8[10]);
  v12 = (v41 - v11) * *(float *)(a3 + 44);
  v42 = v41 - v11 - v12;
  sub_100EA9A0(v10, 2);
  v13 = (_BYTE *)(a1[1] + 2272);
  if ( *v13 )
  {
    (**(void (__thiscall ***)(int, int))(a1[1] + 2192))(a1[1] + 2192, a1[1] + 2272);
    *v13 = 0;
  }
  v14 = (_BYTE *)(a1[1] + 2273);
  if ( *v14 )
  {
    (**(void (__thiscall ***)(int, int))(a1[1] + 2192))(a1[1] + 2192, a1[1] + 2273);
    *v14 = 0;
  }
  v15 = (_BYTE *)(a1[1] + 2274);
  if ( *v15 )
  {
    (**(void (__thiscall ***)(int, int))(a1[1] + 2192))(a1[1] + 2192, a1[1] + 2274);
    *v15 = 0;
  }
  v16 = a1[1];
  v17 = 0.0;
  v18 = *(_DWORD *)(v16 + 2276);
  v19 = (float *)(v16 + 2276);
  if ( v18 != COERCE_INT(0.0) )
  {
    (**((void (__thiscall ***)(int, float *))v19 - 21))((int)(v19 - 21), v19);
    v17 = 0.0;
    *v19 = 0.0;
  }
  v20 = a1[1];
  v43 = v17;
  v21 = *(_DWORD *)(v20 + 2280);
  v22 = (float *)(v20 + 2280);
  if ( v21 != LODWORD(v43) )
  {
    (**((void (__thiscall ***)(int, float *))v22 - 22))((int)(v22 - 22), v22);
    v17 = 0.0;
    *v22 = 0.0;
  }
  v23 = a1[1];
  v44 = v17;
  v24 = *(_DWORD *)(v23 + 2284);
  v25 = (float *)(v23 + 2284);
  if ( v24 != LODWORD(v44) )
  {
    (**((void (__thiscall ***)(int, float *))v25 - 23))((int)(v25 - 23), v25);
    *v25 = 0.0;
  }
  v26 = (float *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*a1 + 28))(a1, 0);
  v37[0] = *v26;
  v37[1] = v26[1];
  v38 = v26[2];
  v27 = (float *)a1[1];
  v38 = v38 - v42;
  sub_100DC4E0(v27, v37);
  v28 = (float *)a1[2];
  v29 = *a1;
  v28[38] = v34 - v31;
  v28[39] = v35 - v32;
  v33 = v12;
  v28[40] = v36 - v33;
  return (*(int (__thiscall **)(_DWORD *))(v29 + 144))(a1);
}
