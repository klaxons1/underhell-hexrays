char __userpurge sub_103DBE90@<al>(unsigned int a1@<ecx>, int a2@<edi>, _DWORD *a3, int a4, int *a5)
{
  int v7; // edx
  double v8; // st7
  int (__thiscall *v9)(_DWORD *, float *); // edx
  float *v10; // eax
  int (__thiscall *v11)(unsigned int); // edx
  float *v12; // eax
  int (__thiscall *v13)(_DWORD *, float *, _BYTE *); // edx
  float *v14; // eax
  int (__thiscall *v15)(unsigned int); // edx
  float *v16; // eax
  float *v17; // ecx
  float *v18; // eax
  double v19; // st6
  int (__thiscall *v20)(unsigned int); // edx
  double v21; // st7
  float *v22; // eax
  _BYTE v23[44]; // [esp+4h] [ebp-A8h] BYREF
  float v24; // [esp+30h] [ebp-7Ch]
  int v25; // [esp+50h] [ebp-5Ch]
  float v26[3]; // [esp+58h] [ebp-54h] BYREF
  float v27[3]; // [esp+64h] [ebp-48h] BYREF
  float v28; // [esp+70h] [ebp-3Ch] BYREF
  float v29; // [esp+74h] [ebp-38h]
  float v30; // [esp+78h] [ebp-34h]
  float v31; // [esp+7Ch] [ebp-30h] BYREF
  float v32; // [esp+80h] [ebp-2Ch]
  float v33; // [esp+84h] [ebp-28h]
  float v34; // [esp+88h] [ebp-24h] BYREF
  float v35; // [esp+8Ch] [ebp-20h]
  float v36; // [esp+90h] [ebp-1Ch]
  float v37; // [esp+94h] [ebp-18h]
  float v38; // [esp+98h] [ebp-14h]
  float v39; // [esp+9Ch] [ebp-10h]
  float v40; // [esp+A0h] [ebp-Ch]
  float v41; // [esp+A4h] [ebp-8h]
  float v42; // [esp+A8h] [ebp-4h]
  int savedregs; // [esp+ACh] [ebp+0h] BYREF

  if ( (*(_DWORD *)(a1 + 248) & 0x20000) != 0 && !*(_DWORD *)(a1 + 3712) )
    return 0;
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*a3 + 320))(a3) )
    return sub_100CEF80(a1, v7, (unsigned int)a3, a4, a5);
  if ( (a3[64] & 0x8000) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    if ( fabs(*(float *)(a1 + 588) - *(float *)((*(int (__thiscall **)(_DWORD *, int))(*a3 + 576))(a3, a2) + 8)) > 120.0 )
    {
      v37 = 0.0;
      v38 = 0.0;
      v8 = 5.0;
    }
    else
    {
      v37 = flt_106F1CA8;
      v38 = flt_106F1CAC;
      v8 = flt_106F1CB0;
    }
    v39 = v8;
    sub_104222B0(a3 + 182, 0, &v28, 0);
    v9 = *(int (__thiscall **)(_DWORD *, float *))(*a3 + 504);
    v40 = v28 * 0.75 - v37;
    v41 = v29 * 0.75 - v38;
    v42 = 0.75 * v30 - v39;
    v36 = v42;
    v34 = v40;
    v35 = v41;
    v10 = (float *)v9(a3, v26);
    v11 = *(int (__thiscall **)(unsigned int))(*(_DWORD *)a1 + 504);
    v31 = *v10 + v40;
    v32 = v10[1] + v41;
    v33 = v10[2] + v42;
    v12 = (float *)v11(a1);
    sub_1002A5F0((int)&savedregs, a1, v12, v27, (int)&v31, 16449, a1, 0);
    if ( 1.0 == v24 )
    {
      v13 = *(int (__thiscall **)(_DWORD *, float *, _BYTE *))(*a3 + 504);
      v40 = -v28 * 0.75 - v37;
      v41 = -v29 * 0.75 - v38;
      v42 = -v30 * 0.75 - v39;
      v36 = v42;
      v34 = v40;
      v35 = v41;
      v14 = (float *)v13(a3, v27, v23);
      v15 = *(int (__thiscall **)(unsigned int))(*(_DWORD *)a1 + 504);
      v31 = *v14 + v40;
      v32 = v14[1] + v41;
      v33 = v14[2] + v42;
      v16 = (float *)v15(a1);
      sub_1002A5F0((int)&savedregs, a1, v16, v26, (int)&v31, 16449, a1, 0);
      if ( 1.0 == v24 )
        return 1;
    }
    v17 = (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a3 + 320))(a3) != 0 ? (float *)a3 : 0;
    if ( ((_BYTE)v17[64] & 2) != 0 && *(float *)(dword_106B31C8 + 12) < (double)v17[1043] )
    {
      v18 = (float *)(*(int (__thiscall **)(float *, float *, _BYTE *))(*(_DWORD *)v17 + 504))(v17, v27, v23);
      v19 = v18[1];
      v20 = *(int (__thiscall **)(unsigned int))(*(_DWORD *)a1 + 504);
      v21 = v18[2] + 32.0;
      v34 = *v18;
      v35 = v19;
      v36 = v21;
      v22 = (float *)v20(a1);
      sub_1002A5F0((int)&savedregs, a1, v22, v27, (int)&v34, 16449, a1, 0);
      if ( 1.0 != v24 )
      {
        if ( a5 )
        {
          *a5 = v25;
          return 0;
        }
        return 0;
      }
      return 1;
    }
    if ( a5 )
      *a5 = v25;
  }
  return 0;
}
