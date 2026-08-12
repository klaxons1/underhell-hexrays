int __thiscall sub_10349A60(float *this)
{
  int v2; // eax
  int (__thiscall *v3)(float *, _DWORD, float *); // edx
  float v5[3]; // [esp+18h] [ebp-24h] BYREF
  float v6[3]; // [esp+24h] [ebp-18h] BYREF
  float v7; // [esp+30h] [ebp-Ch]
  float v8; // [esp+34h] [ebp-8h]
  float v9; // [esp+38h] [ebp-4h]

  (*(void (__thiscall **)(float *, float *, _DWORD, _DWORD))(*(_DWORD *)this + 528))(this, v6, 0, 0);
  v2 = *((_DWORD *)this + 63) >> 11;
  v7 = v6[0] * -64.0;
  v8 = v6[1] * -64.0;
  v9 = -64.0 * v6[2];
  if ( (v2 & 1) != 0 )
    sub_100DAE60((int)this);
  v3 = *(int (__thiscall **)(float *, _DWORD, float *))(*(_DWORD *)this + 2316);
  v5[0] = this[145] + v7;
  v5[1] = this[146] + v8;
  v5[2] = this[147] + v9;
  return v3(this, 1024.0, v5);
}
