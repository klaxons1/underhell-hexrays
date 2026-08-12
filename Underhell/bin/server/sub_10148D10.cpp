void __thiscall sub_10148D10(int this, int a2, int a3)
{
  int v3; // esi
  int v4; // edi
  double v6; // st7
  double v7; // st6
  double v8; // st5
  double v9; // rt0
  double v10; // st5
  double v11; // st7
  int *v12; // ecx
  int v13; // edx
  double v14; // st7
  double v15; // st6
  double v16; // st5
  double v17; // st7
  bool v18; // zf
  int v19; // eax
  int (__thiscall *v20)(int, int *); // edx
  int *v21; // eax
  double v22; // st7
  float v23; // [esp+Ch] [ebp-88h]
  float v24; // [esp+Ch] [ebp-88h]
  _BYTE v25[80]; // [esp+28h] [ebp-6Ch] BYREF
  int v26[3]; // [esp+78h] [ebp-1Ch] BYREF
  int v27; // [esp+84h] [ebp-10h] BYREF
  float v28; // [esp+88h] [ebp-Ch]
  float v29; // [esp+8Ch] [ebp-8h]
  int v30; // [esp+90h] [ebp-4h]

  v3 = a3;
  v4 = a2;
  sub_100DA500((_BYTE *)this, a2, a3);
  (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(v3 + 28) + 4))(*(_DWORD *)(v3 + 28), v26);
  v6 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(v3 + 4 * v4) + 116))(*(_DWORD *)(v3 + 4 * v4));
  v7 = v6 * *(float *)(v3 + 12 * v4 + 56);
  *(float *)&v27 = v7;
  v8 = *(float *)(v3 + 12 * v4 + 60) * v6;
  v28 = v8;
  v9 = v8;
  v10 = v6 * *(float *)(v3 + 12 * v4 + 64);
  v11 = v9;
  v29 = v10;
  if ( flt_106F1CA8 == v7 && flt_106F1CAC == v11 && flt_106F1CB0 == v10 )
  {
    v12 = *(int **)(v3 + 4 * (v4 == 0));
    v13 = *v12;
    a3 = v4 == 0;
    v14 = ((double (__thiscall *)(int *))*(_DWORD *)(v13 + 116))(v12);
    v15 = *(float *)(v3 + 12 * a3 + 56) * v14;
    v16 = *(float *)(v3 + 12 * a3 + 60) * v14;
    v17 = v14 * *(float *)(v3 + 12 * a3 + 64);
    *(float *)&v27 = v15;
    v28 = v16;
    v29 = v17;
  }
  if ( (*(_DWORD *)(this + 248) & 0x200) != 0 )
  {
    v18 = *(_DWORD *)(this + 812) == 0;
    *(_BYTE *)(this + 856) = 1;
    v19 = *(_DWORD *)(v3 + 4 * (v4 == 0) + 104);
    a3 = v19;
    if ( v18 )
    {
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v3 + 4 * v4) + 112))(2.0);
      v19 = a3;
    }
    a3 = *(_DWORD *)(this + 220) + 1;
    v23 = (float)a3;
    sub_102487B0(v19, v19, (int)&v27, (int)v26, v23, 1, 0, 0);
    sub_101BB4B0(this, v25, v3, v4);
  }
  else if ( (*(_DWORD *)(this + 248) & 0x400) == 0 )
  {
    v20 = *(int (__thiscall **)(int, int *))(*(_DWORD *)(this + 800) + 44);
    v30 = *(_DWORD *)(v3 + 4 * (v4 == 0) + 104);
    v21 = (int *)v20(this + 800, &a3);
    v22 = *(float *)(this + 868);
    sub_101C08A0(v4, v3, *(float *)(this + 868), 1, (int)&a2, *v21, 0);
    *(float *)&a3 = v22;
    if ( v22 > 0.0 )
    {
      if ( !*(_DWORD *)(this + 812) )
      {
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v3 + 4 * v4) + 112))(2.0);
        v22 = *(float *)&a3;
      }
      v24 = v22;
      sub_102487B0(v30, v30, (int)&v27, (int)v26, v24, a2, 0, 0);
      sub_101BB4B0(this, v25, v3, v4);
    }
  }
}
