char __thiscall sub_10343DB0(float *this, _DWORD *a2, int a3, int *a4)
{
  int v5; // edx
  double v7; // st7
  int (__thiscall *v8)(_DWORD *, float *); // edx
  float *v9; // eax
  int (__thiscall *v10)(float *); // edx
  float *v11; // eax
  int (__thiscall *v12)(_DWORD *, float *, _BYTE *); // edx
  float *v13; // eax
  int (__thiscall *v14)(float *); // edx
  float *v15; // eax
  float *v16; // ecx
  float *v17; // eax
  double v18; // st6
  int (__thiscall *v19)(float *); // edx
  double v20; // st7
  float *v21; // eax
  _BYTE v22[44]; // [esp+8h] [ebp-A8h] BYREF
  float v23; // [esp+34h] [ebp-7Ch]
  _DWORD *v24; // [esp+54h] [ebp-5Ch]
  float v25[3]; // [esp+5Ch] [ebp-54h] BYREF
  float v26[3]; // [esp+68h] [ebp-48h] BYREF
  float v27; // [esp+74h] [ebp-3Ch] BYREF
  float v28; // [esp+78h] [ebp-38h]
  float v29; // [esp+7Ch] [ebp-34h]
  float v30; // [esp+80h] [ebp-30h] BYREF
  float v31; // [esp+84h] [ebp-2Ch]
  float v32; // [esp+88h] [ebp-28h]
  float v33; // [esp+8Ch] [ebp-24h] BYREF
  float v34; // [esp+90h] [ebp-20h]
  float v35; // [esp+94h] [ebp-1Ch]
  float v36; // [esp+98h] [ebp-18h]
  float v37; // [esp+9Ch] [ebp-14h]
  float v38; // [esp+A0h] [ebp-10h]
  float v39; // [esp+A4h] [ebp-Ch]
  float v40; // [esp+A8h] [ebp-8h]
  float v41; // [esp+ACh] [ebp-4h]
  int savedregs; // [esp+B0h] [ebp+0h] BYREF

  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*a2 + 320))(a2) )
    return sub_100CEF80((unsigned int)this, v5, (unsigned int)a2, a3, a4);
  if ( (a2[64] & 0x8000) == 0 )
  {
    if ( ((_DWORD)this[63] & 0x800) != 0 )
      sub_100DAE60((int)this);
    if ( fabs(this[147] - *(float *)((*(int (__thiscall **)(_DWORD *))(*a2 + 576))(a2) + 8)) > 120.0 )
    {
      v36 = 0.0;
      v37 = 0.0;
      v7 = 5.0;
    }
    else
    {
      v36 = flt_106F1CA8;
      v37 = flt_106F1CAC;
      v7 = flt_106F1CB0;
    }
    v38 = v7;
    sub_104222B0(a2 + 182, 0, &v27, 0);
    v8 = *(int (__thiscall **)(_DWORD *, float *))(*a2 + 504);
    v39 = v27 * 0.75 - v36;
    v40 = v28 * 0.75 - v37;
    v41 = 0.75 * v29 - v38;
    v35 = v41;
    v33 = v39;
    v34 = v40;
    v9 = (float *)v8(a2, v25);
    v10 = *(int (__thiscall **)(float *))(*(_DWORD *)this + 504);
    v30 = *v9 + v39;
    v31 = v9[1] + v40;
    v32 = v9[2] + v41;
    v11 = (float *)v10(this);
    sub_1002A5F0((int)&savedregs, (int)this, v11, v26, (int)&v30, 1174421507, (int)this, 0);
    if ( 1.0 == v23 || v24 == a2 )
    {
      v12 = *(int (__thiscall **)(_DWORD *, float *, _BYTE *))(*a2 + 504);
      v39 = -v27 * 0.75 - v36;
      v40 = -v28 * 0.75 - v37;
      v41 = -v29 * 0.75 - v38;
      v35 = v41;
      v33 = v39;
      v34 = v40;
      v13 = (float *)v12(a2, v26, v22);
      v14 = *(int (__thiscall **)(float *))(*(_DWORD *)this + 504);
      v30 = *v13 + v39;
      v31 = v13[1] + v40;
      v32 = v13[2] + v41;
      v15 = (float *)v14(this);
      sub_1002A5F0((int)&savedregs, (int)this, v15, v25, (int)&v30, 1174421507, (int)this, 0);
      if ( 1.0 == v23 || v24 == a2 )
        return 1;
    }
    v16 = (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a2 + 320))(a2) != 0 ? (float *)a2 : 0;
    if ( ((_BYTE)v16[64] & 2) != 0 && *(float *)(dword_106B31C8 + 12) < (double)v16[1043] )
    {
      v17 = (float *)(*(int (__thiscall **)(float *, float *, _BYTE *))(*(_DWORD *)v16 + 504))(v16, v26, v22);
      v18 = v17[1];
      v19 = *(int (__thiscall **)(float *))(*(_DWORD *)this + 504);
      v20 = v17[2] + 32.0;
      v33 = *v17;
      v34 = v18;
      v35 = v20;
      v21 = (float *)v19(this);
      sub_1002A5F0((int)&savedregs, (int)this, v21, v26, (int)&v33, 1174421507, (int)this, 0);
      if ( 1.0 == v23 )
        return 1;
      if ( a4 )
      {
        *a4 = (int)v24;
        return 0;
      }
    }
    else if ( a4 )
    {
      *a4 = (int)v24;
    }
  }
  return 0;
}
