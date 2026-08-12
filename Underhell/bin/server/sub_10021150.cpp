float *__thiscall sub_10021150(float *this, float *a2)
{
  float *v3; // eax
  double v4; // st7
  float *result; // eax
  char v6[12]; // [esp+4h] [ebp-Ch] BYREF

  if ( (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 2168))(this) )
  {
    if ( ((_DWORD)this[63] & 0x800) != 0 )
      sub_100DAE60(this);
    v3 = (float *)(*(int (__thiscall **)(float *, char *))(*(_DWORD *)this + 2188))(this, v6);
    *a2 = *v3 + this[145];
    a2[1] = v3[1] + this[146];
    v4 = v3[2];
    result = a2;
    a2[2] = v4 + this[147];
  }
  else
  {
    sub_100E8850(a2);
    return a2;
  }
  return result;
}
