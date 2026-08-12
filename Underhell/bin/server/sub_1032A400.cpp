void __thiscall sub_1032A400(int this)
{
  int v2; // edx
  int v3; // eax
  double v4; // st7
  int v5; // edi
  int *v6; // ecx
  float v7; // [esp+30h] [ebp-Ch] BYREF
  float v8; // [esp+34h] [ebp-8h]
  float v9; // [esp+38h] [ebp-4h]

  *(_DWORD *)(this + 1676) = 6;
  sub_10027A90(this, 0);
  sub_10112C00(this + 320, 2);
  sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 0x10);
  sub_100E0970(this, v2, 6, 0);
  v7 = 0.0;
  v8 = 0.0;
  *(_DWORD *)(this + 1680) = -1;
  v9 = 10.0;
  sub_100DC4E0((float *)this, &v7);
  *(float *)(this + 1684) = 0.2;
  *(_DWORD *)(this + 2324) = 0;
  sub_100223F0(2);
  sub_100EA940((int *)this, 1024);
  *(_DWORD *)(this + 252) |= 0x18000000u;
  *(float *)(this + 3820) = 0.0;
  *(_DWORD *)(this + 3764) = 1;
  sub_10422220(this + 728, this + 3636);
  *(float *)(this + 3660) = 0.0;
  *(_DWORD *)(this + 3848) = 0;
  *(float *)(this + 3624) = flt_106F1CA8;
  *(float *)(this + 3628) = flt_106F1CAC;
  *(float *)(this + 3632) = flt_106F1CB0;
  v7 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
         dword_106B31E4,
         -2.0,
         2.0);
  v8 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
         dword_106B31E4,
         -2.0,
         2.0);
  v9 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
         dword_106B31E4,
         2.0,
         4.0);
  v3 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 1);
  v4 = v9;
  if ( v3 )
    v4 = v4 * -1.0;
  *(float *)(this + 3648) = v7;
  *(float *)(this + 3652) = v8;
  *(float *)(this + 3656) = v4;
  *(float *)(this + 108) = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)this + 2232))(this);
  sub_10020460((_DWORD *)this, 67113092);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 1164))(this);
  *(float *)(this + 3792) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                              dword_106B31E4,
                              0.0,
                              3.1415927);
  v5 = dword_106B31C8;
  if ( *(_DWORD *)(this + 1672) != *(_DWORD *)(dword_106B31C8 + 12) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(this + 1672) = *(float *)(v5 + 12);
    }
    else
    {
      v6 = *(int **)(this + 24);
      if ( v6 )
        sub_100194B0(v6, 1672);
      *(float *)(this + 1672) = *(float *)(v5 + 12);
    }
  }
}
