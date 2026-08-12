float *__thiscall sub_1008E9C0(int this, float *a2, float *a3, float *a4)
{
  double v5; // st7
  float v7[3]; // [esp+24h] [ebp-18h] BYREF
  float v8; // [esp+30h] [ebp-Ch]
  float v9; // [esp+34h] [ebp-8h]

  v8 = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(*a2, *a3);
  v9 = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(a2[1], a3[1]);
  v5 = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(a2[2], a3[2]);
  v7[0] = (*(float *)(this + 20) - *(float *)(this + 8)) * v8 + *(float *)(this + 8);
  v7[1] = (*(float *)(this + 24) - *(float *)(this + 12)) * v9 + *(float *)(this + 12);
  v7[2] = v5 * (*(float *)(this + 28) - *(float *)(this + 16)) + *(float *)(this + 16);
  return sub_1000EEE0((_BYTE *)this, v7, a4);
}
