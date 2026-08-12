void __thiscall sub_102187D0(float *this, int a2, int a3, int a4)
{
  int i; // ebx
  int v7; // ecx
  float *v8; // edi
  double v9; // st7
  double v10; // st6
  double v11; // st5
  float *v12; // eax
  double v13; // st4
  double v14; // st3
  double v15; // st2
  double v16; // rt1
  double v17; // st3
  double v18; // st5
  double v19; // st7
  double v20; // st6
  double v21; // st5
  double v22; // rt1
  double v23; // st5
  double v24; // rt2
  double v25; // st5
  double v26; // st6
  double v27; // st7
  float v28; // [esp+0h] [ebp-2Ch]
  float v29; // [esp+14h] [ebp-18h] BYREF
  float v30; // [esp+18h] [ebp-14h]
  float v31; // [esp+1Ch] [ebp-10h]
  float v32; // [esp+20h] [ebp-Ch]
  float v33; // [esp+24h] [ebp-8h]
  float v34; // [esp+28h] [ebp-4h]
  float v35; // [esp+30h] [ebp+4h]

  for ( i = 0; i < *(_DWORD *)(a2 + 40); v8[8] = v27 )
  {
    v7 = i & 3;
    v8 = (float *)(*(_DWORD *)(a2 + 6068) + 4 * (v7 + i / 4 * *(_DWORD *)(a2 + 6324)));
    v9 = *v8;
    v10 = v8[4];
    v11 = v8[8];
    v12 = (float *)(*(_DWORD *)(a2 + 6076) + 4 * (v7 + i / 4 * *(_DWORD *)(a2 + 6332)));
    v13 = *v12;
    v32 = *v12;
    v14 = v12[4];
    v33 = v12[4];
    v15 = v12[8];
    v34 = v12[8];
    v16 = v14;
    v17 = v9 - v13;
    v29 = v17;
    v30 = v10 - v16;
    v18 = v11 - v15;
    v31 = v18;
    v28 = (v10 - v16) * (v10 - v16) + v17 * v17 + v18 * v18;
    v35 = off_103EDFE0(v28);
    off_103EDFF0(&v29);
    v19 = this[11] * *(float *)(a2 + 44);
    if ( v35 < v19 )
      v19 = v35;
    ++i;
    v20 = v29 * v19;
    v29 = v20;
    v21 = v19 * v30;
    v30 = v21;
    v22 = v21;
    v23 = v19 * v31;
    v31 = v23;
    v24 = v23;
    v25 = v20;
    v26 = v22 + v33;
    v27 = v24 + v34;
    *v8 = v25 + v32;
    v8[4] = v26;
  }
}
