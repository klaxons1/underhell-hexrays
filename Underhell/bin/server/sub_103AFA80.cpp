float *__thiscall sub_103AFA80(float *this, float *a2)
{
  int v3; // edx
  int v4; // eax
  double v5; // st7
  float *result; // eax
  int v7; // [esp-4h] [ebp-Ch]

  if ( ((_DWORD)this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  v3 = *((_DWORD *)this + 146);
  v4 = *((_DWORD *)this + 147);
  *a2 = this[145];
  v7 = dword_106EAD9C;
  *((_DWORD *)a2 + 1) = v3;
  *((_DWORD *)a2 + 2) = v4;
  v5 = sub_100BE820((int)this, v7);
  result = a2;
  a2[2] = a2[2] - (500.0 - v5);
  return result;
}
