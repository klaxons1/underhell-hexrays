void __thiscall sub_10166170(int this, _DWORD *a2, float a3, float a4)
{
  double v5; // st7
  double v6; // st7
  double v7; // st7
  double v8; // st7
  float v9; // ecx
  int v10; // edx
  int v11; // eax
  double v12; // st7
  int v13; // edi
  double v14; // st6
  int v15; // edi
  float v16[2]; // [esp+40h] [ebp-30h] BYREF
  float v17; // [esp+48h] [ebp-28h]
  int v18[3]; // [esp+4Ch] [ebp-24h] BYREF
  float v19; // [esp+58h] [ebp-18h] BYREF
  float v20; // [esp+5Ch] [ebp-14h]
  int v21; // [esp+60h] [ebp-10h]
  float v22; // [esp+64h] [ebp-Ch] BYREF
  float v23; // [esp+68h] [ebp-8h]
  float v24; // [esp+6Ch] [ebp-4h]

  if ( a2 )
  {
    *(float *)v18 = 1.0;
    *(float *)&v18[1] = 1.0;
    *(float *)&v18[2] = 1.0;
    sub_10111860((int)(a2 + 80), &flt_106F1CA8, (float *)v18, v16);
    v17 = v17 + 1.0;
    sub_100E0D20(this, v16);
    v22 = flt_106B4F40 * -1.0;
    v23 = flt_106B4F44 * -1.0;
    v24 = -1.0 * flt_106B4F48;
    v5 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           -0.25,
           0.25);
    v22 = v5 + v22;
    v6 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           -0.25,
           0.25);
    v23 = v6 + v23;
    v7 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           -0.25,
           0.25);
    v24 = v7 + v24;
    v8 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           LODWORD(a4),
           LODWORD(a3));
    v9 = *(float *)(this + 492);
    v19 = *(float *)(this + 488);
    v22 = v22 * v8;
    v23 = v23 * v8;
    v24 = v8 * v24;
    v10 = *(_DWORD *)(this + 496);
    v20 = v9;
    v21 = v10;
    v19 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            100.0,
            200.0);
    v20 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            100.0,
            300.0);
    sub_100D7260((float *)this, &v19);
    v11 = (*(int (__thiscall **)(_DWORD *))(*a2 + 276))(a2);
    v12 = v22;
    *(_DWORD *)(this + 1148) = v11;
    v13 = a2[55];
    if ( v13 <= -50 )
    {
      if ( v13 <= -200 )
        v14 = 4.0;
      else
        v14 = 2.0;
    }
    else
    {
      v14 = 0.69999999;
    }
    v22 = v12 * v14;
    v23 = v23 * v14;
    v24 = v14 * v24;
    if ( sub_100E9550((_DWORD *)this, 2, 0, 0, 0) )
    {
      v15 = *(_DWORD *)(this + 424);
      if ( v15 )
      {
        sub_1001F010((float *)v18, -500.0, 500.0);
        (*(void (__thiscall **)(int, float *, int *))(*(_DWORD *)v15 + 208))(v15, &v22, v18);
      }
    }
    else
    {
      sub_10112C00(this + 320, 2);
      sub_100D5D10((int)&flt_106F1CA8, (int)&flt_106F1CA8);
      sub_100DD660(this, &v22);
    }
    sub_100EBE30(this, 1);
  }
  sub_101660F0(this);
}
