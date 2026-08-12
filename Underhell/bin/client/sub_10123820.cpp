float *__thiscall sub_10123820(float *this, float *a2, float *a3)
{
  double v4; // st7
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // edi
  int v9; // eax
  double v10; // st7
  float *v11; // eax
  float *result; // eax
  float v13; // [esp+Ch] [ebp-Ch]
  float v14; // [esp+10h] [ebp-8h]

  v4 = this[309] * 0.5;
  v13 = v4;
  if ( !*((_BYTE *)this + 1244) )
  {
    v5 = *(_DWORD *)dword_10413178;
    v6 = (*(int (__thiscall **)(float *))(*((_DWORD *)this + 1) + 36))(this + 1);
    v7 = (*(int (__thiscall **)(int, int))(v5 + 116))(dword_10413178, v6);
    v8 = *(_DWORD *)dword_10413178;
    v14 = (float)v7;
    v9 = (*(int (__thiscall **)(float *))(*((_DWORD *)this + 1) + 36))(this + 1);
    v10 = (double)(*(int (__thiscall **)(int, int))(v8 + 120))(dword_10413178, v9);
    if ( v14 > v10 )
      v10 = v14;
    v4 = v10 * v13;
  }
  *a2 = -v4;
  a2[1] = -v4;
  a2[2] = -v4;
  *a3 = v4;
  a3[1] = v4;
  a3[2] = v4;
  v11 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 36))(this);
  *a2 = *a2 + *v11;
  a2[1] = v11[1] + a2[1];
  a2[2] = v11[2] + a2[2];
  result = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 36))(this);
  *a3 = *a3 + *result;
  a3[1] = result[1] + a3[1];
  a3[2] = result[2] + a3[2];
  return result;
}
