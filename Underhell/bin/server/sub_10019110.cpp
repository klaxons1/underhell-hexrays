void __thiscall sub_10019110(void *this, float *a2, float a3, float a4)
{
  int v5; // eax
  double v6; // st7
  double (__thiscall *v7)(int, _DWORD, _DWORD); // eax
  double v8; // st7
  int (__thiscall *v9)(void *, _BYTE *); // edx
  float *v10; // eax
  double v11; // st7
  double v12; // st6
  double v13; // st5
  double v14; // st7
  double (__thiscall *v15)(int, _DWORD, _DWORD); // edx
  double v16; // st7
  int (__thiscall *v17)(void *, _BYTE *); // edx
  float *v18; // eax
  _BYTE v19[12]; // [esp+34h] [ebp-54h] BYREF
  float v20; // [esp+40h] [ebp-48h]
  float v21; // [esp+44h] [ebp-44h]
  float v22; // [esp+48h] [ebp-40h]
  float v23; // [esp+4Ch] [ebp-3Ch]
  float v24; // [esp+50h] [ebp-38h]
  float v25; // [esp+54h] [ebp-34h]
  float v26; // [esp+58h] [ebp-30h]
  float v27; // [esp+5Ch] [ebp-2Ch]
  float v28; // [esp+60h] [ebp-28h]
  float v29; // [esp+64h] [ebp-24h] BYREF
  float v30; // [esp+68h] [ebp-20h]
  float v31; // [esp+6Ch] [ebp-1Ch]
  float v32; // [esp+70h] [ebp-18h] BYREF
  float v33; // [esp+74h] [ebp-14h]
  float v34; // [esp+78h] [ebp-10h]
  float v35; // [esp+7Ch] [ebp-Ch] BYREF
  float v36; // [esp+80h] [ebp-8h]
  float v37; // [esp+84h] [ebp-4h]

  (*(void (__thiscall **)(void *, float *, float *, float *))(*(_DWORD *)this + 528))(this, &v29, &v32, &v35);
  if ( (*(int (__thiscall **)(void *))(*(_DWORD *)this + 288))(this)
    && (v5 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 288))(this),
        (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 1088))(v5)) )
  {
    v6 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           -32.0,
           32.0);
    v7 = *(double (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 4);
    v20 = v35 * v6;
    v21 = v36 * v6;
    v22 = v6 * v37;
    v8 = v7(dword_106B31E4, -650.0, 650.0);
    v9 = *(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)this + 504);
    v23 = v32 * v8;
    v24 = v33 * v8;
    v25 = v8 * v34;
    v26 = v29 * 2048.0;
    v27 = v30 * 2048.0;
    v28 = 2048.0 * v31;
    v10 = (float *)v9(this, v19);
    v11 = v26 + *v10 + v23 + v20;
    v12 = v10[1] + v27 + v24 + v21;
    v13 = v10[2] + v28 + v25 + v22;
  }
  else
  {
    v14 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            -16.0,
            16.0);
    v15 = *(double (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 4);
    v26 = v35 * v14;
    v27 = v36 * v14;
    v28 = v14 * v37;
    v16 = v15(dword_106B31E4, -32.0, 32.0);
    v17 = *(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)this + 504);
    v23 = v32 * v16;
    v24 = v33 * v16;
    v25 = v16 * v34;
    v20 = v29 * 128.0;
    v21 = v30 * 128.0;
    v22 = 128.0 * v31;
    v18 = (float *)v17(this, v19);
    v11 = v20 + *v18 + v23 + v26;
    v12 = v18[1] + v21 + v24 + v27;
    v13 = v18[2] + v22 + v25 + v28;
  }
  a2[1] = v11;
  a2[2] = v12;
  a2[3] = v13;
  a2[4] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            LODWORD(a3),
            LODWORD(a4));
  a2[5] = 0.0099999998;
  a2[6] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            0.80000001,
            2.8);
}
