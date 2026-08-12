int __thiscall sub_100788E0(_DWORD *this, int a2, int a3, float a4, float a5, char a6, int a7)
{
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  double v11; // st7
  bool v12; // bl
  double v14; // st7
  bool v15; // c0
  bool v16; // c3
  double v17; // st7
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  int v21; // edx
  int v22[14]; // [esp+14h] [ebp-44h] BYREF
  int v23; // [esp+4Ch] [ebp-Ch] BYREF
  float v24; // [esp+50h] [ebp-8h]
  int v25; // [esp+54h] [ebp-4h]
  float v26; // [esp+6Ch] [ebp+14h]
  bool v27; // [esp+73h] [ebp+1Bh]

  memset(v22, 0, sizeof(v22));
  v8 = 1;
  if ( !a6 )
    v8 = 5;
  sub_1007BA50(this[1] + 716, a2, 33701899, 100.0, v8, (int)v22);
  v9 = v22[7];
  v10 = v22[0];
  if ( a7 )
  {
    v11 = *(float *)&v22[1];
    *(_DWORD *)a7 = v22[0];
    *(float *)(a7 + 4) = v11;
    *(float *)(a7 + 8) = *(float *)&v22[2];
    *(float *)(a7 + 12) = *(float *)&v22[3];
    *(float *)(a7 + 16) = *(float *)&v22[4];
    *(float *)(a7 + 20) = *(float *)&v22[5];
    *(float *)(a7 + 24) = *(float *)&v22[6];
    *(_DWORD *)(a7 + 28) = v9;
    *(float *)(a7 + 32) = *(float *)&v22[8];
    *(float *)(a7 + 36) = *(float *)&v22[9];
    *(float *)(a7 + 40) = *(float *)&v22[10];
    *(float *)(a7 + 44) = *(float *)&v22[11];
    *(float *)(a7 + 48) = *(float *)&v22[12];
    *(float *)(a7 + 52) = *(float *)&v22[13];
  }
  v12 = v9 && a3 == v9;
  v27 = v10 < 0;
  if ( v10 < 0 && !LOBYTE(a5) && !v12 )
    return 0;
  sub_1025F370(this[1], &v22[1], 1);
  if ( (*(_BYTE *)(this[1] + 256) & 1) != 0 )
    sub_101C2A30();
  if ( *(float *)&v22[13] > 0.1 )
  {
    v14 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(*(_DWORD *)this[1] + 1724))(this[1]);
    v15 = *(float *)&v22[13] < v14;
    v16 = *(float *)&v22[13] == v14;
    v17 = *(float *)&v22[13];
    if ( v15 || v16 )
    {
      if ( v17 < 0.0 )
        v17 = 0.0;
    }
    else
    {
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)this[1] + 1724))(this[1]);
    }
    v18 = *(_DWORD *)(this[1] + 424);
    if ( v18 )
    {
      v19 = (*(int (__thiscall **)(int))(*(_DWORD *)v18 + 280))(v18);
      if ( v19 )
      {
        v26 = v17;
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v19 + 12))(v19, LODWORD(v26));
      }
    }
  }
  if ( -1.0 != a4 )
  {
    v20 = this[1];
    v23 = *(_DWORD *)(v20 + 728);
    v24 = *(float *)(v20 + 732);
    v21 = *(_DWORD *)(v20 + 736);
    v24 = a4;
    v25 = v21;
    sub_100E11A0(&v23);
  }
  if ( v12 )
    return 4;
  if ( v27 )
    return (v22[0] != -3) + 2;
  return 1;
}
