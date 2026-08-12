void __thiscall sub_1038D800(int this)
{
  float *v2; // eax
  float *v3; // edi
  double v4; // st5
  double v5; // st6
  float v6; // eax
  float v7; // edx
  double v8; // st7
  double v9; // st7
  double v10; // st6
  double v11; // st5
  double v12; // st7
  float v13; // [esp+0h] [ebp-48h]
  float v14; // [esp+4h] [ebp-44h]
  float v15[3]; // [esp+14h] [ebp-34h] BYREF
  float v16; // [esp+20h] [ebp-28h] BYREF
  float v17; // [esp+24h] [ebp-24h]
  float v18; // [esp+28h] [ebp-20h]
  float v19; // [esp+2Ch] [ebp-1Ch] BYREF
  float v20; // [esp+30h] [ebp-18h]
  float v21; // [esp+34h] [ebp-14h]
  float v22; // [esp+38h] [ebp-10h]
  float v23; // [esp+3Ch] [ebp-Ch]
  float v24; // [esp+40h] [ebp-8h]
  float v25; // [esp+44h] [ebp-4h] BYREF

  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v2 = sub_1038C4E0((void *)this, v15, this + 580, 0);
  v22 = *v2;
  v23 = v2[1];
  v24 = v2[2];
  v3 = (float *)(this + 4208);
  v16 = *(float *)(this + 4244) + *(float *)(this + 4256);
  v17 = *(float *)(this + 4260) + *(float *)(this + 4248);
  v18 = *(float *)(this + 4252) + *(float *)(this + 4264);
  sub_10424590(this + 4208, this + 4256, &v16, &v19, 0);
  v4 = v23;
  v5 = v24;
  if ( (v22 - v19) * (v22 - v19) + (v23 - v20) * (v23 - v20) + (v24 - v21) * (v24 - v21) > *(float *)(this + 4276)
                                                                                         * *(float *)(this + 4276) )
  {
    v15[0] = *(float *)(this + 4220) + *v3;
    v15[1] = *(float *)(this + 4212) + *(float *)(this + 4224);
    v15[2] = *(float *)(this + 4216) + *(float *)(this + 4228);
    v16 = *(float *)(this + 4244) + *(float *)(this + 4256);
    v17 = *(float *)(this + 4260) + *(float *)(this + 4248);
    v18 = *(float *)(this + 4252) + *(float *)(this + 4264);
    sub_10424590(v15, this + 4256, &v16, &v19, &v25);
    if ( v25 < -0.1 || v25 > 1.1 )
    {
      *(float *)(this + 4220) = *(float *)(this + 4220) * -1.0;
      *(float *)(this + 4224) = *(float *)(this + 4224) * -1.0;
      *(float *)(this + 4228) = -1.0 * *(float *)(this + 4228);
      v6 = *(float *)(this + 4220);
      v7 = *(float *)(this + 4228);
      v23 = *(float *)(this + 4224);
      v22 = v6;
      v24 = v7;
      v8 = off_10689714();
      v14 = 0.5 * v8;
      v13 = v8 * -0.5;
      v9 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
             dword_106B31E4,
             LODWORD(v13),
             LODWORD(v14));
      v10 = v22 * v9;
      v11 = v23 * v9;
      v12 = v9 * v24;
      *v3 = v10 + *v3;
      *(float *)(this + 4212) = v11 + *(float *)(this + 4212);
      *(float *)(this + 4216) = v12 + *(float *)(this + 4216);
    }
  }
  else
  {
    *(float *)(this + 4220) = v22 - *v3;
    *(float *)(this + 4224) = v4 - *(float *)(this + 4212);
    *(float *)(this + 4228) = v5 - *(float *)(this + 4216);
    if ( *(float *)(this + 4224) * *(float *)(this + 4224)
       + *(float *)(this + 4220) * *(float *)(this + 4220)
       + *(float *)(this + 4228) * *(float *)(this + 4228) > 62500.0 )
    {
      off_10689714();
      *(float *)(this + 4220) = *(float *)(this + 4220) * 250.0;
      *(float *)(this + 4224) = *(float *)(this + 4224) * 250.0;
      *(float *)(this + 4228) = 250.0 * *(float *)(this + 4228);
    }
  }
}
