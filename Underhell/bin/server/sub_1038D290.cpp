void __thiscall sub_1038D290(int this, float a2)
{
  int v3; // edi
  float *v4; // eax
  double v5; // st7
  double v6; // st6
  double v7; // st5
  double v8; // st4
  double v9; // st3
  double v10; // st2
  double v11; // st7
  double v12; // st2
  double v13; // st5
  double v14; // st1
  double v15; // st3
  double v16; // st2
  double v17; // st1
  double v18; // st7
  float v19; // [esp+18h] [ebp-40h]
  int v20; // [esp+28h] [ebp-30h] BYREF
  float v21; // [esp+2Ch] [ebp-2Ch]
  float v22; // [esp+30h] [ebp-28h]
  float v23; // [esp+34h] [ebp-24h]
  float v24; // [esp+38h] [ebp-20h]
  int v25; // [esp+40h] [ebp-18h] BYREF
  float v26; // [esp+44h] [ebp-14h]
  float v27; // [esp+48h] [ebp-10h]
  float v28; // [esp+4Ch] [ebp-Ch]
  float v29; // [esp+50h] [ebp-8h]
  float v30; // [esp+54h] [ebp-4h]

  if ( *(_DWORD *)(this + 4268) )
  {
    v19 = *(float *)(dword_106E9D74 + 44) * a2;
    v3 = sub_10389120(this, v19);
    *(_DWORD *)(this + 4236) = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(
                                 dword_106B31E4,
                                 *(_DWORD *)(dword_106E9E4C + 48),
                                 *(_DWORD *)(dword_106E9E4C + 48) + 1);
    *(_DWORD *)(this + 4268) = 2;
    *(_DWORD *)(this + 4272) = 2;
    sub_1038C750((_DWORD *)this, 0.0, 0.0, 0.0, (float *)&v25, (float *)&v20);
    v4 = (float *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)this + 968))(this, &v20);
    v28 = *v4 - *(float *)&v25;
    v29 = v4[1] - v26;
    v30 = 0.0;
    v5 = off_10689714();
    if ( v5 > 650.0 )
      v5 = 650.0;
    v6 = v28;
    v7 = v28 * v5 + *(float *)&v25;
    v8 = v29;
    v9 = v29 * v5 + v26;
    v10 = v5 * v30;
    v11 = v30;
    v27 = v10 + v27;
    v12 = v30 * 0.0;
    v28 = v29 - v12;
    v29 = v12 - v6;
    v30 = v6 * 0.0 - 0.0 * v8;
    v23 = v7 - v28 * 500.0;
    v24 = v9 - v29 * 500.0;
    v13 = v7 + v28 * 500.0;
    v14 = v9 + v29 * 500.0;
    v15 = v27 - v30 * 500.0;
    v21 = v14;
    v22 = 500.0 * v30 + v27;
    v16 = v23;
    *(float *)(this + 4208) = v23;
    v17 = v24;
    *(float *)(this + 4212) = v24;
    *(float *)(this + 4216) = v15;
    *(float *)(this + 4220) = v13 - v16;
    *(float *)(this + 4224) = v21 - v17;
    *(float *)(this + 4228) = v22 - v15;
    *(float *)(this + 4256) = *(float *)(this + 4208);
    *(float *)(this + 4260) = *(float *)(this + 4212);
    *(float *)(this + 4264) = *(float *)(this + 4216);
    *(float *)(this + 4244) = *(float *)(this + 4220);
    *(float *)(this + 4248) = *(float *)(this + 4224);
    *(float *)(this + 4252) = *(float *)(this + 4228);
    *(float *)(this + 4276) = 150.0;
    *(float *)(this + 4208) = *(float *)(this + 4208) - v6 * 150.0;
    *(float *)(this + 4212) = *(float *)(this + 4212) - v8 * 150.0;
    *(float *)(this + 4216) = *(float *)(this + 4216) - v11 * 150.0;
    v18 = 1.0 / (double)(v3 - 1);
    *(float *)(this + 4220) = *(float *)(this + 4220) * v18;
    *(float *)(this + 4224) = *(float *)(this + 4224) * v18;
    *(float *)(this + 4228) = v18 * *(float *)(this + 4228);
  }
}
