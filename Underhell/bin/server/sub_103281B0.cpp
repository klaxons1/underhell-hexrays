void __thiscall sub_103281B0(float *this, int a2, int a3)
{
  int v3; // esi
  int v4; // edi
  BOOL v5; // ebx
  double v6; // st7
  double v7; // st7
  double v8; // st7
  double v9; // st6
  double v10; // st5
  double v11; // rt0
  double v12; // st5
  double v13; // st7
  double v14; // st7
  double v15; // st6
  double v16; // st5
  double v17; // st7
  double v18; // st7
  int v19; // eax
  float v20; // [esp+8h] [ebp-90h]
  char v21[80]; // [esp+28h] [ebp-70h] BYREF
  int v22[3]; // [esp+78h] [ebp-20h] BYREF
  int v23; // [esp+84h] [ebp-14h] BYREF
  float v24; // [esp+88h] [ebp-10h]
  float v25; // [esp+8Ch] [ebp-Ch]
  int v26; // [esp+90h] [ebp-8h]
  float *v27; // [esp+94h] [ebp-4h]

  v3 = a3;
  v4 = a2;
  v5 = a2 == 0;
  v27 = this;
  v26 = *(_DWORD *)(a3 + 4 * v5 + 104);
  if ( (unsigned __int8)sub_103FA550() )
    v6 = 10.0;
  else
    v6 = 5.0;
  v7 = v6 * v27[426];
  v20 = v7;
  a2 = 0;
  sub_101C08A0(v4, v3, v20, 1, &a2, 0, 0);
  *(float *)&a3 = v7;
  if ( 0.0 != v7 )
  {
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(v3 + 28) + 4))(*(_DWORD *)(v3 + 28), v22);
    v8 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(v3 + 4 * v4) + 116))(*(_DWORD *)(v3 + 4 * v4));
    v9 = *(float *)(v3 + 12 * v4 + 56) * v8;
    *(float *)&v23 = v9;
    v10 = *(float *)(v3 + 12 * v4 + 60) * v8;
    v24 = v10;
    v11 = v10;
    v12 = v8 * *(float *)(v3 + 12 * v4 + 64);
    v13 = v11;
    v25 = v12;
    if ( flt_106F1CA8 == v9 && flt_106F1CAC == v13 && flt_106F1CB0 == v12 )
    {
      v14 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(v3 + 4 * v5) + 116))(*(_DWORD *)(v3 + 4 * v5));
      v15 = *(float *)(v3 + 12 * v5 + 56) * v14;
      v16 = *(float *)(v3 + 12 * v5 + 60) * v14;
      v17 = v14 * *(float *)(v3 + 12 * v5 + 64);
      *(float *)&v23 = v15;
      v24 = v16;
      v25 = v17;
    }
    v18 = *(float *)&a3;
    v19 = sub_102487B0((int)v21, v26, v26, (float *)&v23, (float *)v22, *(float *)&a3, a2, 0, 0);
    sub_101BB4B0(v18, (int)v27, v19, v3, v4);
  }
}
