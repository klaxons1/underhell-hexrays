// bad sp value at call has been detected, the output may be wrong!
void __usercall sub_103FB900(int a1@<ebp>, int a2@<esi>, float *a3, float *a4, int a5, int a6)
{
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // ecx
  int v10; // edx
  float v11[13]; // [esp+24h] [ebp-8Ch] BYREF
  char v12; // [esp+5Ah] [ebp-56h]
  char v13; // [esp+5Bh] [ebp-55h]
  float v14; // [esp+5Ch] [ebp-54h]
  int v15; // [esp+60h] [ebp-50h]
  int v16; // [esp+64h] [ebp-4Ch]
  int v17; // [esp+68h] [ebp-48h]
  __int16 v18; // [esp+6Ch] [ebp-44h]
  int v19; // [esp+70h] [ebp-40h]
  int v20; // [esp+74h] [ebp-3Ch]
  _DWORD v21[4]; // [esp+84h] [ebp-2Ch] BYREF
  void **v22; // [esp+94h] [ebp-1Ch] BYREF
  _DWORD v23[3]; // [esp+98h] [ebp-18h] BYREF
  _DWORD v24[3]; // [esp+A4h] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+B0h] [ebp+0h]

  v24[0] = a1;
  v24[1] = retaddr;
  if ( *(_DWORD *)(dword_10698344 + 48) )
  {
    sub_10265570(v21, 0, 0);
    v21[0] = &CTraceFilterPhyscannon::`vftable';
    v21[3] = a5;
    sub_1001F180(v11, a3, a4);
    (*(void (__thiscall **)(int, float *, int, _DWORD *, int, int))(*(_DWORD *)dword_106B31F4 + 16))(
      dword_106B31F4,
      v11,
      1174421515,
      v21,
      a6,
      a2);
    if ( *(_DWORD *)(dword_106CE63C + 48) )
      sub_101A0AD0(a6, a6 + 12, 255, 0, 0, 1, -1.0);
    if ( *(_DWORD *)(a6 + 76) )
    {
      sub_10265570(v23, 0, 0);
      sub_10023120(
        COERCE_FLOAT(v24),
        a6,
        (float *)a6,
        (float *)(a6 + 12),
        (int)&CTraceFilterOnlyBrushes::`vftable',
        (int)v23,
        (int)v11);
      if ( v11[11] < 1.0 || v13 || v12 )
      {
        sub_10079DC0((float *)a6, (int)v11);
        v6 = v15;
        *(float *)(a6 + 56) = v14;
        v7 = v16;
        v8 = v17;
        *(_DWORD *)(a6 + 60) = v6;
        LOWORD(v6) = v18;
        *(_DWORD *)(a6 + 64) = v7;
        v9 = v19;
        *(_DWORD *)(a6 + 68) = v8;
        v10 = v20;
        *(_WORD *)(a6 + 72) = v6;
        *(_DWORD *)(a6 + 76) = v9;
        *(_DWORD *)(a6 + 80) = v10;
      }
    }
  }
  else
  {
    sub_10265570(&v22, 0, 0);
    v23[2] = a5;
    v22 = &CTraceFilterNoOwnerTest::`vftable';
    sub_1001F180(v11, a3, a4);
    (*(void (__thiscall **)(int, float *, int, void ***, int, int))(*(_DWORD *)dword_106B31F4 + 16))(
      dword_106B31F4,
      v11,
      1174421515,
      &v22,
      a6,
      a2);
    if ( *(_DWORD *)(dword_106CE63C + 48) )
      sub_101A0AD0(a6, a6 + 12, 255, 0, 0, 1, -1.0);
  }
}
