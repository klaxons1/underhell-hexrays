float *__thiscall sub_101111C0(_BYTE *this, float *a2, float *a3)
{
  char v4; // al
  float *v5; // eax
  int v6; // eax
  float *result; // eax

  if ( (this[36] & 0x40) != 0
    || (v4 = this[41], v4 == 2)
    || !v4
    || (v5 = (float *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 36))(this), *v5 == flt_106F1CB4)
    && v5[1] == flt_106F1CB8
    && v5[2] == flt_106F1CBC )
  {
    result = a3;
    *a3 = *a2;
    a3[1] = a2[1];
    a3[2] = a2[2];
  }
  else
  {
    v6 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 40))(this);
    sub_10421C60(a2, v6, a3);
    return a3;
  }
  return result;
}
