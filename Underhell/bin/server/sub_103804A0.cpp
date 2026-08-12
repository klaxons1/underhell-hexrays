void __thiscall sub_103804A0(int this)
{
  int v2; // eax
  float *v3; // eax
  int v4; // ecx
  float *v5; // eax
  int v6; // edx
  float v7; // ecx
  int v8; // [esp+Ch] [ebp-2Ch]
  float v9[3]; // [esp+14h] [ebp-24h] BYREF
  float v10[3]; // [esp+20h] [ebp-18h] BYREF
  float v11; // [esp+2Ch] [ebp-Ch] BYREF
  float v12; // [esp+30h] [ebp-8h]
  float v13; // [esp+34h] [ebp-4h]

  sub_10041D00((_DWORD *)this);
  if ( *(float *)(dword_106B31C8 + 12) > (double)*(float *)(this + 3656) )
    *(float *)(this + 3656) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                                dword_106B31E4,
                                3.0,
                                8.0)
                            + *(float *)(dword_106B31C8 + 12);
  v2 = *(_DWORD *)(this + 2324);
  if ( (v2 == 3 || v2 == 2) && *(float *)(dword_106B31C8 + 12) > (double)*(float *)(this + 3660) )
    *(float *)(this + 3660) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                                dword_106B31E4,
                                2.0,
                                6.0)
                            + *(float *)(dword_106B31C8 + 12);
  if ( !(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 10) )
  {
    v3 = (float *)sub_10073730(*(_DWORD *)(this + 1676));
    v4 = *(_DWORD *)(this + 252) >> 11;
    v11 = *v3 * 0.5;
    v12 = v3[1] * 0.5;
    v13 = 0.5 * v3[2];
    if ( (v4 & 1) != 0 )
      sub_100DAE60(this);
    v8 = *(_DWORD *)(this + 1676);
    v10[0] = *(float *)(this + 580) + v11;
    v10[1] = *(float *)(this + 584) + v12;
    v10[2] = *(float *)(this + 588) + v13;
    v5 = (float *)sub_10073710(v8);
    v6 = *(_DWORD *)(this + 252) >> 11;
    v11 = *v5 * 0.5;
    v12 = v5[1] * 0.5;
    v13 = 0.5 * v5[2];
    if ( (v6 & 1) != 0 )
      sub_100DAE60(this);
    v9[0] = *(float *)(this + 580) + v11;
    v9[1] = *(float *)(this + 584) + v12;
    v9[2] = *(float *)(this + 588) + v13;
    sub_102605C0(v9, v10, 1);
  }
  if ( *(_BYTE *)(this + 447) <= 1u )
  {
    DevMsg(2, "Came out of water\n");
    if ( sub_1037FB50(this) )
    {
      sub_100457E0((_DWORD *)this, 93);
      if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
        sub_100DAFD0(this);
      v7 = *(float *)(this + 480);
      v11 = *(float *)(this + 476);
      v12 = v7;
      v13 = 8.0;
      sub_100DD660(this, &v11);
    }
  }
  if ( *(_DWORD *)(this + 3620) )
  {
    if ( *(float *)(dword_106B31C8 + 12) <= (double)*(float *)(this + 3640) )
      sub_1037F770((float *)this, this);
    else
      sub_1037FC10(this);
  }
}
