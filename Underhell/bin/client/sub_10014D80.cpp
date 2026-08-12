unsigned int __thiscall sub_10014D80(int this, int a2, float *a3, int a4)
{
  float v4; // edx
  float v6; // eax
  float *v7; // edi
  float v8; // ecx
  float v9; // edx
  float v10; // eax
  float *v11; // ebx
  int v12; // eax
  double v13; // st7
  double v14; // st6
  double v15; // st5
  double v16; // st4
  double v17; // st7
  double v18; // st4
  double v19; // st7
  double v20; // rt1
  unsigned int result; // eax
  int v22; // edi
  int v23; // eax
  float v24; // [esp+20h] [ebp-9Ch]
  int v25; // [esp+24h] [ebp-98h]
  _BYTE v26[12]; // [esp+3Ch] [ebp-80h] BYREF
  float v27[3]; // [esp+48h] [ebp-74h] BYREF
  _BYTE v28[12]; // [esp+54h] [ebp-68h] BYREF
  _DWORD v29[3]; // [esp+60h] [ebp-5Ch] BYREF
  int v30[3]; // [esp+6Ch] [ebp-50h] BYREF
  float v31; // [esp+78h] [ebp-44h] BYREF
  float v32; // [esp+7Ch] [ebp-40h]
  float v33; // [esp+80h] [ebp-3Ch]
  int v34; // [esp+84h] [ebp-38h] BYREF
  float v35; // [esp+88h] [ebp-34h]
  float v36; // [esp+8Ch] [ebp-30h]
  float v37[3]; // [esp+90h] [ebp-2Ch] BYREF
  float v38; // [esp+9Ch] [ebp-20h] BYREF
  float v39; // [esp+A0h] [ebp-1Ch]
  float v40; // [esp+A4h] [ebp-18h]
  float v41; // [esp+A8h] [ebp-14h] BYREF
  float v42; // [esp+ACh] [ebp-10h]
  float v43; // [esp+B0h] [ebp-Ch]
  float v44[2]; // [esp+B4h] [ebp-8h] BYREF
  int v45; // [esp+C4h] [ebp+8h]

  v4 = *(float *)(a4 + 4);
  v6 = *(float *)(a4 + 8);
  v7 = a3;
  v37[0] = *(float *)a4;
  v8 = *a3;
  v37[1] = v4;
  v9 = a3[1];
  v37[2] = v6;
  v10 = a3[2];
  v41 = v8;
  v42 = v9;
  v43 = v10;
  v11 = (float *)sub_100422D0();
  if ( !(*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)off_103ED0FC + 56))(off_103ED0FC) )
    ((void (__stdcall *)(float *, float *, _DWORD))(*off_103E77E8)[8])(&v41, v37, 0.1);
  v12 = *(_DWORD *)(this + 1980);
  if ( v12 == 2 )
  {
    if ( v37[0] < 0.0 )
      v37[0] = 0.0;
  }
  else if ( v12 != 1 )
  {
    sub_10014C30(a2, &v41, v37);
    v13 = (*((float *)off_103DC81C + 3) - v11[838]) / flt_103D71D4;
    if ( *(_BYTE *)(this + 1960) )
    {
      if ( v13 > 1.0 )
        v13 = 1.0;
    }
    else if ( v13 <= 1.0 )
    {
      v13 = 1.0 - v13;
    }
    else
    {
      v13 = 0.0;
    }
    *(float *)(this + 1964) = v13;
    v14 = v41 - *v7;
    v15 = v42 - v7[1];
    v16 = v13;
    v17 = v43 - v7[2];
    flt_104024C8 = v16;
    v18 = *(float *)(this + 1964);
    v19 = v17 * v18 + v7[2];
    v20 = v15 * v18 + v7[1];
    v41 = v14 * v18 + *v7;
    v42 = v20;
    v43 = v19;
  }
  sub_10034A30(&v41);
  sub_10034B10(v37);
  v45 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)cvar + 52))(cvar, "cam_ots_freeaim_enable");
  result = *(_DWORD *)(this + 2012);
  if ( result == -1 || (result >>= 12, *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 2012) & 0xFFF) + 2) != result) )
    v22 = 0;
  else
    v22 = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 2012) & 0xFFF) + 1);
  if ( *(_BYTE *)(this + 1960) )
  {
    if ( v22 )
    {
      result = sub_10029F50(*(_DWORD *)(this + 1808));
      if ( result == 174 )
        result = sub_10025680(0.0);
    }
  }
  if ( *(_DWORD *)(this + 1980) != 2 )
  {
    result = v45;
    if ( *(_DWORD *)(*(_DWORD *)(v45 + 28) + 48) )
    {
      if ( !*(_BYTE *)(this + 1960) )
      {
        (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_1041315C + 76))(dword_1041315C, v29);
        sub_101EDFB0(v29, &v38);
        sub_101EDFB0(v29, v26);
        (*(void (__thiscall **)(int *, float *))(*off_103ED0D8 + 12))(off_103ED0D8, v44);
        v23 = sub_101356F0();
        v34 = *(int *)v23;
        v35 = *(float *)(v23 + 4);
        v36 = *(float *)(v23 + 8);
        v30[0] = v29[0];
        v30[1] = v29[1];
        v30[2] = v29[2];
        sub_101356E0();
        (*(void (__thiscall **)(int, float **, int *))(*(_DWORD *)dword_1041315C + 20))(dword_1041315C, &a3, &a4);
        a3 = (float *)(int)((v44[0] * 0.25 + 0.5) * (double)(int)a3);
        a4 = (int)((0.25 * v44[1] + 0.5) * (double)a4);
        v25 = sub_101356D0();
        v24 = ((double (__thiscall *)(float *))*(_DWORD *)(*(_DWORD *)v11 + 952))(v11);
        sub_10070AD0((int)a3, a4, v24, v25, (int)v30, (int)&v34);
        sub_101EE190(&v34, v28);
        v40 = 0.0;
        off_103EDFEC();
        if ( v39 * v35 + *(float *)&v34 * v38 + v36 * v40 < 0.1 )
        {
          sub_100145B0(&v38, v27, (float *)&v34);
          sub_100145B0(v27, &v31, &v38);
          v31 = v38 * 0.1 + v31;
          v32 = v39 * 0.1 + v32;
          v33 = 0.1 * v40 + v33;
          off_103EDFEC();
          sub_101EE190(&v31, v28);
        }
        if ( v22 )
        {
          if ( !(*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)off_103ED0FC + 56))(off_103ED0FC) )
            (*(void (__thiscall **)(int, int, float *, float *))(*(_DWORD *)v22 + 1092))(v22, this, &v41, v37);
        }
        else if ( *(_DWORD *)(this + 1980) == 1 )
        {
          sub_100148C0((void *)this, (int)v11, &v41, v37);
        }
        sub_10034A30(&v41);
        return sub_10034B10(v28);
      }
    }
  }
  return result;
}
