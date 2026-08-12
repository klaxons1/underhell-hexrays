char __thiscall sub_1015D5A0(int *this)
{
  int v2; // eax
  double v3; // st6
  double v4; // st7
  int v5; // ecx
  char result; // al
  int v7; // eax
  float *v8; // edi
  double v9; // st7
  int v10; // ebx
  int (__thiscall *v11)(int *, int, _BYTE *); // eax
  double v12; // st7
  int v13; // edi
  int v14; // eax
  int v15; // edx
  float *v16; // eax
  float *v17; // eax
  int (__thiscall *v18)(int *); // edx
  int v19; // eax
  bool v20; // bl
  int v21; // edx
  int v22; // edx
  int v23; // ecx
  double v24; // st5
  int v25; // eax
  double v26; // st4
  double v27; // st7
  float *v28; // esi
  double v29; // st6
  double v30; // rt1
  double v31; // st1
  double v32; // st7
  float *v33; // eax
  double v34; // st6
  double v35; // st7
  float *v36; // esi
  _BYTE v37[24]; // [esp+4h] [ebp-A0h] BYREF
  float v38; // [esp+1Ch] [ebp-88h] BYREF
  float v39; // [esp+20h] [ebp-84h]
  float v40; // [esp+24h] [ebp-80h]
  float v41; // [esp+30h] [ebp-74h]
  float v42[3]; // [esp+58h] [ebp-4Ch] BYREF
  float v43[3]; // [esp+64h] [ebp-40h] BYREF
  float v44; // [esp+70h] [ebp-34h]
  float v45[2]; // [esp+74h] [ebp-30h] BYREF
  float v46; // [esp+7Ch] [ebp-28h]
  float v47; // [esp+80h] [ebp-24h] BYREF
  float v48; // [esp+84h] [ebp-20h]
  float v49; // [esp+88h] [ebp-1Ch]
  float v50; // [esp+8Ch] [ebp-18h]
  float v51; // [esp+90h] [ebp-14h]
  float v52; // [esp+94h] [ebp-10h]
  float v53; // [esp+98h] [ebp-Ch]
  float v54; // [esp+9Ch] [ebp-8h]
  float v55; // [esp+A0h] [ebp-4h]

  if ( *(_BYTE *)(this[1] + 306) == 8 || !(*(unsigned __int8 (__thiscall **)(int *))(*this + 196))(this) )
    return 0;
  v2 = this[1];
  if ( *(_BYTE *)(v2 + 306) != 9 )
  {
    v5 = this[2];
    if ( 0.0 != *(float *)(v5 + 44) || *(float *)(v5 + 48) != 0.0 )
    {
      v7 = this[2];
      v50 = *((float *)this + 9) * *(float *)(v5 + 48) + *((float *)this + 6) * *(float *)(v7 + 44);
      v51 = *((float *)this + 10) * *(float *)(v7 + 48) + *((float *)this + 7) * *(float *)(v7 + 44);
      v52 = *((float *)this + 11) * *(float *)(v7 + 48) + *((float *)this + 8) * *(float *)(v7 + 44);
      off_10689714();
      goto LABEL_9;
    }
    return 0;
  }
  v3 = -*(float *)(v2 + 4164);
  v4 = -*(float *)(v2 + 4168);
  v50 = -*(float *)(v2 + 4160);
  v51 = v3;
  v52 = v4;
LABEL_9:
  v8 = (float *)this[2];
  v9 = ((double (__thiscall *)(int *))*(_DWORD *)(*this + 124))(this);
  v10 = *this;
  v11 = *(int (__thiscall **)(int *, int, _BYTE *))(*this + 128);
  v43[0] = v50 * v9 + v8[38];
  v43[1] = v51 * v9 + v8[39];
  v12 = v9 * v52 + v8[40];
  v13 = this[2] + 152;
  v43[2] = v12;
  v14 = v11(this, 8, v37);
  (*(void (__thiscall **)(int *, int, float *, int))(v10 + 40))(this, v13, v43, v14);
  if ( 1.0 == v41 || !(*(unsigned __int8 (__thiscall **)(int *, _BYTE *))(*this + 120))(this, v37) )
    return 0;
  sub_100E0970(this[1], v15, 9, 0);
  sub_1015D550(this[1], 0);
  v16 = (float *)this[1];
  v16[1040] = v38;
  v16[1041] = v39;
  v16[1042] = v40;
  v17 = (float *)this[2];
  v45[0] = v17[38];
  v45[1] = v17[39];
  v18 = *(int (__thiscall **)(int *))(*this + 32);
  v46 = v17[40];
  v19 = v18(this);
  v46 = *(float *)(v19 + 8) - 1.0 + v46;
  v20 = (**(int (__thiscall ***)(int, float *, _DWORD))dword_106B31F4)(dword_106B31F4, v45, 0) == 1
     || sub_101C5260(this[1]);
  v21 = *this;
  *(float *)(this[1] + 552) = 0.0;
  (*(void (__thiscall **)(int *))(v21 + 132))(this);
  v23 = this[2];
  v24 = 0.0;
  v25 = *(_DWORD *)(v23 + 36);
  v26 = 0.0;
  if ( (v25 & 0x10) != 0 )
    v24 = -0.0;
  if ( (v25 & 8) != 0 )
    v24 = v24 + 0.0;
  if ( (v25 & 0x200) != 0 )
    v26 = -0.0;
  if ( (v25 & 0x400) != 0 )
    v27 = v26 + 0.0;
  else
    v27 = v26;
  if ( (v25 & 2) != 0 )
  {
    sub_100E0970(this[1], v22, 2, 0);
    sub_1015D550(this[1], 0);
    v28 = (float *)this[2];
    result = 1;
    v28[16] = v38 * 270.0;
    v28[17] = v39 * 270.0;
    v28[18] = 270.0 * v40;
  }
  else if ( 0.0 == v24 && 0.0 == v27 )
  {
    *(float *)(v23 + 64) = 0.0;
    result = 1;
    *(float *)(v23 + 68) = 0.0;
    *(float *)(v23 + 72) = 0.0;
  }
  else
  {
    v29 = v24 * *((float *)this + 8);
    v30 = *((float *)this + 7) * v24;
    v53 = v24 * *((float *)this + 6) + *((float *)this + 9) * v27;
    v54 = v30 + *((float *)this + 10) * v27;
    v55 = v27 * *((float *)this + 11) + v29;
    v47 = flt_106F1CA8;
    v48 = flt_106F1CAC;
    v49 = 1.0;
    sub_1001EFB0(&v47, &v38, v42);
    off_10689714();
    v31 = v40 * v55 + v38 * v53 + v39 * v54;
    v44 = v31;
    v53 = v53 - v38 * v31;
    v54 = v54 - v39 * v31;
    v55 = v55 - v40 * v31;
    sub_1001EFB0(&v38, v42, &v47);
    v32 = v44;
    v33 = (float *)this[2];
    v34 = -v44;
    v33[16] = v47 * v34 + v53;
    v33[17] = v48 * v34 + v54;
    v33[18] = v34 * v49 + v55;
    if ( v20 && v32 > 0.0 )
    {
      v35 = *(float *)(dword_106B35EC + 44);
      v36 = (float *)this[2];
      result = 1;
      v36[16] = v38 * v35 + v36[16];
      v36[17] = v39 * v35 + v36[17];
      v36[18] = v35 * v40 + v36[18];
    }
    else
    {
      return 1;
    }
  }
  return result;
}
