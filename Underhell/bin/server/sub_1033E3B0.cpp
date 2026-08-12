float *__thiscall sub_1033E3B0(float *this, float *a2)
{
  bool v3; // bl
  bool v4; // zf
  double v5; // st7
  double v6; // st6
  double v7; // st5
  float *result; // eax
  float v9; // [esp+8h] [ebp-18h]
  float v10; // [esp+Ch] [ebp-14h]
  float v11; // [esp+10h] [ebp-10h]
  float v12; // [esp+14h] [ebp-Ch] BYREF
  float v13; // [esp+18h] [ebp-8h]
  float v14; // [esp+1Ch] [ebp-4h]

  v3 = (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 2168))(this) == 0;
  (*(void (__thiscall **)(float *, _DWORD, float *, _DWORD))(*(_DWORD *)this + 528))(this, 0, &v12, 0);
  if ( ((*(int (__thiscall **)(float *))(*(_DWORD *)this + 1672))(this) & 0x8000000) != 0
    && (*(unsigned __int8 (__thiscall **)(float *, _DWORD))(*(_DWORD *)this + 2184))(this, *((_DWORD *)this + 593))
    || !v3 )
  {
    if ( sub_100CF460(this) && *(_DWORD *)(sub_100CF460(this) + 92) == dword_106E6538 )
      v4 = ((_DWORD)this[63] & 0x800) == 0;
    else
      v4 = ((_DWORD)this[63] & 0x800) == 0;
LABEL_14:
    v9 = v12 * 8.0;
    v10 = v13 * 8.0;
    v11 = 8.0 * v14;
    if ( !v4 )
      sub_100DAE60((int)this);
    v5 = this[145];
    v6 = this[146];
    v7 = this[147] + 36.0;
    goto LABEL_17;
  }
  if ( sub_100CF460(this) && *(_DWORD *)(sub_100CF460(this) + 92) == dword_106E6538 )
  {
    v4 = ((_DWORD)this[63] & 0x800) == 0;
    goto LABEL_14;
  }
  v9 = v12 * 8.0;
  v10 = v13 * 8.0;
  v11 = 8.0 * v14;
  if ( ((_DWORD)this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  v5 = this[145];
  v6 = this[146];
  v7 = this[147] + 57.0;
LABEL_17:
  result = a2;
  *a2 = v5 + v9;
  a2[1] = v6 + v10;
  a2[2] = v7 + v11;
  return result;
}
