float *__thiscall sub_100A8AD0(_DWORD *this)
{
  int v2; // eax
  float *v3; // eax
  float *v4; // ecx
  int v5; // edx
  float *result; // eax
  float *v7; // esi

  (*(void (__thiscall **)(_DWORD *))(*this + 140))(this);
  v2 = this[2];
  if ( (*(_BYTE *)(v2 + 36) & 2) != 0 )
    (*(void (__thiscall **)(_DWORD *))(*this + 100))(this);
  else
    *(_DWORD *)(v2 + 40) &= ~2u;
  v3 = (float *)this[2];
  v4 = (float *)this[1];
  v5 = *this;
  v3[16] = v3[16] + v4[71];
  v3[17] = v3[17] + v4[72];
  v3[18] = v3[18] + v4[73];
  (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(v5 + 112))(this, 0, 0);
  result = (float *)this[2];
  v7 = (float *)this[1];
  result[16] = result[16] - v7[71];
  result[17] = result[17] - v7[72];
  result[18] = result[18] - v7[73];
  return result;
}
