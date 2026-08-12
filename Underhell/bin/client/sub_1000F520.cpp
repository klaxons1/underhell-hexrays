int __thiscall sub_1000F520(_DWORD *this, int a2, int a3, int a4)
{
  int result; // eax
  int v6; // ebx
  float *v7; // eax
  int v8; // edx
  float *v9; // eax
  int v10; // edx
  double v11; // st7
  int (__thiscall *v12)(_DWORD *); // eax
  float *v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // edi
  int v17; // [esp+4h] [ebp-40h]
  int v18; // [esp+8h] [ebp-3Ch]
  float v19[3]; // [esp+20h] [ebp-24h] BYREF
  float v20[3]; // [esp+2Ch] [ebp-18h] BYREF
  float v21; // [esp+38h] [ebp-Ch] BYREF
  float v22; // [esp+3Ch] [ebp-8h]
  float v23; // [esp+40h] [ebp-4h]

  (*(void (__thiscall **)(_DWORD *))(*this + 232))(this);
  result = (*(int (__thiscall **)(_DWORD *))(*this + 276))(this);
  if ( result )
  {
    v6 = (*(int (__thiscall **)(_DWORD *))(*this + 36))(this);
    v7 = (float *)(*(int (__thiscall **)(_DWORD *))(*this + 40))(this);
    v21 = *v7;
    v22 = v7[1];
    v8 = *this;
    v23 = v7[2];
    if ( (*(int (__thiscall **)(_DWORD *))(v8 + 276))(this) == 2 )
    {
      v9 = (float *)(*(int (__thiscall **)(_DWORD *))(*this + 260))(this);
      v10 = *this;
      v19[0] = *v9 + 0.21875;
      v19[1] = v9[1] + 0.21875;
      v11 = v9[2] + 0.21875;
      v12 = *(int (__thiscall **)(_DWORD *))(v10 + 264);
      v19[2] = v11;
      v13 = (float *)v12(this);
      v20[0] = *v13 - 0.21875;
      v20[1] = v13[1] - 0.21875;
      v20[2] = v13[2] - 0.21875;
      result = sub_101029B0(this, v19, v20, v6, 0);
      v21 = flt_1045924C;
      v22 = flt_10459250;
      v23 = flt_10459254;
    }
    else if ( (*(int (__thiscall **)(_DWORD *))(*this + 276))(this) == 3 )
    {
      v17 = (*(int (__thiscall **)(_DWORD *))(this[88] + 8))(this + 88);
      v14 = (*(int (__thiscall **)(_DWORD *))(this[88] + 4))(this + 88);
      result = sub_10102B40(this, v14, v17, v6, &v21, 0);
    }
    else
    {
      v15 = sub_10034480(this, v6);
      result = sub_10101C50(this, v15, v18, &v21, a4);
    }
    v16 = result;
    if ( result )
    {
      sub_1000F430(this, result);
      (*(void (__thiscall **)(int, _DWORD, _DWORD, int, int))(*(_DWORD *)v16 + 268))(v16, 10000.0, 10000.0, a2, a3);
      (*(void (__thiscall **)(int, int, float *, _DWORD, _DWORD))(*(_DWORD *)v16 + 272))(v16, v6, &v21, 0, 0.0);
      return v16;
    }
  }
  return result;
}
