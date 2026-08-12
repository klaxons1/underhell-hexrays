void __thiscall sub_1005DCD0(int this, int a2)
{
  _DWORD *v3; // edi
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // ebx
  float v8; // [esp+18h] [ebp-80h]
  float v9[12]; // [esp+2Ch] [ebp-6Ch] BYREF
  int v10[3]; // [esp+5Ch] [ebp-3Ch] BYREF
  float v11[3]; // [esp+68h] [ebp-30h] BYREF
  int v12[3]; // [esp+74h] [ebp-24h] BYREF
  int v13[4]; // [esp+80h] [ebp-18h] BYREF
  int v14; // [esp+90h] [ebp-8h]
  float v15; // [esp+94h] [ebp-4h]

  if ( *(_DWORD *)a2 == 106
    && !*(_BYTE *)(this + 92)
    && (*(float *)(dword_106B31C8 + 12) - *(float *)(this + 132) <= -0.001 || sub_1001ED60((float *)(this + 148))) )
  {
    *(float *)(this + 132) = -1.0;
    *(float *)(this + 152) = 8.0;
    *(float *)(this + 156) = 16.0;
    *(float *)(this + 148) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                               dword_106B31E4,
                               8.0,
                               16.0)
                           + *(float *)(dword_106B31C8 + 12);
    v3 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 368))(*(_DWORD *)(this + 4));
    if ( !v3 )
      v3 = *(_DWORD **)(this + 4);
    v4 = sub_1005D6D0((_DWORD **)this);
    v14 = v4;
    if ( v4 )
      sub_10043F70((float *)(this + 116), v4, 60.0);
    *(float *)v13 = flt_106F1CA8;
    v5 = *(_DWORD *)(this + 4);
    *(float *)&v13[2] = flt_106F1CB0;
    *(float *)&v13[1] = flt_106F1CAC;
    v6 = v3[63] >> 11;
    v13[3] = *(_DWORD *)(v5 + 2816);
    if ( (v6 & 1) != 0 )
      sub_100DAE60(v3);
    v7 = (int)(v3 + 145);
    (*(void (__thiscall **)(_DWORD *, int *))(*v3 + 504))(v3, v12);
    v15 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(this + 4) + 1948))(*(_DWORD *)(this + 4));
    sub_1005DB80(this, v10);
    if ( !v14
      || (v11[0] = 3.4028235e38, v11[1] = 3.4028235e38, v11[2] = 3.4028235e38, !sub_10018CD0((float *)(this + 48), v11))
      || (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 1, 100) > 50 )
    {
      sub_100B3F30((int)v10, v7, (int)v12, 0.0, 180.0, (int)v13);
      if ( sub_10018CD0((float *)v13, &flt_106F1CA8) )
        sub_100B3F30((int)v10, v7, (int)v12, 179.89999, 480.0, (int)v13);
    }
    if ( sub_10018CD0((float *)v13, &flt_106F1CA8)
      && !(unsigned __int8)sub_100B3FD0(v7, (int)v12, 0.0, v15, (int)v13)
      && !(unsigned __int8)sub_100B32C0((int)v12, 0.0, (int)v13) )
    {
      v8 = v15;
      *(_BYTE *)(this + 200) = 1;
      if ( !(unsigned __int8)sub_100B3FD0(v7, (int)v12, 0.0, v8, (int)v13) )
        sub_100B32C0((int)v12, 0.0, (int)v13);
      *(_BYTE *)(this + 200) = 0;
    }
    if ( sub_1001F080((float *)v13, &flt_106F1CA8) )
    {
      sub_1001EE90(v9, 7, (float *)v13, 11, -2.0, 0, dword_10605844);
      (*(void (__thiscall **)(_DWORD, float *, _DWORD))(**(_DWORD **)(*(_DWORD *)(this + 4) + 2588) + 20))(
        *(_DWORD *)(*(_DWORD *)(this + 4) + 2588),
        v9,
        0);
      *(float *)(*(_DWORD *)(this + 4) + 2560) = *(float *)(dword_106B31C8 + 12) + *(float *)(a2 + 4);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 12))(this, 0);
    }
    else
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 8))(this, 8);
    }
  }
  else
  {
    sub_1004B450((_BYTE *)this, a2);
  }
}
