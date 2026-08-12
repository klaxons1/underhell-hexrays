void __thiscall sub_10381E50(int *this, int a2, int a3)
{
  BOOL v5; // esi
  double v6; // st7
  double v7; // st6
  double v8; // st5
  double v9; // st7
  double v10; // st6
  double v11; // st7
  double v12; // st7
  double v13; // st7
  int *v14; // ecx
  int v15; // edx
  double (__thiscall *v16)(int *); // eax
  double v17; // st7
  double v18; // st6
  double v19; // st5
  double v20; // rt0
  double v21; // st5
  double v22; // st7
  int *v23; // ecx
  int v24; // edx
  double (__thiscall *v25)(int *); // eax
  double v26; // st7
  float v27; // [esp+10h] [ebp-88h]
  _DWORD v28[20]; // [esp+20h] [ebp-78h] BYREF
  int v29[3]; // [esp+70h] [ebp-28h] BYREF
  float v30; // [esp+7Ch] [ebp-1Ch]
  float v31; // [esp+80h] [ebp-18h]
  float v32; // [esp+84h] [ebp-14h]
  int v33; // [esp+88h] [ebp-10h] BYREF
  float v34; // [esp+8Ch] [ebp-Ch]
  float v35; // [esp+90h] [ebp-8h]
  int *v36; // [esp+94h] [ebp-4h]
  float v37; // [esp+A0h] [ebp+8h]
  int v38; // [esp+A4h] [ebp+Ch]

  v36 = this;
  v5 = a2 == 0;
  v6 = *(float *)(a3 + 12 * v5 + 36);
  v7 = *(float *)(a3 + 12 * v5 + 32);
  v8 = *(float *)(a3 + 12 * v5 + 40);
  v38 = *(_DWORD *)(a3 + 4 * v5 + 104);
  v27 = v6 * v6 + v7 * v7 + v8 * v8;
  v9 = off_10689708(v27);
  v10 = 600.0;
  if ( v9 <= 600.0 )
  {
    v10 = 300.0;
    if ( v9 >= 300.0 )
      v10 = v9;
    v11 = 300.0;
  }
  else
  {
    v11 = 300.0;
  }
  v12 = (v10 - v11) * 0.0033333334;
  v13 = 3.0 * (v12 * v12) - v12 * (v12 * v12 + v12 * v12);
  if ( 0.0 != v13 )
  {
    v37 = v13 * 20.0;
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(a3 + 28) + 4))(*(_DWORD *)(a3 + 28), v29);
    v14 = *(int **)(a3 + 4 * a2);
    v15 = *v14;
    v30 = *(float *)(a3 + 12 * a2 + 56) * 2.0;
    v31 = *(float *)(a3 + 12 * a2 + 60) * 2.0;
    v16 = *(double (__thiscall **)(int *))(v15 + 116);
    v32 = 2.0 * *(float *)(a3 + 12 * a2 + 64);
    v17 = v16(v14);
    v18 = v30 * v17;
    *(float *)&v33 = v18;
    v19 = v17 * v31;
    v34 = v19;
    v20 = v19;
    v21 = v17 * v32;
    v22 = v20;
    v35 = v21;
    if ( flt_106F1CA8 == v18 && flt_106F1CAC == v22 && flt_106F1CB0 == v21 )
    {
      v23 = *(int **)(a3 + 4 * v5);
      v24 = *v23;
      v30 = *(float *)(a3 + 12 * v5 + 56) * 2.0;
      v31 = *(float *)(a3 + 12 * v5 + 60) * 2.0;
      v25 = *(double (__thiscall **)(int *))(v24 + 116);
      v32 = 2.0 * *(float *)(a3 + 12 * v5 + 64);
      v26 = v25(v23);
      *(float *)&v33 = v30 * v26;
      v34 = v31 * v26;
      v35 = v26 * v32;
    }
    sub_102487B0((int)v28, v38, v38, (float *)&v33, (float *)v29, v37, 1, 0, 0);
    sub_100D9E70(v36, v5, v28);
  }
}
