float *__thiscall sub_10022970(float *this, float *a2)
{
  int v3; // ecx
  float *v4; // eax
  double v5; // st7
  double v6; // st6
  double v7; // st5
  float *result; // eax
  char v9[12]; // [esp+4h] [ebp-24h] BYREF
  float v10[3]; // [esp+10h] [ebp-18h] BYREF
  float v11; // [esp+1Ch] [ebp-Ch]
  float v12; // [esp+20h] [ebp-8h]
  float v13; // [esp+24h] [ebp-4h]

  (*(void (__thiscall **)(float *, _DWORD, float *, _DWORD))(*(_DWORD *)this + 528))(this, 0, v10, 0);
  if ( (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 2168))(this)
    || ((*(int (__thiscall **)(float *))(*(_DWORD *)this + 1672))(this) & 0x8000000) != 0
    && (*(unsigned __int8 (__thiscall **)(float *, _DWORD))(*(_DWORD *)this + 2184))(this, *((_DWORD *)this + 593)) )
  {
    v3 = *((_DWORD *)this + 63) >> 11;
    v11 = v10[0] * 8.0;
    v12 = v10[1] * 8.0;
    v13 = 8.0 * v10[2];
    if ( (v3 & 1) != 0 )
      sub_100DAE60(this);
    v4 = (float *)(*(int (__thiscall **)(float *, char *))(*(_DWORD *)this + 2192))(this, v9);
    v5 = this[145] + *v4;
    v6 = this[146] + v4[1];
    v7 = this[147] + v4[2];
    result = a2;
    *a2 = v5 + v11;
    a2[1] = v6 + v12;
    a2[2] = v7 + v13;
  }
  else
  {
    sub_100C8000(a2);
    return a2;
  }
  return result;
}
