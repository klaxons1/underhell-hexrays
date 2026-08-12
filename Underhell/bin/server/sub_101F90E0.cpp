int __stdcall sub_101F90E0(int a1, double a2)
{
  _DWORD *v2; // eax
  double v3; // st7
  float v5; // [esp+4h] [ebp-18h] BYREF
  float v6; // [esp+8h] [ebp-14h]
  float v7; // [esp+Ch] [ebp-10h]
  float v8; // [esp+10h] [ebp-Ch] BYREF
  float v9; // [esp+14h] [ebp-8h]
  float v10; // [esp+18h] [ebp-4h]

  if ( (*(_BYTE *)(a1 + 256) & 1) != 0 )
  {
    v2 = (_DWORD *)sub_101C5260((_DWORD *)a1);
    if ( v2 )
    {
      if ( (v2[64] & 0x1000) != 0 )
      {
        (*(void (__thiscall **)(_DWORD *, float *))(*v2 + 564))(v2, &v8);
        if ( (*(_DWORD *)(a1 + 256) & 0x800000) != 0 )
        {
          v8 = *(float *)(a1 + 464) + v8;
          v9 = *(float *)(a1 + 468) + v9;
          v10 = *(float *)(a1 + 472) + v10;
        }
        v5 = v8;
        v6 = v9;
        v7 = v10;
        sub_100D9710((float *)(a1 + 464), &v5);
        sub_100EA940((int *)a1, 0x800000);
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 256) & 0x800000) == 0 )
  {
    v3 = a2 * 0.5 + 1.0;
    v5 = *(float *)(a1 + 464) * v3;
    v6 = *(float *)(a1 + 468) * v3;
    v7 = v3 * *(float *)(a1 + 472);
    sub_100EA150(a1, &v5);
    v5 = flt_106F1CA8;
    v7 = flt_106F1CB0;
    v6 = flt_106F1CAC;
    sub_100D9710((float *)(a1 + 464), &v5);
  }
  return sub_100EA9A0((int *)a1, 0x800000);
}
