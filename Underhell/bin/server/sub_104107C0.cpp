void __thiscall sub_104107C0(int this, int a2, int a3, float *a4, float a5, float a6, int a7)
{
  float *v8; // ebx
  float *v9; // eax
  double v10; // st7
  double v11; // st4
  double v12; // st5
  double v13; // st7
  unsigned int v14; // esi
  int v15; // esi
  float v16; // [esp+Ch] [ebp-10h]
  float v17; // [esp+10h] [ebp-Ch]
  float v18; // [esp+10h] [ebp-Ch]
  int v19; // [esp+28h] [ebp+Ch]
  float v20; // [esp+28h] [ebp+Ch]

  (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 76))(this, a2);
  if ( a3 )
    *(_DWORD *)(this + 2220) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 8))(a3);
  else
    *(_DWORD *)(this + 2220) = -1;
  sub_100DD660(this, a4);
  *(float *)(this + 2184) = a5;
  *(_DWORD *)(this + 2196) = a7;
  *(float *)(this + 552) = a6;
  *(float *)(this + 2204) = *(float *)(dword_106B31C8 + 12);
  if ( a7 == 1 || a7 == 3 )
    sub_1040FB00((_DWORD *)this);
  *(_DWORD *)(this + 200) = sub_100F3C80;
  *(_DWORD *)(this + 196) = sub_1040F320;
  sub_100EC3F0((_DWORD *)this, (int)sub_104100C0, 0.0, 0);
  sub_104100C0((float *)this);
  sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
  if ( a3 )
  {
    v8 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 576))(this);
    v9 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 576))(a3);
    v10 = *v9 - *v8;
    v11 = v9[1] - v8[1];
    v12 = v9[2] - v8[2];
    v16 = v12 * v12 + v11 * v11 + v10 * v10;
    *(float *)&v19 = off_10689708(v16);
    if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
      sub_100DAFD0(this);
    v17 = *(float *)(this + 480) * *(float *)(this + 480)
        + *(float *)(this + 476) * *(float *)(this + 476)
        + *(float *)(this + 484) * *(float *)(this + 484);
    if ( *(float *)&v19 / off_10689708(v17) >= 0.5 )
    {
      if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
        sub_100DAFD0(this);
      v18 = *(float *)(this + 484) * *(float *)(this + 484)
          + *(float *)(this + 476) * *(float *)(this + 476)
          + *(float *)(this + 480) * *(float *)(this + 480);
      v13 = *(float *)&v19 / off_10689708(v18);
    }
    else
    {
      v13 = 0.5;
    }
    v14 = *(_DWORD *)(this + 2220);
    if ( v14 == -1 || off_1061BE18[4 * (v14 & 0xFFF) + 2] != v14 >> 12 )
      v15 = 0;
    else
      v15 = off_1061BE18[4 * (v14 & 0xFFF) + 1];
    if ( (*(_DWORD *)(v15 + 252) & 0x800) != 0 )
      sub_100DAE60(v15);
    v20 = v13;
    sub_1023D4B0(8, (float *)(v15 + 580), 300, v20, a2, 0, 0);
  }
}
