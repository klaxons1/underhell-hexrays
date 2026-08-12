int __thiscall sub_100E9630(float *this, int a2, int a3, int a4)
{
  int result; // eax
  float v6; // eax
  float v7; // ecx
  int v8; // edx
  int (__thiscall *v9)(float *); // eax
  int v10; // eax
  _DWORD *v11; // ecx
  float *v12; // eax
  int v13; // edx
  double v14; // st7
  int (__thiscall *v15)(float *); // eax
  float *v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // esi
  int v20; // [esp+4h] [ebp-40h]
  float v21[3]; // [esp+20h] [ebp-24h] BYREF
  float v22[3]; // [esp+2Ch] [ebp-18h] BYREF
  float v23; // [esp+38h] [ebp-Ch] BYREF
  float v24; // [esp+3Ch] [ebp-8h]
  float v25; // [esp+40h] [ebp-4h]

  if ( !*((_DWORD *)this + 6) || ((_BYTE)this[63] & 1) != 0 )
    return 0;
  (*(void (__thiscall **)(float *))(*(_DWORD *)this + 592))(this);
  result = (*(int (__thiscall **)(_DWORD *))(*((_DWORD *)this + 80) + 44))((_DWORD *)this + 80);
  if ( result )
  {
    if ( ((_DWORD)this[63] & 0x800) != 0 )
      sub_100DAE60((int)this);
    if ( ((_DWORD)this[63] & 0x800) != 0 )
      sub_100DAE60((int)this);
    v6 = this[177];
    v7 = this[178];
    v23 = this[176];
    v8 = *((_DWORD *)this + 80);
    v24 = v6;
    v9 = *(int (__thiscall **)(float *))(v8 + 44);
    v25 = v7;
    v10 = v9(this + 80);
    v11 = this + 80;
    if ( v10 == 2 )
    {
      v12 = (float *)(*(int (__thiscall **)(_DWORD *))(*((_DWORD *)this + 80) + 4))(v11);
      v13 = *((_DWORD *)this + 80);
      v21[0] = *v12 + 0.21875;
      v21[1] = v12[1] + 0.21875;
      v14 = v12[2] + 0.21875;
      v15 = *(int (__thiscall **)(float *))(v13 + 8);
      v21[2] = v14;
      v16 = (float *)v15(this + 80);
      v22[0] = *v16 - 0.21875;
      v22[1] = v16[1] - 0.21875;
      v22[2] = v16[2] - 0.21875;
      result = sub_101DC0B0(this, v21, v22, this + 145, 0);
      v23 = flt_106F1CB4;
      v24 = flt_106F1CB8;
      v25 = flt_106F1CBC;
    }
    else if ( (*(int (__thiscall **)(_DWORD *))(*((_DWORD *)this + 80) + 44))(v11) == 3 )
    {
      v20 = (*(int (__thiscall **)(_DWORD *))(*((_DWORD *)this + 80) + 8))((_DWORD *)this + 80);
      v17 = (*(int (__thiscall **)(_DWORD *))(*((_DWORD *)this + 80) + 4))((_DWORD *)this + 80);
      result = sub_101DC250(this, v17, v20, this + 145, &v23, 0);
    }
    else
    {
      v18 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 24))(this);
      result = sub_101DB090(this, v18, this + 145, &v23, a4);
    }
    v19 = result;
    if ( result )
    {
      sub_100E9500(this, result);
      (*(void (__thiscall **)(int, _DWORD, _DWORD, int, int))(*(_DWORD *)v19 + 268))(v19, 10000.0, 10000.0, a2, a3);
      (*(void (__thiscall **)(int, _DWORD *, float *, _DWORD, _DWORD))(*(_DWORD *)v19 + 272))(
        v19,
        (_DWORD *)this + 145,
        &v23,
        0,
        0.0);
      return v19;
    }
  }
  return result;
}
