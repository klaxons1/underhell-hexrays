void __thiscall sub_101C21F0(int this)
{
  _DWORD *v2; // eax
  float v3; // edx
  float v4; // eax
  int v5; // ecx
  float v6; // eax
  float v7; // ecx
  int v8; // edx
  float v9; // edx
  float v10; // eax
  float v11; // ecx
  float v12; // edx
  float v13; // eax
  float v14[13]; // [esp+4h] [ebp-90h] BYREF
  char v15; // [esp+3Ah] [ebp-5Ah]
  int v16[3]; // [esp+58h] [ebp-3Ch] BYREF
  float v17[3]; // [esp+64h] [ebp-30h] BYREF
  float v18[3]; // [esp+70h] [ebp-24h] BYREF
  float v19[3]; // [esp+7Ch] [ebp-18h] BYREF
  float v20; // [esp+88h] [ebp-Ch] BYREF
  float v21; // [esp+8Ch] [ebp-8h]
  float v22; // [esp+90h] [ebp-4h]

  sub_101C6E40();
  if ( (unsigned __int8)sub_101C8820(this, 0) )
  {
    if ( *(float *)(this + 600) > 0.0 || !sub_101C5260(this) || (v2 = (_DWORD *)sub_101C5260(this), !sub_100E9830(v2)) )
      sub_101C73D0(0);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v3 = *(float *)(this + 584);
    v4 = *(float *)(this + 588);
    v20 = *(float *)(this + 580);
    v5 = *(_DWORD *)(this + 252) >> 12;
    v21 = v3;
    v22 = v4;
    if ( (v5 & 1) != 0 )
      sub_100DAFD0(this);
    v6 = *(float *)(this + 480);
    v7 = *(float *)(this + 484);
    v17[0] = *(float *)(this + 476);
    v8 = *(_DWORD *)(this + 252) >> 11;
    v17[1] = v6;
    v17[2] = v7;
    if ( (v8 & 1) != 0 )
      sub_100DAE60(this);
    v9 = *(float *)(this + 712);
    v10 = *(float *)(this + 704);
    v19[1] = *(float *)(this + 708);
    v11 = *(float *)(this + 492);
    v19[2] = v9;
    v12 = *(float *)(this + 496);
    v18[1] = v11;
    v19[0] = v10;
    v13 = *(float *)(this + 488);
    v18[2] = v12;
    v18[0] = v13;
    (*(void (__thiscall **)(int, float *, float *, float *, float *))(*(_DWORD *)this + 644))(this, &v20, v17, v19, v18);
    sub_100DD660(this, v17);
    sub_100E0EA0(this, v19);
    sub_100D7260((float *)this, v18);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    *(float *)v16 = v20 - *(float *)(this + 580);
    *(float *)&v16[1] = v21 - *(float *)(this + 584);
    *(float *)&v16[2] = v22 - *(float *)(this + 588);
    sub_101C2090(this, (float *)v16, v14);
    sub_101C4870(this);
    if ( v15 )
    {
      sub_100DD660(this, &flt_106F1CA8);
      sub_100D7260((float *)this, &flt_106F1CB4);
    }
    else if ( (**(_DWORD **)(this + 24) & 2) == 0 )
    {
      sub_101C7080(this);
    }
  }
}
