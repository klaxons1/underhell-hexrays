float *__thiscall sub_101E3010(float *this, float *a2, int a3, int a4)
{
  int v5; // eax
  int v6; // eax
  float *result; // eax
  float *v8; // eax
  float v9; // [esp+Ch] [ebp-Ch]
  float v10; // [esp+10h] [ebp-8h]
  float v11; // [esp+14h] [ebp-4h]
  float v12; // [esp+28h] [ebp+10h]

  if ( (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 1088))(this) )
  {
    v5 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 1092))(this);
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 32))(v5);
    (*(void (__thiscall **)(int, float *, int, int))(*(_DWORD *)v6 + 520))(v6, a2, a3, a4);
    return a2;
  }
  else if ( (_BYTE)a4 )
  {
    v12 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            0.69999999,
            1.0);
    v8 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 532))(this);
    v9 = *v8 * v12;
    v10 = v8[1] * v12;
    v11 = v12 * v8[2];
    if ( ((_DWORD)this[63] & 0x800) != 0 )
      sub_100DAE60((int)this);
    result = a2;
    *a2 = v9 + this[145];
    a2[1] = this[146] + v10;
    a2[2] = this[147] + v11;
  }
  else
  {
    (*(void (__thiscall **)(float *, float *))(*(_DWORD *)this + 504))(this, a2);
    return a2;
  }
  return result;
}
