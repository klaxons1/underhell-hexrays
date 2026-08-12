float *__thiscall sub_10157520(_DWORD **this, float a2)
{
  float *v3; // eax
  float *v4; // ecx
  float v6; // [esp+Ch] [ebp-34h]
  float v7; // [esp+18h] [ebp-28h]
  float v8; // [esp+24h] [ebp-1Ch]
  float v9; // [esp+30h] [ebp-10h]
  float v10[3]; // [esp+34h] [ebp-Ch] BYREF

  v9 = *(float *)(((int (__thiscall *)(_DWORD **, int))(*this)[5])(this, 1) + 8);
  v8 = *(float *)(((int (__thiscall *)(_DWORD **, _DWORD))(*this)[5])(this, 0) + 8);
  v7 = *(float *)(((int (__thiscall *)(_DWORD **, int))(*this)[7])(this, 1) + 8);
  v6 = *(float *)(((int (__thiscall *)(_DWORD **, _DWORD))(*this)[7])(this, 0) + 8);
  v3 = (float *)(*(int (__thiscall **)(_DWORD *))(*this[1] + 532))(this[1]);
  v10[0] = *v3;
  v10[1] = v3[1];
  v4 = (float *)this[1];
  v10[2] = (v7 - (v9 - v8)) * a2 + (1.0 - a2) * v6;
  return sub_100DC4E0(v4, v10);
}
