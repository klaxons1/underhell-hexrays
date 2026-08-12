int __thiscall sub_10128C80(int this, float *a2, float a3)
{
  int v4; // eax
  int v5; // eax
  double v6; // st5
  double v7; // st6
  int v8; // eax
  const char *v9; // eax
  int v11; // edi
  int v12; // eax
  int v13; // ebx
  int v14; // edx
  void (__thiscall *v15)(int, float *, _DWORD); // edx
  double v16; // st7
  double (__thiscall *v17)(int); // edx
  double v18; // st7
  void (__thiscall *v19)(int, int *); // edx
  int v20; // edi
  float v21; // [esp+24h] [ebp-30h]
  float v22[3]; // [esp+38h] [ebp-1Ch] BYREF
  int v23; // [esp+44h] [ebp-10h] BYREF
  float v24; // [esp+48h] [ebp-Ch]
  float v25; // [esp+4Ch] [ebp-8h]
  _BYTE v26[4]; // [esp+50h] [ebp-4h] BYREF

  v4 = *(_DWORD *)(this + 844);
  if ( !v4 )
  {
    v20 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 720))(this);
    if ( v20 )
    {
      sub_100E0EA0(v20, (float *)(this + 820));
      sub_101289F0((unsigned __int8 *)this, *(float *)&v20, a2, a3);
      return v20;
    }
    return 0;
  }
  v5 = v4 - 1;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      v6 = a2[1] * a3;
      v7 = a3 * a2[2];
      v8 = *(_DWORD *)(this + 252) >> 11;
      *(float *)&v23 = *a2 * a3 * 200.0;
      v24 = v6 * 200.0;
      v25 = 200.0 * v7;
      if ( (v8 & 1) != 0 )
        sub_100DAE60(this);
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v9 = *(const char **)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 28))(this, v26);
      if ( !v9 )
        v9 = String;
      return sub_10166A90((int)v9, this + 580, this + 704, (int)&v23, *(float *)(this + 840), 0);
    }
    return 0;
  }
  v11 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 720))(this);
  if ( v11 )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    sub_100E0D20(v11, (float *)(this + 580));
    sub_100E0EA0(v11, (float *)(this + 820));
    *(float *)(v11 + 1132) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                               dword_106B31E4,
                               0.94999999,
                               1.05)
                           * *(float *)(this + 840);
    sub_100EBE30(v11, 1);
    v12 = (*(int (__thiscall **)(int))(*(_DWORD *)(v11 + 320) + 48))(v11 + 320);
    v13 = sub_100E9550((_DWORD *)v11, 6, v12, 0, 0);
    sub_100E0970(v11, v14, 6, 0);
    if ( v13 )
    {
      v22[0] = *a2 * a3;
      v22[1] = a2[1] * a3;
      v15 = *(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v13 + 208);
      v22[2] = a3 * a2[2];
      v15(v13, v22, 0);
      *(float *)&v23 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                         dword_106B31E4,
                         0.1,
                         1.0)
                     * *(float *)(this + 832);
      v16 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              0.1,
              1.0);
      v17 = *(double (__thiscall **)(int))(*(_DWORD *)v13 + 116);
      v24 = v16 * *(float *)(this + 832);
      v25 = 0.0;
      v18 = v17(v13);
      v19 = *(void (__thiscall **)(int, int *))(*(_DWORD *)v13 + 244);
      *(float *)&v23 = *(float *)&v23 * v18;
      v24 = v24 * v18;
      v25 = v18 * v25;
      v19(v13, &v23);
      if ( (*(_DWORD *)(this + 248) & 4) != 0 )
      {
        *(_BYTE *)(v11 + 1136) = 1;
        v21 = *(float *)(dword_106B31C8 + 12) + *(float *)(v11 + 1132);
        sub_100EC4A0((int *)v11, v21, 0);
        sub_100EC3F0((_DWORD *)v11, (int)sub_10166450, 0.0, 0);
        return v11;
      }
    }
    else
    {
      sub_101289F0((unsigned __int8 *)this, *(float *)&v11, a2, a3);
    }
  }
  return v11;
}
