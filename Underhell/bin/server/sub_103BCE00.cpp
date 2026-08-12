float *__thiscall sub_103BCE00(float *this, float *a2)
{
  int v3; // edi
  float *v4; // eax
  double v5; // st7
  float *result; // eax
  char v7[12]; // [esp+8h] [ebp-Ch] BYREF

  v3 = *((_DWORD *)this + 593);
  if ( ((_DWORD)this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  v4 = (float *)(*(int (__thiscall **)(float *, char *, int))(*(_DWORD *)this + 1796))(this, v7, v3);
  *a2 = *v4 + this[145];
  a2[1] = v4[1] + this[146];
  v5 = v4[2];
  result = a2;
  a2[2] = v5 + this[147];
  return result;
}
