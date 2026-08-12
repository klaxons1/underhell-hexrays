float *__thiscall sub_10111910(_BYTE *this, float *a2, float *a3, float *a4, float *a5)
{
  char v6; // al
  float *v7; // eax
  int v8; // eax
  float *result; // eax
  float *v10; // eax

  if ( (this[36] & 0x40) != 0
    || (v6 = this[41], v6 == 2)
    || !v6
    || (v7 = (float *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 36))(this), *v7 == flt_106F1CB4)
    && v7[1] == flt_106F1CB8
    && v7[2] == flt_106F1CBC )
  {
    v10 = (float *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 32))(this);
    *a4 = *a2 + *v10;
    a4[1] = v10[1] + a2[1];
    a4[2] = v10[2] + a2[2];
    result = (float *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 32))(this);
    *a5 = *a3 + *result;
    a5[1] = result[1] + a3[1];
    a5[2] = result[2] + a3[2];
  }
  else
  {
    v8 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 40))(this);
    return (float *)sub_10425340(v8, a2, a3, a4, a5);
  }
  return result;
}
