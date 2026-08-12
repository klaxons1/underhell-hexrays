void __thiscall sub_10158B30(_DWORD *this)
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
  int v17; // edi
  double v18; // st7
  float *v19; // eax
  int v20; // edi
  int (__thiscall *v21)(_DWORD *, _DWORD, int, _BYTE *); // edx
  double v22; // st7
  int v23; // eax
  int v24; // edi
  int (__thiscall *v25)(_DWORD *, _DWORD, int, _BYTE *); // edx
  int v26; // eax
  int v27; // eax
  _BYTE v28[24]; // [esp+4h] [ebp-94h] BYREF
  float v29; // [esp+1Ch] [ebp-7Ch]
  float v30; // [esp+20h] [ebp-78h]
  float v31; // [esp+24h] [ebp-74h]
  float v32; // [esp+30h] [ebp-68h]
  int v33; // [esp+50h] [ebp-48h]
  float v34[3]; // [esp+58h] [ebp-40h] BYREF
  float v35; // [esp+64h] [ebp-34h]
  float v36; // [esp+68h] [ebp-30h]
  float v37; // [esp+6Ch] [ebp-2Ch]
  float v38; // [esp+70h] [ebp-28h]
  float v39; // [esp+74h] [ebp-24h] BYREF
  float v40; // [esp+78h] [ebp-20h]
  float v41; // [esp+7Ch] [ebp-1Ch]
  float v42; // [esp+80h] [ebp-18h]
  float v43; // [esp+84h] [ebp-14h]
  float v44; // [esp+88h] [ebp-10h]
  float v45; // [esp+8Ch] [ebp-Ch] BYREF
  float v46; // [esp+90h] [ebp-8h]
  float v47; // [esp+94h] [ebp-4h]

  sub_10422220(this[2] + 12, v34);
  if ( 0.0 == *(float *)(this[1] + 4136) && *(float *)(this[2] + 72) >= -180.0 )
  {
    v2 = this[2];
    v36 = *(float *)(v2 + 64);
    v37 = *(float *)(v2 + 68);
    v38 = 0.0;
    v35 = off_10689714();
    v42 = v34[0];
    v43 = v34[1];
    v44 = 0.0;
    off_10689714();
    if ( 0.0 == v35 || v37 * v43 + v42 * v36 + v44 * v38 >= 0.0 )
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
      v39 = v14;
      v40 = v12;
      v41 = v13;
      v45 = v14 + v42 * 24.0;
      v46 = v12 + v43 * 24.0;
      v47 = v13 + 24.0 * v44;
      v15 = v11(this, 0, 8, v28);
      (*(void (__thiscall **)(_DWORD *, float *, float *, int))(v10 + 40))(this, &v39, &v45, v15);
      if ( v32 < 1.0 )
      {
        v16 = *(_DWORD *)(v33 + 424);
        if ( !v16 || ((*(int (__thiscall **)(int))(*(_DWORD *)v16 + 76))(v16) & 4) == 0 )
        {
          v17 = this[2];
          v18 = *(float *)((*(int (__thiscall **)(_DWORD))(*(_DWORD *)this[1] + 532))(this[1]) + 8)
              + *(float *)(v17 + 160);
          v19 = (float *)this[1];
          v20 = *this;
          v21 = *(int (__thiscall **)(_DWORD *, _DWORD, int, _BYTE *))(*this + 44);
          v22 = v18 + 8.0;
          v41 = v22;
          v45 = v42 * 24.0 + v39;
          v46 = v43 * 24.0 + v40;
          v47 = v22 + 24.0 * v44;
          v19[1035] = flt_106F1CA8 - v29 * 50.0;
          v19[1036] = flt_106F1CAC - v30 * 50.0;
          v19[1037] = flt_106F1CB0 - 50.0 * v31;
          v23 = v21(this, 0, 8, v28);
          (*(void (__thiscall **)(_DWORD *, float *, float *, int))(v20 + 40))(this, &v39, &v45, v23);
          if ( 1.0 == v32 )
          {
            v24 = *this;
            v25 = *(int (__thiscall **)(_DWORD *, _DWORD, int, _BYTE *))(*this + 44);
            v39 = v45;
            v40 = v46;
            v41 = v47;
            v47 = v47 - 1024.0;
            v26 = v25(this, 0, 8, v28);
            (*(void (__thiscall **)(_DWORD *, float *, float *, int))(v24 + 40))(this, &v39, &v45, v26);
            if ( v32 < 1.0 && v31 >= 0.7 )
            {
              v27 = this[2];
              *(float *)(v27 + 72) = 256.0;
              *(_DWORD *)(v27 + 40) |= 2u;
              sub_100EA940((int *)this[1], 4);
              *(float *)(this[1] + 4136) = 2000.0;
            }
          }
        }
      }
    }
  }
}
