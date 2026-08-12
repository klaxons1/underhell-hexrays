// bad sp value at call has been detected, the output may be wrong!
void __usercall sub_10173610(
        int a1@<ebp>,
        int a2@<edi>,
        int a3@<esi>,
        int a4,
        int a5,
        float *a6,
        float *a7,
        float a8,
        int a9)
{
  double v9; // st6
  void (__thiscall *v10)(int, float *, float *, int, int); // edx
  void (__thiscall *v11)(int, float *, float *, float *, _DWORD, int, _DWORD); // eax
  float v12[22]; // [esp+24h] [ebp-DCh] BYREF
  float v13[3]; // [esp+7Ch] [ebp-84h] BYREF
  float v14[16]; // [esp+88h] [ebp-78h] BYREF
  int v15; // [esp+C8h] [ebp-38h]
  int v16; // [esp+CCh] [ebp-34h]
  float v17; // [esp+D8h] [ebp-28h]
  float v18; // [esp+DCh] [ebp-24h]
  float v19; // [esp+E0h] [ebp-20h]
  void **v20; // [esp+E4h] [ebp-1Ch] BYREF
  float v21; // [esp+E8h] [ebp-18h] BYREF
  float v22; // [esp+ECh] [ebp-14h]
  float v23; // [esp+F0h] [ebp-10h]
  int v24; // [esp+F4h] [ebp-Ch]
  void *v25; // [esp+F8h] [ebp-8h]
  void *retaddr; // [esp+100h] [ebp+0h]

  v24 = a1;
  v25 = retaddr;
  sub_10173490(a7, a6, a8, a9);
  sub_101EDFB0(a7);
  v9 = v17 * a8 + *a6;
  v20 = &CTraceFilterHitAll::`vftable';
  v21 = v9;
  v22 = v18 * a8 + a6[1];
  v23 = a8 * v19 + a6[2];
  sub_1000E430(v12, a6, &v21);
  (*(void (__thiscall **)(int, float *, int, void ***, float *, int, int))(*(_DWORD *)dword_104131A0 + 16))(
    dword_104131A0,
    v12,
    -1,
    &v20,
    v13,
    a2,
    a3);
  if ( *(_DWORD *)(dword_10439134 + 48) )
    sub_10130AC0(v13, v14, 255, 0, 0, 1, -1.0);
  if ( 1.0 != v14[8] )
  {
    if ( v16 )
    {
      v10 = *(void (__thiscall **)(int, float *, float *, int, int))(*(_DWORD *)dword_10413190 + 24);
      v22 = COERCE_FLOAT(v13);
      v21 = 0.0;
      v10(dword_10413190, a6, &v21, v16 - 1, a9);
    }
    else
    {
      v11 = *(void (__thiscall **)(int, float *, float *, float *, _DWORD, int, _DWORD))(*(_DWORD *)v15 + 424);
      v22 = NAN;
      v21 = COERCE_FLOAT(v13);
      v11(v15, a6, &v21, &v21, 0, a9, 0);
    }
  }
}
