void __thiscall sub_10382020(void *this, int a2, int a3)
{
  int v3; // esi
  int v4; // edi
  BOOL v5; // ebx
  double v6; // st7
  double v7; // st7
  double v8; // st6
  double v9; // st5
  double v10; // rt0
  double v11; // st5
  double v12; // st7
  double v13; // st7
  double v14; // st6
  double v15; // st5
  double v16; // st7
  double v17; // st7
  int v18; // eax
  float v19; // [esp+8h] [ebp-90h]
  char v20[80]; // [esp+28h] [ebp-70h] BYREF
  int v21[3]; // [esp+78h] [ebp-20h] BYREF
  int v22; // [esp+84h] [ebp-14h] BYREF
  float v23; // [esp+88h] [ebp-10h]
  float v24; // [esp+8Ch] [ebp-Ch]
  int v25; // [esp+90h] [ebp-8h]
  int v26; // [esp+94h] [ebp-4h]

  v3 = a3;
  v4 = a2;
  v5 = a2 == 0;
  v25 = (int)this;
  v26 = *(_DWORD *)(a3 + 4 * v5 + 104);
  if ( (unsigned __int8)sub_103FA550() )
    v6 = 10.0;
  else
    v6 = 1.0;
  v19 = v6;
  a2 = 0;
  sub_101C08A0(v4, v3, v19, 1, &a2, 0, 0);
  *(float *)&a3 = v6;
  if ( 0.0 != v6 )
  {
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(v3 + 28) + 4))(*(_DWORD *)(v3 + 28), v21);
    v7 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(v3 + 4 * v4) + 116))(*(_DWORD *)(v3 + 4 * v4));
    v8 = *(float *)(v3 + 12 * v4 + 56) * v7;
    *(float *)&v22 = v8;
    v9 = *(float *)(v3 + 12 * v4 + 60) * v7;
    v23 = v9;
    v10 = v9;
    v11 = v7 * *(float *)(v3 + 12 * v4 + 64);
    v12 = v10;
    v24 = v11;
    if ( flt_106F1CA8 == v8 && flt_106F1CAC == v12 && flt_106F1CB0 == v11 )
    {
      v13 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(v3 + 4 * v5) + 116))(*(_DWORD *)(v3 + 4 * v5));
      v14 = *(float *)(v3 + 12 * v5 + 56) * v13;
      v15 = *(float *)(v3 + 12 * v5 + 60) * v13;
      v16 = v13 * *(float *)(v3 + 12 * v5 + 64);
      *(float *)&v22 = v14;
      v23 = v15;
      v24 = v16;
    }
    v17 = *(float *)&a3;
    v18 = sub_102487B0((int)v20, v26, v26, (float *)&v22, (float *)v21, *(float *)&a3, a2, 0, 0);
    sub_101BB4B0(v17, v25, v18, v3, v4);
  }
}
