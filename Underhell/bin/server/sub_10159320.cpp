float *__thiscall sub_10159320(_DWORD *this)
{
  int v2; // eax
  double v3; // st7
  int v4; // ecx
  float *v5; // eax
  float *v6; // ecx
  int v7; // edx
  float *result; // eax
  float *v9; // esi
  float v10; // [esp+0h] [ebp-44h]
  _BYTE v11[12]; // [esp+Ch] [ebp-38h] BYREF
  float v12[3]; // [esp+18h] [ebp-2Ch] BYREF
  float v13[3]; // [esp+24h] [ebp-20h] BYREF
  float v14[3]; // [esp+30h] [ebp-14h] BYREF
  float v15; // [esp+3Ch] [ebp-8h]
  float v16; // [esp+40h] [ebp-4h]

  sub_104222B0(this[2] + 12, v13, v14, v11);
  v2 = this[2];
  v15 = *(float *)(v2 + 44);
  v16 = *(float *)(v2 + 48);
  v13[2] = 0.0;
  v14[2] = 0.0;
  off_10689714();
  off_10689714();
  v12[0] = v13[0] * v15 + v14[0] * v16;
  v12[1] = v15 * v13[1] + v16 * v14[1];
  v12[2] = 0.0;
  v3 = off_10689714();
  if ( 0.0 != v3 )
  {
    v4 = this[2];
    if ( v3 > *(float *)(v4 + 56) )
      v3 = *(float *)(v4 + 56);
  }
  v10 = v3;
  (*(void (__thiscall **)(_DWORD *, float *, _DWORD, _DWORD))(*this + 68))(
    this,
    v12,
    LODWORD(v10),
    *(float *)(dword_106B7194 + 44));
  v5 = (float *)this[2];
  v6 = (float *)this[1];
  v7 = *this;
  v5[16] = v5[16] + v6[116];
  v5[17] = v5[17] + v6[117];
  v5[18] = v5[18] + v6[118];
  (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(v7 + 112))(this, 0, 0);
  result = (float *)this[2];
  v9 = (float *)this[1];
  result[16] = result[16] - v9[116];
  result[17] = result[17] - v9[117];
  result[18] = result[18] - v9[118];
  return result;
}
