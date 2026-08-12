void __usercall sub_10414AA0(int a1@<ecx>, int a2@<edi>)
{
  double v3; // st7
  double v4; // st7
  int *v5; // edi
  double v6; // st7
  bool v7; // cc
  float v8[3]; // [esp+28h] [ebp-34h] BYREF
  float v9[3]; // [esp+34h] [ebp-28h] BYREF
  float v10[3]; // [esp+40h] [ebp-1Ch] BYREF
  float v11; // [esp+4Ch] [ebp-10h] BYREF
  float v12; // [esp+50h] [ebp-Ch]
  float v13; // [esp+54h] [ebp-8h]
  float v14; // [esp+58h] [ebp-4h]

  if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(a1 + 1784) )
  {
    sub_100BD6D0((void *)a1, *(_DWORD *)(a1 + 1788), (int)v8, 0, 0, 0);
    v14 = COERCE_FLOAT(sub_10219A30());
    v11 = (double)SLODWORD(v14) * 0.000030518509 + (double)SLODWORD(v14) * 0.000030518509 - 1.0;
    v14 = COERCE_FLOAT(sub_10219A30());
    v12 = (double)SLODWORD(v14) * 0.000030518509 + (double)SLODWORD(v14) * 0.000030518509 - 1.0;
    v14 = COERCE_FLOAT(sub_10219A30());
    v3 = (double)SLODWORD(v14) * 0.000030518509 + (double)SLODWORD(v14) * 0.000030518509 - 1.0;
    v13 = v3;
    if ( v3 < 0.0 )
      v13 = v3 * -1.0;
    off_10689714();
    v4 = ((double (__thiscall *)(int, _DWORD, _DWORD, int))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           0.75,
           1.25,
           a2)
       * 800.0;
    v10[0] = v11 * v4;
    v10[1] = v12 * v4;
    v10[2] = v4 * v13;
    sub_10422540(&v11, v9);
    v5 = sub_10403C30(v8, v9, v10, a1);
    v14 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            0.30000001,
            0.5);
    if ( ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           0.0,
           1.0) >= 0.30000001 )
      sub_10408410((int)v5, v14);
    else
      sub_10408470((int)v5, v14);
    v6 = ((double (__thiscall *)(int, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(dword_106B31E4, 0.333)
       + *(float *)(dword_106B31C8 + 12);
    v7 = --*(_DWORD *)(a1 + 1780) <= 0;
    *(float *)(a1 + 1784) = v6;
    if ( v7 )
      sub_10414830((_DWORD *)a1);
  }
}
