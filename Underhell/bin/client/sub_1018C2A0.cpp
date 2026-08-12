int __thiscall sub_1018C2A0(int this, int a2)
{
  int v3; // edi
  double v4; // st7
  double v5; // st4
  double v6; // st6
  double (__stdcall *v7)(_DWORD, _DWORD); // eax
  double v8; // st7
  double v9; // st7
  double v10; // st6
  double v11; // st5
  double v12; // st7
  double v13; // st4
  double v14; // st6
  double v15; // st3
  double v16; // rt2
  double v17; // st3
  double v18; // st5
  double v19; // st3
  double v20; // rt1
  double v21; // rt2
  double v22; // st3
  double v23; // st7
  double v24; // st5
  double v25; // rt0
  double v26; // st7
  int result; // eax
  _BYTE v28[12]; // [esp+58h] [ebp-68h] BYREF
  float v29; // [esp+64h] [ebp-5Ch]
  float v30; // [esp+68h] [ebp-58h]
  float v31; // [esp+6Ch] [ebp-54h]
  float v32; // [esp+70h] [ebp-50h]
  float v33; // [esp+74h] [ebp-4Ch]
  float v34; // [esp+78h] [ebp-48h]
  float v35; // [esp+7Ch] [ebp-44h]
  float v36; // [esp+80h] [ebp-40h]
  float v37; // [esp+84h] [ebp-3Ch]
  char v38; // [esp+88h] [ebp-38h]
  char v39; // [esp+89h] [ebp-37h]
  char v40; // [esp+8Ah] [ebp-36h]
  char v41; // [esp+8Bh] [ebp-35h]
  char v42; // [esp+8Ch] [ebp-34h]
  char v43; // [esp+8Dh] [ebp-33h]
  char v44; // [esp+8Eh] [ebp-32h]
  char v45; // [esp+8Fh] [ebp-31h]
  float v46; // [esp+90h] [ebp-30h]
  float v47[3]; // [esp+94h] [ebp-2Ch] BYREF
  float v48; // [esp+A0h] [ebp-20h]
  float v49; // [esp+A4h] [ebp-1Ch]
  float v50; // [esp+ACh] [ebp-14h]
  float v51; // [esp+B0h] [ebp-10h]
  float v52; // [esp+B4h] [ebp-Ch]
  int v53; // [esp+B8h] [ebp-8h]
  int savedregs; // [esp+C0h] [ebp+0h] BYREF

  sub_1018C1A0((float *)(this - 4), COERCE_FLOAT(&savedregs), v47);
  v3 = 16;
  if ( *(_BYTE *)(this + 52) == 1 )
    v3 = 8;
  v45 = 0;
  do
  {
    v48 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
            dword_10413198,
            -32.0,
            32.0);
    v49 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
            dword_10413198,
            -32.0,
            32.0);
    v4 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
           dword_10413198,
           -16.0,
           8.0);
    v5 = *(float *)(this + 36);
    v6 = *(float *)(this + 32) + v49;
    v29 = *(float *)(this + 28) + v48;
    v30 = v6;
    v31 = v4 + v5;
    v36 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
            dword_10413198,
            0.75,
            1.25);
    v37 = 0.0;
    v7 = *(double (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)dword_10413198 + 4);
    v50 = v29 - *(float *)(this + 28);
    v51 = v30 - *(float *)(this + 32);
    v52 = v31 - *(float *)(this + 36);
    v8 = v7(0.5, 1.0);
    v32 = v50 * v8;
    v33 = v51 * v8;
    v34 = v8 * v52;
    v9 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
           dword_10413198,
           0.5,
           1.0);
    v10 = v47[0] * v9;
    v11 = v47[1] * v9;
    v12 = v9 * v47[2];
    v13 = 1.0;
    if ( v10 <= 1.0 )
    {
      if ( v10 >= 0.0 )
      {
        v19 = v10;
        v14 = 1.0;
        v20 = v19;
        v15 = 0.0;
        v13 = v20;
      }
      else
      {
        v13 = 0.0;
        v15 = 0.0;
        v14 = 1.0;
      }
    }
    else
    {
      v14 = 1.0;
      v15 = 0.0;
    }
    v16 = v15;
    v17 = v11;
    v18 = v16;
    if ( v17 <= v14 )
    {
      if ( v17 < v18 )
        v17 = v18;
    }
    else
    {
      v17 = v14;
    }
    v21 = v17;
    v22 = v12;
    v23 = v21;
    if ( v22 <= v14 )
    {
      if ( v22 >= v18 )
        v18 = v22;
      v25 = v18;
      v24 = v13;
      v14 = v25;
    }
    else
    {
      v24 = v13;
    }
    v38 = (int)(v24 * 255.0);
    v39 = (int)(v23 * 255.0);
    v53 = (int)(v14 * 255.0);
    v40 = v53;
    v26 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
            dword_10413198,
            64.0,
            128.0);
    v42 = 0;
    v53 = (int)v26;
    v41 = (int)v26;
    v43 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 16, 32);
    v44 = 3 * v43;
    v53 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 360);
    v35 = (float)v53;
    v46 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
            dword_10413198,
            -0.2,
            0.2);
    result = sub_100F12D0((int)v28, dword_1043DF20[0], 0);
    --v3;
  }
  while ( v3 );
  return result;
}
