char __thiscall sub_103B0680(void *this, int a2, float a3, float a4, float a5, int a6, float *a7)
{
  unsigned __int8 (__thiscall *v8)(void *, int *, int *, _DWORD); // edx
  double v9; // st7
  unsigned __int8 (__thiscall *v11)(void *, int *, int *, _DWORD); // edx
  unsigned __int8 (__thiscall *v12)(void *, int *, int *, _DWORD); // eax
  double v13; // st6
  double v14; // st7
  double v15; // st7
  double v16; // st6
  double v17; // st7
  double v18; // st7
  int v19[3]; // [esp+3Ch] [ebp-18h] BYREF
  int v20; // [esp+48h] [ebp-Ch] BYREF
  float v21; // [esp+4Ch] [ebp-8h]
  float v22; // [esp+50h] [ebp-4h]

  (*(void (__thiscall **)(int, int *, int, _DWORD))(*(_DWORD *)a6 + 520))(a6, v19, a2, 0);
  if ( a3 <= (double)*(float *)(a2 + 8)
    && a4 >= (double)*(float *)(a2 + 8)
    && (v8 = *(unsigned __int8 (__thiscall **)(void *, int *, int *, _DWORD))(*(_DWORD *)this + 2024),
        v20 = *(int *)a2,
        v21 = *(float *)(a2 + 4),
        v22 = *(float *)(a2 + 8),
        v8(this, &v20, v19, 0))
    || (v9 = *(float *)&v19[2] - flt_106EB73C + 12.0, v22 = v9, a3 <= v9)
    && v9 <= a4
    && (*(unsigned __int8 (__thiscall **)(void *, int *, int *, _DWORD))(*(_DWORD *)this + 2024))(this, &v20, v19, 0) )
  {
LABEL_7:
    if ( *(_DWORD *)(dword_106EAFC4 + 48) )
      sub_1011BC50((float *)&v20, (float *)v19, 0, 255, 0, 0, 0.1);
    *a7 = v22;
    return 1;
  }
  v11 = *(unsigned __int8 (__thiscall **)(void *, int *, int *, _DWORD))(*(_DWORD *)this + 2024);
  v22 = a4;
  if ( v11(this, &v20, v19, 0) )
  {
    if ( *(_DWORD *)(dword_106EAFC4 + 48) )
      sub_1011BC50((float *)a2, (float *)v19, 0, 255, 0, 0, 0.1);
    *a7 = v22;
    return 1;
  }
  else
  {
    v12 = *(unsigned __int8 (__thiscall **)(void *, int *, int *, _DWORD))(*(_DWORD *)this + 2024);
    v22 = a3;
    if ( !v12(this, &v20, v19, 0) )
    {
      v13 = *(float *)(a2 + 4);
      v14 = *(float *)(a2 + 8) + a5;
      v20 = *(int *)a2;
      v21 = v13;
      v22 = v14;
      if ( v14 > a4 )
        goto LABEL_23;
      while ( !(*(unsigned __int8 (__thiscall **)(void *, int *, int *, _DWORD))(*(_DWORD *)this + 2024))(
                 this,
                 &v20,
                 v19,
                 0) )
      {
        v15 = v22 + a5;
        v22 = v15;
        if ( v15 > a4 )
          goto LABEL_23;
      }
      if ( a4 < (double)v22 )
      {
LABEL_23:
        v16 = *(float *)(a2 + 4);
        v17 = *(float *)(a2 + 8) - a5;
        v20 = *(int *)a2;
        v21 = v16;
        v22 = v17;
        if ( v17 < a3 )
          return 0;
        while ( !(*(unsigned __int8 (__thiscall **)(void *, int *, int *, _DWORD))(*(_DWORD *)this + 2024))(
                   this,
                   &v20,
                   v19,
                   0) )
        {
          v18 = v22 - a5;
          v22 = v18;
          if ( v18 < a3 )
            return 0;
        }
        if ( a3 > (double)v22 )
          return 0;
      }
      goto LABEL_7;
    }
    if ( *(_DWORD *)(dword_106EAFC4 + 48) )
      sub_1011BC50((float *)&v20, (float *)v19, 0, 255, 0, 0, 0.1);
    *a7 = v22;
    return 1;
  }
}
