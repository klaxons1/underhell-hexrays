int __thiscall sub_103F9B30(float *this, int a2, int *a3, float a4, float *a5, float *a6)
{
  double v7; // st7
  double v8; // st7
  double (__thiscall *v9)(int *, float *, float, _DWORD); // edx
  int result; // eax
  float v11; // [esp+Ch] [ebp-60h]
  float v12; // [esp+14h] [ebp-58h]
  float v13; // [esp+14h] [ebp-58h]
  float v14[12]; // [esp+24h] [ebp-48h] BYREF
  int v15[3]; // [esp+54h] [ebp-18h] BYREF
  int v16[3]; // [esp+60h] [ebp-Ch] BYREF

  v7 = this[19];
  qmemcpy(v14, this + 1, sizeof(v14));
  v12 = v7;
  if ( sub_103F9AA0((int)a3, v12) )
    v8 = 0.1;
  else
    v8 = 1.0;
  v11 = v8;
  v13 = a4 + a4;
  sub_10424B10(v11, this[16], v13);
  this[16] = v8;
  v9 = *(double (__thiscall **)(int *, float *, float, _DWORD))(*a3 + 288);
  v14[6] = this[7] * this[16] * this[16] * this[16];
  this[13] = ((double (__thiscall *)(_DWORD, _DWORD, _DWORD, _DWORD))v9)(a3, v14, this[13], LODWORD(a4));
  (*(void (__thiscall **)(int *, int *, int *))(*a3 + 204))(a3, v16, v15);
  sub_101DBA60(a3, (float *)v16, (float *)v15, (float *)v16, (float *)v15, this[19]);
  (*(void (__thiscall **)(int *, int *, _DWORD))(*a3 + 200))(a3, v16, 0);
  *a5 = 0.0;
  a5[1] = 0.0;
  a5[2] = 0.0;
  *a6 = 0.0;
  a6[1] = 0.0;
  a6[2] = 0.0;
  result = 1;
  this[14] = a4 + this[14];
  return result;
}
