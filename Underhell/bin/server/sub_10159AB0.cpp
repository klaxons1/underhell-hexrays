void __thiscall sub_10159AB0(int this)
{
  int v2; // eax
  int v3; // edx
  double v4; // st7
  double v5; // st7
  double v6; // st7
  float *v7; // eax
  double v8; // st7
  float *v9; // edi
  double v10; // st6
  double v11; // st7
  float *v12; // eax
  int v13; // eax
  int v14; // esi
  float *v15; // eax
  float *v16; // eax
  float *v17; // edi
  float v18; // [esp+8h] [ebp-44h]
  float v19; // [esp+Ch] [ebp-40h]
  _BYTE v20[12]; // [esp+14h] [ebp-38h] BYREF
  float v21[3]; // [esp+20h] [ebp-2Ch] BYREF
  float v22[3]; // [esp+2Ch] [ebp-20h] BYREF
  float v23[3]; // [esp+38h] [ebp-14h] BYREF
  float v24; // [esp+44h] [ebp-8h]
  float v25; // [esp+48h] [ebp-4h]

  v2 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 1332))(*(_DWORD *)(this + 4));
  if ( v2 == 4 || v2 == 5 )
  {
    v13 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 1344))(*(_DWORD *)(this + 4));
    v14 = v13;
    if ( v13 )
    {
      if ( (*(_DWORD *)(v13 + 252) & 0x800) != 0 )
        sub_100DAE60(v13);
      v15 = *(float **)(this + 8);
      v15[38] = *(float *)(v14 + 580);
      v15[39] = *(float *)(v14 + 584);
      v15[40] = *(float *)(v14 + 588);
      if ( (*(_DWORD *)(v14 + 252) & 0x800) != 0 )
        sub_100DAE60(v14);
      v16 = *(float **)(this + 8);
      v16[3] = *(float *)(v14 + 704);
      v16[4] = *(float *)(v14 + 708);
      v16[5] = *(float *)(v14 + 712);
      if ( (*(_DWORD *)(v14 + 252) & 0x1000) != 0 )
        sub_100DAFD0(v14);
      v17 = *(float **)(this + 8);
      v17[16] = *(float *)(v14 + 476);
      v17[17] = *(float *)(v14 + 480);
      v17[18] = *(float *)(v14 + 484);
    }
  }
  else if ( v2 == 6 )
  {
    if ( *(_DWORD *)(dword_106B70BC + 48) )
    {
      sub_10157F10((_DWORD *)this, *(float *)(dword_106B7074 + 44), *(float *)(dword_106B702C + 44));
    }
    else
    {
      sub_104222B0(*(_DWORD *)(this + 8) + 12, v22, v23, v20);
      v3 = *(_DWORD *)(this + 8);
      v4 = *(float *)(dword_106B7074 + 44);
      if ( (*(_DWORD *)(v3 + 36) & 0x20000) != 0 )
        v4 = v4 * 0.5;
      v24 = *(float *)(v3 + 44) * v4;
      v25 = v4 * *(float *)(v3 + 48);
      off_10689714();
      off_10689714();
      v5 = v24 * v22[2] + v25 * v23[2] + *(float *)(*(_DWORD *)(this + 8) + 52);
      v21[0] = v22[0] * v24 + v23[0] * v25;
      v21[1] = v23[1] * v25 + v22[1] * v24;
      v21[2] = v5;
      v6 = off_10689714();
      if ( *(float *)(dword_106B73D4 + 44) < v6 )
        v6 = *(float *)(dword_106B73D4 + 44);
      v18 = v6;
      (*(void (__thiscall **)(int, float *, _DWORD, _DWORD))(*(_DWORD *)this + 80))(
        this,
        v21,
        LODWORD(v18),
        *(float *)(dword_106B702C + 44));
      v7 = *(float **)(this + 8);
      v19 = v7[17] * v7[17] + v7[16] * v7[16] + v7[18] * v7[18];
      v8 = off_10689708(v19);
      if ( v8 >= 1.0 )
      {
        v10 = v8 - *(float *)(dword_106B7344 + 44) * v8 * *(float *)(dword_106B31C8 + 16);
        if ( v10 < 0.0 )
          v10 = 0.0;
        v11 = v10 / v8;
        v12 = *(float **)(this + 8);
        v12[16] = v12[16] * v11;
        v12[17] = v12[17] * v11;
        v12[18] = v11 * v12[18];
        sub_101581E0((_DWORD *)this);
        (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)this + 112))(this, 0, 0);
      }
      else
      {
        v9 = *(float **)(this + 8);
        v9[16] = 0.0;
        v9[17] = 0.0;
        v9[18] = 0.0;
      }
    }
  }
}
