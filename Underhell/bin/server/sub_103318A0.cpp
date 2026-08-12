char __thiscall sub_103318A0(_DWORD *this, int a2)
{
  char v3; // bl
  float *v4; // eax
  bool v5; // zf
  int (__thiscall *v6)(_DWORD *, float *); // edx
  int v7; // eax
  int v8; // eax
  double v9; // st7
  char v10; // al
  int v11; // eax
  unsigned __int16 *v12; // eax
  double v13; // st7
  double v14; // st7
  double v15; // st7
  int v16; // ecx
  char v17; // bl
  int v18; // eax
  unsigned __int16 *v19; // eax
  unsigned __int16 *v20; // edi
  int v21; // eax
  char result; // al
  int v23; // edi
  float *v24; // eax
  double v25; // st7
  double v26; // st7
  double v27; // st7
  int v28; // edi
  float *v29; // eax
  double v30; // st7
  double v31; // st7
  double v32; // st7
  char v33; // al
  float v34; // [esp+74h] [ebp-64h]
  float v35; // [esp+74h] [ebp-64h]
  char v36; // [esp+78h] [ebp-60h]
  int v37[3]; // [esp+88h] [ebp-50h] BYREF
  int v38; // [esp+94h] [ebp-44h] BYREF
  float v39; // [esp+98h] [ebp-40h]
  float v40; // [esp+9Ch] [ebp-3Ch]
  int v41[2]; // [esp+A0h] [ebp-38h] BYREF
  float v42; // [esp+A8h] [ebp-30h]
  float v43; // [esp+ACh] [ebp-2Ch] BYREF
  float v44; // [esp+B0h] [ebp-28h]
  float v45; // [esp+B4h] [ebp-24h]
  float v46; // [esp+B8h] [ebp-20h] BYREF
  float v47; // [esp+BCh] [ebp-1Ch]
  float v48; // [esp+C0h] [ebp-18h]
  int v49; // [esp+C4h] [ebp-14h] BYREF
  float v50; // [esp+C8h] [ebp-10h]
  float v51; // [esp+CCh] [ebp-Ch]
  char v52[4]; // [esp+D0h] [ebp-8h]
  float v53; // [esp+D4h] [ebp-4h]

  v3 = (*(int (__thiscall **)(_DWORD *, int))(*this + 2252))(this, a2);
  *(float *)&v49 = flt_106F1CA8;
  v50 = flt_106F1CAC;
  v51 = flt_106F1CB0;
  v4 = sub_100C90A0((int)this, (float *)&v38, a2);
  v5 = *((_BYTE *)this + 3777) == 0;
  *(float *)&v49 = *v4 + *(float *)&v49;
  v50 = v4[1] + v50;
  v51 = v4[2] + v51;
  if ( v5 && !v3 && !(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 1) )
  {
    v6 = *(int (__thiscall **)(_DWORD *, float *))(*this + 504);
    *(float *)&v38 = *(float *)&v49 * 0.0049999999;
    v39 = v50 * 0.0049999999;
    v40 = 0.0049999999 * v51;
    v7 = v6(this, &v43);
    sub_10330EE0((int)this, v7, (float *)&v38, 1, 0, 0.0);
  }
  v8 = this[62] >> 9;
  v53 = 0.0;
  if ( (v8 & 1) != 0 )
    v53 = 5.0;
  sub_10112C00((int)(this + 80), 0);
  sub_100EAB80(this, 32);
  *(float *)v41 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                    dword_106B31E4,
                    -400.0,
                    400.0);
  *(float *)&v41[1] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                        dword_106B31E4,
                        -400.0,
                        400.0);
  v9 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
         dword_106B31E4,
         0.0,
         250.0);
  v42 = v9;
  if ( v3 && v9 > 0.0 )
    v42 = v9 * -10.0;
  if ( (this[64] & 0x8000000) == 0
    || (v10 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 508))(dword_106B3CDC), *(_DWORD *)v52 = 1, v10) )
  {
    *(_DWORD *)v52 = 0;
  }
  if ( (this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  if ( (this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  v36 = v52[0];
  v34 = v53;
  v11 = (*(int (__thiscall **)(_DWORD *))(*this + 2336))(this);
  v12 = sub_10166A90(v11, (int)(this + 145), (float *)this + 176, (int)v41, v34, v36);
  if ( v12 )
    sub_1005C620((_BYTE *)v12 + 116, this[29], BYTE1(this[29]), BYTE2(this[29]), HIBYTE(this[29]));
  v13 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
          dword_106B31E4,
          0.039999999,
          0.059999999);
  *(float *)&v49 = *(float *)&v49 * v13;
  v50 = v50 * v13;
  v51 = v13 * v51;
  v14 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
          dword_106B31E4,
          0.80000001,
          1.2)
      * 6000.0;
  v51 = v14;
  if ( v3 && v14 > 0.0 )
    v51 = v14 * -1.0;
  if ( (this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  v15 = *((float *)this + 176);
  v16 = this[64] >> 27;
  v37[1] = this[177];
  v37[2] = this[178];
  *(float *)v37 = v15 - 90.0;
  v17 = (v16 & 1) != 0 && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 508))(dword_106B3CDC);
  if ( (this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  v38 = this[145];
  v39 = *((float *)this + 146);
  v40 = *((float *)this + 147) + 64.0;
  v35 = v53;
  v18 = (*(int (__thiscall **)(_DWORD *))(*this + 2340))(this);
  v19 = sub_10166A90(v18, (int)&v38, (float *)v37, (int)&v49, v35, v17);
  v20 = v19;
  if ( v19 )
  {
    v21 = __RTDynamicCast(
            (int)v19,
            0,
            (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
            (int)&CBaseAnimating `RTTI Type Descriptor',
            0);
    if ( v21 )
      sub_100C1600(v21, 1, *((_BYTE *)this + 3777) == 0);
    (*(void (__thiscall **)(unsigned __int16 *, _DWORD *))(*(_DWORD *)v20 + 76))(v20, this);
    sub_1005C620((_BYTE *)v20 + 116, this[29], BYTE1(this[29]), BYTE2(this[29]), HIBYTE(this[29]));
  }
  result = sub_10265BF0(1);
  if ( result )
  {
    v23 = 4;
    do
    {
      v24 = (float *)(*(int (__thiscall **)(_DWORD *))(*this + 576))(this);
      v46 = *v24;
      v47 = v24[1];
      v48 = v24[2];
      v25 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              -12.0,
              12.0);
      v46 = v25 + v46;
      v26 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              -12.0,
              12.0);
      v47 = v26 + v47;
      v27 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              -4.0,
              16.0);
      v48 = v27 + v48;
      sub_10265D10(&v46, &flt_106F1CA8, 1, 50);
      --v23;
    }
    while ( v23 );
    v28 = 4;
    do
    {
      v29 = (float *)(*(int (__thiscall **)(_DWORD *))(*this + 576))(this);
      v43 = *v29;
      v44 = v29[1];
      v45 = v29[2];
      v30 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              -12.0,
              12.0);
      v43 = v30 + v43;
      v31 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              -12.0,
              12.0);
      v44 = v31 + v44;
      v32 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              -4.0,
              16.0);
      v45 = v32 + v45;
      *(float *)&v38 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                         dword_106B31E4,
                         -1.0,
                         1.0);
      v39 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              -1.0,
              1.0);
      v40 = 0.0;
      off_10689714();
      v33 = (*(int (__thiscall **)(_DWORD *))(*this + 276))(this);
      result = sub_10265280(&v43, (float *)&v38, v33, 1);
      --v28;
    }
    while ( v28 );
  }
  return result;
}
