bool __thiscall sub_103D90C0(float *this, char *a2)
{
  char *v3; // edi
  float *v4; // eax
  double v5; // st6
  double v6; // st7
  int (__thiscall *v7)(float *, _BYTE *); // edx
  float *v8; // eax
  int (__thiscall *v9)(char *, _BYTE *); // edx
  float *v10; // eax
  float *v11; // eax
  int v12; // edx
  int (__thiscall *v13)(char *, float *, int); // edx
  float *v14; // eax
  double v15; // st6
  double v16; // st4
  double v17; // st5
  double v18; // st6
  double v19; // st7
  float *v21; // eax
  int v22; // [esp+18h] [ebp-64h]
  float v23; // [esp+18h] [ebp-64h]
  float v24[3]; // [esp+28h] [ebp-54h] BYREF
  float v25[3]; // [esp+34h] [ebp-48h] BYREF
  _BYTE v26[12]; // [esp+40h] [ebp-3Ch] BYREF
  _BYTE v27[12]; // [esp+4Ch] [ebp-30h] BYREF
  float v28[3]; // [esp+58h] [ebp-24h] BYREF
  float v29; // [esp+64h] [ebp-18h]
  float v30; // [esp+68h] [ebp-14h]
  float v31; // [esp+6Ch] [ebp-10h]
  float v32; // [esp+70h] [ebp-Ch]
  float v33; // [esp+74h] [ebp-8h]
  float v34; // [esp+78h] [ebp-4h]
  float v35; // [esp+84h] [ebp+8h]

  if ( a2[256] < 0
    && (v3 = (*(unsigned __int8 (__thiscall **)(char *))(*(_DWORD *)a2 + 320))(a2) != 0 ? a2 : 0,
        ((_DWORD)this[62] & 0x20000) != 0) )
  {
    v4 = (float *)(*(int (__thiscall **)(float *, float *))(*(_DWORD *)this + 504))(this, v28);
    v5 = this[908] - v4[1];
    v6 = this[909] - v4[2];
    v32 = this[907] - *v4;
    v33 = v5;
    v34 = v6;
    off_10689714();
    v7 = *(int (__thiscall **)(float *, _BYTE *))(*(_DWORD *)this + 504);
    v29 = v32 * 8192.0;
    v30 = v33 * 8192.0;
    v31 = 8192.0 * v34;
    v8 = (float *)v7(this, v27);
    v28[0] = *v8 + v29;
    v28[1] = v8[1] + v30;
    v9 = *(int (__thiscall **)(char *, _BYTE *))(*(_DWORD *)v3 + 504);
    v28[2] = v8[2] + v31;
    v22 = v9(v3, v26);
    v10 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 504))(this);
    v11 = sub_10086040(v24, v10, v25, v28);
    v12 = *(_DWORD *)v3;
    v29 = *v11;
    v13 = *(int (__thiscall **)(char *, float *, int))(v12 + 504);
    v30 = v11[1];
    v31 = v11[2];
    v14 = (float *)v13(v3, v24, v22);
    v15 = v14[1] - v30;
    v16 = *v14 - v29;
    v17 = v15 * v15;
    v18 = v14[2] - v31;
    v23 = v16 * v16 + v17 + v18 * v18;
    v19 = off_10689708(v23);
    if ( 0.0 != *(float *)(dword_106ED294 + 44) )
    {
      Msg("Dist from beam: %f\n", v19);
      v35 = v19;
      v19 = v35;
    }
    return v19 <= *(float *)(dword_106ED24C + 44);
  }
  else
  {
    v21 = (float *)(*(int (__thiscall **)(char *, float *))(*(_DWORD *)a2 + 504))(a2, v24);
    return sub_100C7790(this, v21);
  }
}
