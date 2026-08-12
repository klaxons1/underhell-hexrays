void __thiscall sub_100AAED0(int this)
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
  float *v16; // ecx
  int v17; // edx
  double v18; // st7
  int (__thiscall *v19)(int); // eax
  float *v20; // eax
  float *v21; // ecx
  float *v22; // edi
  float v23; // [esp+8h] [ebp-44h]
  float v24; // [esp+Ch] [ebp-40h]
  _BYTE v25[12]; // [esp+14h] [ebp-38h] BYREF
  float v26[3]; // [esp+20h] [ebp-2Ch] BYREF
  float v27[3]; // [esp+2Ch] [ebp-20h] BYREF
  float v28[3]; // [esp+38h] [ebp-14h] BYREF
  float v29; // [esp+44h] [ebp-8h]
  float v30; // [esp+48h] [ebp-4h]

  v2 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 844))(*(_DWORD *)(this + 4));
  if ( v2 == 4 || v2 == 5 )
  {
    v13 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 848))(*(_DWORD *)(this + 4));
    v14 = v13;
    if ( v13 )
    {
      v15 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v13 + 36))(v13);
      v16 = *(float **)(this + 8);
      v17 = *(_DWORD *)v14;
      v16[38] = *v15;
      v16[39] = v15[1];
      v18 = v15[2];
      v19 = *(int (__thiscall **)(int))(v17 + 40);
      v16[40] = v18;
      v20 = (float *)v19(v14);
      v21 = *(float **)(this + 8);
      v21[3] = *v20;
      v21[4] = v20[1];
      v21[5] = v20[2];
      sub_10038150(v14);
      v22 = *(float **)(this + 8);
      v22[16] = *(float *)(v14 + 244);
      v22[17] = *(float *)(v14 + 248);
      v22[18] = *(float *)(v14 + 252);
    }
  }
  else if ( v2 == 6 )
  {
    if ( *(_DWORD *)(dword_104347F4 + 48) )
    {
      sub_100A8850((_DWORD *)this, *(float *)(dword_104347AC + 44), *(float *)(dword_10434764 + 44));
    }
    else
    {
      sub_101EE040(*(_DWORD *)(this + 8) + 12, v27, v28, v25);
      v3 = *(_DWORD *)(this + 8);
      v4 = *(float *)(dword_104347AC + 44);
      if ( (*(_DWORD *)(v3 + 36) & 0x20000) != 0 )
        v4 = v4 * 0.5;
      v29 = *(float *)(v3 + 44) * v4;
      v30 = v4 * *(float *)(v3 + 48);
      off_103EDFEC();
      off_103EDFEC();
      v5 = v29 * v27[2] + v30 * v28[2] + *(float *)(*(_DWORD *)(this + 8) + 52);
      v26[0] = v27[0] * v29 + v28[0] * v30;
      v26[1] = v28[1] * v30 + v27[1] * v29;
      v26[2] = v5;
      v6 = off_103EDFEC();
      if ( *(float *)(dword_10434B0C + 44) < v6 )
        v6 = *(float *)(dword_10434B0C + 44);
      v23 = v6;
      (*(void (__thiscall **)(int, float *, _DWORD, _DWORD))(*(_DWORD *)this + 80))(
        this,
        v26,
        LODWORD(v23),
        *(float *)(dword_10434764 + 44));
      v7 = *(float **)(this + 8);
      v24 = v7[17] * v7[17] + v7[16] * v7[16] + v7[18] * v7[18];
      v8 = off_103EDFE0(v24);
      if ( v8 >= 1.0 )
      {
        v10 = v8 - *(float *)(dword_10434A7C + 44) * v8 * *((float *)off_103DC81C + 4);
        if ( v10 < 0.0 )
          v10 = 0.0;
        v11 = v10 / v8;
        v12 = *(float **)(this + 8);
        v12[16] = v12[16] * v11;
        v12[17] = v12[17] * v11;
        v12[18] = v11 * v12[18];
        sub_100A8BB0((_DWORD *)this);
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
