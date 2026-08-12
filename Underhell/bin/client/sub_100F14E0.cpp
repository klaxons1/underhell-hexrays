float *__thiscall sub_100F14E0(_DWORD *this)
{
  float *result; // eax
  float *v3; // esi
  int v4; // eax
  double v5; // st7
  _BYTE v6[48]; // [esp+Ch] [ebp-54h] BYREF
  float v7[3]; // [esp+3Ch] [ebp-24h] BYREF
  float v8[3]; // [esp+48h] [ebp-18h] BYREF
  float v9; // [esp+54h] [ebp-Ch] BYREF
  float v10; // [esp+58h] [ebp-8h]
  float v11; // [esp+5Ch] [ebp-4h]

  result = (float *)sub_1007A730(off_103DCD78, this[65]);
  v3 = result;
  if ( result )
  {
    (*(void (__thiscall **)(float *, _DWORD, _BYTE *))(*(_DWORD *)result + 144))(result, this[66], v6);
    sub_101EDA00(v6, 3, &v9);
    sub_100EB630((int)(this + 2), v6);
    sub_100F3060(&v9);
    v4 = (**(int (__thiscall ***)(float *))v3)(v3);
    result = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 28))(v4);
    if ( result )
    {
      v5 = result[96];
      v7[0] = v9 - v5;
      v7[1] = v10 - v5;
      v7[2] = v11 - v5;
      v8[0] = v9 + v5;
      v8[1] = v10 + v5;
      v8[2] = v5 + v11;
      result = sub_100EC3F0((int)(this + 2), v7, v8, 1);
    }
  }
  this[39] &= ~0x400u;
  return result;
}
