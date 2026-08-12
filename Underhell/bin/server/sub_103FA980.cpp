void __usercall sub_103FA980(int a1@<esi>, float *a2, float *a3, float *a4, float *a5, int a6, int a7)
{
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  int v10; // edx
  int v11; // eax
  _BYTE v12[44]; // [esp+0h] [ebp-74h] BYREF
  float v13; // [esp+2Ch] [ebp-48h]
  char v14; // [esp+36h] [ebp-3Eh]
  char v15; // [esp+37h] [ebp-3Dh]
  float v16; // [esp+38h] [ebp-3Ch]
  int v17; // [esp+3Ch] [ebp-38h]
  int v18; // [esp+40h] [ebp-34h]
  int v19; // [esp+44h] [ebp-30h]
  __int16 v20; // [esp+48h] [ebp-2Ch]
  int v21; // [esp+4Ch] [ebp-28h]
  int v22; // [esp+50h] [ebp-24h]
  _DWORD v23[4]; // [esp+54h] [ebp-20h] BYREF
  void **v24; // [esp+64h] [ebp-10h] BYREF
  _DWORD v25[3]; // [esp+68h] [ebp-Ch] BYREF
  int savedregs; // [esp+74h] [ebp+0h] BYREF

  if ( *(_DWORD *)(dword_10698344 + 48) )
  {
    sub_10265570(v23, 0, 0);
    v23[3] = a6;
    v23[0] = &CTraceFilterPhyscannon::`vftable';
    sub_10023240(COERCE_FLOAT(&savedregs), a7, a2, a3, a4, a5, 1174421515, (int)v23, a7);
    if ( *(_DWORD *)(a7 + 76) )
    {
      sub_10265570(v25, 0, 0);
      v25[0] = &CTraceFilterOnlyBrushes::`vftable';
      sub_10023240(
        COERCE_FLOAT(&savedregs),
        a7,
        (float *)a7,
        (float *)(a7 + 12),
        a4,
        a5,
        1174421507,
        (int)v25,
        (int)v12);
      if ( v13 < 1.0 || v15 || v14 )
      {
        sub_10079DC0((float *)a7, (int)v12);
        v7 = v17;
        *(float *)(a7 + 56) = v16;
        v8 = v18;
        v9 = v19;
        *(_DWORD *)(a7 + 60) = v7;
        LOWORD(v7) = v20;
        *(_DWORD *)(a7 + 64) = v8;
        v10 = v21;
        *(_DWORD *)(a7 + 68) = v9;
        v11 = v22;
        *(_WORD *)(a7 + 72) = v7;
        *(_DWORD *)(a7 + 76) = v10;
        *(_DWORD *)(a7 + 80) = v11;
      }
    }
  }
  else
  {
    sub_10265570(&v24, 0, 0);
    v25[2] = a6;
    v24 = &CTraceFilterNoOwnerTest::`vftable';
    sub_10023240(COERCE_FLOAT(&savedregs), a1, a2, a3, a4, a5, 1174421515, (int)&v24, a7);
  }
}
