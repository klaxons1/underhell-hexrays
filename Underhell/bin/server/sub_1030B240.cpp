void __thiscall sub_1030B240(int this)
{
  unsigned int v2; // eax
  _DWORD *v3; // edi
  int v4; // ecx
  float *v5; // eax
  double v6; // st4
  double v7; // st6
  double v8; // st4
  double v9; // st5
  double v10; // st6
  double v11; // st7
  int v12; // eax
  float *v13; // edi
  double v14; // st4
  double v15; // st4
  double v16; // st5
  double v17; // st6
  int v18; // eax
  float *v19; // eax
  int v20[3]; // [esp+Ch] [ebp-20h] BYREF
  int v21[3]; // [esp+18h] [ebp-14h] BYREF
  float v22; // [esp+24h] [ebp-8h]
  unsigned int *v23; // [esp+28h] [ebp-4h]

  v2 = *(_DWORD *)(this + 3716);
  v3 = (_DWORD *)(this + 3716);
  v23 = (unsigned int *)(this + 3716);
  if ( v2 != -1
    && off_1061BE18[4 * (v2 & 0xFFF) + 2] == v2 >> 12
    && off_1061BE18[4 * (v2 & 0xFFF) + 1]
    && (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
  {
    if ( *v3 == -1 || off_1061BE18[4 * (*v3 & 0xFFF) + 2] != *v3 >> 12 )
      v4 = 0;
    else
      v4 = off_1061BE18[4 * (*v3 & 0xFFF) + 1];
    v5 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 576))(v4);
    v6 = v5[1] - *(float *)(this + 3680);
    v7 = v6 * v6;
    v8 = *v5 - *(float *)(this + 3676);
    v9 = v7;
    v10 = v5[2] - *(float *)(this + 3684);
    v11 = v8 * v8 + v9 + v10 * v10;
    v22 = v11;
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v12 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
    v13 = (float *)v12;
    if ( (*(_DWORD *)(v12 + 252) & 0x800) != 0 )
      sub_100DAE60(v12);
    v14 = v13[146] - *(float *)(this + 584);
    v16 = v14 * v14;
    if ( v11 > 129600.0
      || (v15 = v13[145] - *(float *)(this + 580),
          v17 = v13[147] - *(float *)(this + 588),
          v15 * v15 + v16 + v17 * v17 <= v22) )
    {
      sub_10023E00((char *)this, 73);
      sub_10023CB0((char *)this, 74);
      *v23 = -1;
    }
    else
    {
      sub_10023CB0((char *)this, 73);
      sub_10023E00((char *)this, 74);
      if ( *(_DWORD *)(dword_106E3074 + 48) == 3 )
      {
        v18 = sub_1026A890(v23);
        *(float *)v21 = 32.0;
        *(float *)&v21[1] = 32.0;
        *(float *)&v21[2] = 32.0;
        *(float *)v20 = -32.0;
        *(float *)&v20[1] = -32.0;
        *(float *)&v20[2] = -32.0;
        v19 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v18 + 576))(v18);
        sub_1011C000(v19, (float *)v20, (float *)v21, 255, 255, 255, 1, 1.0);
      }
    }
  }
}
