void __thiscall sub_100A9F90(_DWORD *this)
{
  int v2; // eax
  float *v3; // edi
  float *v4; // eax
  double v5; // st7
  double v6; // st6
  double v7; // st5
  float *v8; // eax
  double v9; // st5
  int v10; // edi
  int (__thiscall *v11)(_DWORD *, _DWORD, int, _BYTE *); // edx
  double v12; // st6
  double v13; // rt0
  double v14; // st5
  int v15; // eax
  int v16; // ecx
  float *v17; // eax
  int v18; // edi
  double v19; // st7
  int v20; // eax
  int v21; // edi
  int (__thiscall *v22)(_DWORD *, _DWORD, int, _BYTE *); // edx
  int v23; // eax
  int v24; // eax
  _BYTE v25[24]; // [esp+4h] [ebp-94h] BYREF
  float v26; // [esp+1Ch] [ebp-7Ch]
  float v27; // [esp+20h] [ebp-78h]
  float v28; // [esp+24h] [ebp-74h]
  float v29; // [esp+30h] [ebp-68h]
  int v30; // [esp+50h] [ebp-48h]
  float v31[3]; // [esp+58h] [ebp-40h] BYREF
  float v32; // [esp+64h] [ebp-34h]
  float v33; // [esp+68h] [ebp-30h]
  float v34; // [esp+6Ch] [ebp-2Ch]
  float v35; // [esp+70h] [ebp-28h]
  float v36; // [esp+74h] [ebp-24h] BYREF
  float v37; // [esp+78h] [ebp-20h]
  float v38; // [esp+7Ch] [ebp-1Ch]
  float v39; // [esp+80h] [ebp-18h]
  float v40; // [esp+84h] [ebp-14h]
  float v41; // [esp+88h] [ebp-10h]
  float v42; // [esp+8Ch] [ebp-Ch] BYREF
  float v43; // [esp+90h] [ebp-8h]
  float v44; // [esp+94h] [ebp-4h]

  sub_101EDFB0(this[2] + 12, v31);
  if ( 0.0 == *(float *)(this[1] + 4212) && *(float *)(this[2] + 72) >= -180.0 )
  {
    v2 = this[2];
    v33 = *(float *)(v2 + 64);
    v34 = *(float *)(v2 + 68);
    v35 = 0.0;
    v32 = off_103EDFEC();
    v39 = v31[0];
    v40 = v31[1];
    v41 = 0.0;
    off_103EDFEC();
    if ( 0.0 == v32 || v34 * v40 + v39 * v33 + v41 * v35 >= 0.0 )
    {
      v3 = (float *)(*(int (__thiscall **)(_DWORD *))(*this + 36))(this);
      v4 = (float *)(*(int (__thiscall **)(_DWORD *))(*this + 32))(this);
      v5 = *v4 + *v3;
      v6 = v4[1] + v3[1];
      v7 = v4[2];
      v8 = (float *)this[2];
      v9 = v7 + v3[2];
      v10 = *this;
      v11 = *(int (__thiscall **)(_DWORD *, _DWORD, int, _BYTE *))(*this + 44);
      v12 = v6 * 0.5 + v8[39];
      v13 = v9 * 0.5 + v8[40];
      v14 = v5 * 0.5 + v8[38];
      v36 = v14;
      v37 = v12;
      v38 = v13;
      v42 = v14 + v39 * 24.0;
      v43 = v12 + v40 * 24.0;
      v44 = v13 + 24.0 * v41;
      v15 = v11(this, 0, 8, v25);
      (*(void (__thiscall **)(_DWORD *, float *, float *, int))(v10 + 40))(this, &v36, &v42, v15);
      if ( v29 < 1.0 )
      {
        v16 = *(_DWORD *)(v30 + 184);
        if ( !v16 || ((*(int (__thiscall **)(int))(*(_DWORD *)v16 + 76))(v16) & 4) == 0 )
        {
          v17 = (float *)this[1];
          v18 = *this;
          v19 = v17[57] + *(float *)(this[2] + 160) + 8.0;
          v38 = v19;
          v42 = v39 * 24.0 + v36;
          v43 = v40 * 24.0 + v37;
          v44 = v19 + 24.0 * v41;
          v17[1050] = flt_10459240 - v26 * 50.0;
          v17[1051] = *(float *)&qword_10459244 - v27 * 50.0;
          v17[1052] = *((float *)&qword_10459244 + 1) - 50.0 * v28;
          v20 = (*(int (__thiscall **)(_DWORD *, _DWORD, int, _BYTE *))(v18 + 44))(this, 0, 8, v25);
          (*(void (__thiscall **)(_DWORD *, float *, float *, int))(v18 + 40))(this, &v36, &v42, v20);
          if ( 1.0 == v29 )
          {
            v21 = *this;
            v22 = *(int (__thiscall **)(_DWORD *, _DWORD, int, _BYTE *))(*this + 44);
            v36 = v42;
            v37 = v43;
            v38 = v44;
            v44 = v44 - 1024.0;
            v23 = v22(this, 0, 8, v25);
            (*(void (__thiscall **)(_DWORD *, float *, float *, int))(v21 + 40))(this, &v36, &v42, v23);
            if ( v29 < 1.0 && v28 >= 0.7 )
            {
              v24 = this[2];
              *(float *)(v24 + 72) = 256.0;
              *(_DWORD *)(v24 + 40) |= 2u;
              sub_1000DEB0((_DWORD *)this[1], 4);
              *(float *)(this[1] + 4212) = 2000.0;
            }
          }
        }
      }
    }
  }
}
