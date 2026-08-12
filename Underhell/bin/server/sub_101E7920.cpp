float *__thiscall sub_101E7920(_DWORD **this, float *a2)
{
  bool v3; // zf
  float *result; // eax
  float *v5; // ecx
  int v6; // edx
  int v7; // ecx

  v3 = (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this[2] + 1612))(this[2]) == 0;
  result = a2;
  if ( v3 )
  {
    *a2 = 0.0;
    a2[1] = 0.0;
    a2[2] = 0.0;
  }
  else
  {
    v5 = (float *)this[2];
    *a2 = v5[179];
    v6 = *((_DWORD *)v5 + 180);
    v7 = *((_DWORD *)v5 + 181);
    *((_DWORD *)a2 + 1) = v6;
    *((_DWORD *)a2 + 2) = v7;
  }
  return result;
}
