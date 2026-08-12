void __thiscall sub_10305D70(_BYTE *this, int a2, BOOL a3)
{
  int v3; // esi
  int v4; // edi
  int v5; // ebx
  int v6; // eax
  int v7; // ecx
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
  _BYTE v20[80]; // [esp+2Ch] [ebp-70h] BYREF
  int v21[3]; // [esp+7Ch] [ebp-20h] BYREF
  int v22; // [esp+88h] [ebp-14h] BYREF
  float v23; // [esp+8Ch] [ebp-10h]
  float v24; // [esp+90h] [ebp-Ch]
  float v25; // [esp+94h] [ebp-8h]
  _BYTE *v26; // [esp+98h] [ebp-4h]

  v3 = a3;
  v4 = a2;
  v26 = this;
  sub_101C08A0(a2, a3, 1.0, 1, &a2, 0, 0);
  v25 = 1.0;
  if ( 1.0 > 5.0 )
  {
    v5 = *(_DWORD *)(v3 + 4 * (v4 == 0) + 104);
    a3 = v4 == 0;
    if ( !v5 )
    {
      v6 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0);
      if ( v6 && (v7 = *(_DWORD *)(v6 + 12)) != 0 )
        v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 20))(v7);
      else
        v5 = 0;
    }
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(v3 + 28) + 4))(*(_DWORD *)(v3 + 28), v21);
    v8 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(v3 + 4 * v4) + 116))(*(_DWORD *)(v3 + 4 * v4));
    v9 = *(float *)(v3 + 12 * v4 + 56) * v8;
    *(float *)&v22 = v9;
    v10 = *(float *)(v3 + 12 * v4 + 60) * v8;
    v23 = v10;
    v11 = v10;
    v12 = v8 * *(float *)(v3 + 12 * v4 + 64);
    v13 = v11;
    v24 = v12;
    if ( flt_106F1CA8 == v9 && flt_106F1CAC == v13 && flt_106F1CB0 == v12 )
    {
      v14 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(v3 + 4 * a3) + 116))(*(_DWORD *)(v3 + 4 * a3));
      v15 = *(float *)(v3 + 12 * a3 + 56) * v14;
      v16 = *(float *)(v3 + 12 * a3 + 60) * v14;
      v17 = v14 * *(float *)(v3 + 12 * a3 + 64);
      *(float *)&v22 = v15;
      v23 = v16;
      v24 = v17;
    }
    v18 = v25;
    v19 = sub_102487B0((int)v20, v5, v5, (float *)&v22, (float *)v21, v25, a2, 0, 0);
    sub_101BB4B0(v18, (int)v26, v19, v3, v4);
  }
  sub_100DA500(v26, v4, v3);
}
