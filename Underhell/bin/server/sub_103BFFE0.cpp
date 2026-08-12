bool __thiscall sub_103BFFE0(float *this, _DWORD *a2)
{
  int v4; // eax
  float *v5; // eax
  long double v6; // st7
  float v7; // [esp+14h] [ebp-3Ch]
  _BYTE v8[12]; // [esp+20h] [ebp-30h] BYREF
  float v9[3]; // [esp+2Ch] [ebp-24h] BYREF
  float v10[3]; // [esp+38h] [ebp-18h] BYREF
  float v11; // [esp+44h] [ebp-Ch] BYREF
  float v12; // [esp+48h] [ebp-8h]
  float v13; // [esp+4Ch] [ebp-4h]

  if ( *((_DWORD *)this + 581) == 7 )
    return 0;
  if ( a2[23] == *((_DWORD *)this + 23) )
    return 0;
  v4 = (*(int (__thiscall **)(float *, _BYTE *))(*(_DWORD *)this + 504))(this, v8);
  if ( ((**(int (__thiscall ***)(int, int, _DWORD))dword_106B31F4)(dword_106B31F4, v4, 0) & 0x46004003) != 0 )
    return 0;
  (*(void (__thiscall **)(_DWORD *, float *))(*a2 + 504))(a2, v10);
  v5 = (float *)(*(int (__thiscall **)(float *, _BYTE *))(*(_DWORD *)this + 504))(this, v8);
  v11 = v10[0] - *v5;
  v12 = v10[1] - v5[1];
  v13 = v10[2] - v5[2];
  sub_10422540(&v11, v9);
  if ( ((_DWORD)this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  v6 = v9[0] - this[176];
  v7 = v6;
  sub_10424CA0(v7);
  if ( fabs(v6) > 28.0 && v11 * v11 + v12 * v12 + v13 * v13 > 4096.0 )
    return 0;
  return sub_10027D40(this, (int)a2);
}
