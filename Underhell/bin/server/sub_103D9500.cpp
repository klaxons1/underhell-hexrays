float *__thiscall sub_103D9500(float *this, float *a2)
{
  float *result; // eax
  int v4; // edx
  int v5; // ecx
  int (__thiscall *v6)(float *); // eax
  float *v7; // eax
  double v8; // st7
  float v9[3]; // [esp+4h] [ebp-18h] BYREF
  float v10; // [esp+10h] [ebp-Ch]
  float v11; // [esp+14h] [ebp-8h]
  float v12; // [esp+18h] [ebp-4h]

  if ( ((_DWORD)this[62] & 0x10000) != 0 )
  {
    if ( ((_DWORD)this[63] & 0x800) != 0 )
      sub_100DAE60((int)this);
    result = a2;
    v4 = *((_DWORD *)this + 146);
    *a2 = this[145];
    v5 = *((_DWORD *)this + 147);
    *((_DWORD *)a2 + 1) = v4;
    *((_DWORD *)a2 + 2) = v5;
  }
  else
  {
    sub_10422220(this + 182, v9);
    v6 = *(int (__thiscall **)(float *))(*(_DWORD *)this + 576);
    v10 = v9[0] * 20.0;
    v11 = v9[1] * 20.0;
    v12 = 20.0 * v9[2];
    v7 = (float *)v6(this);
    *a2 = *v7 + v10;
    a2[1] = v7[1] + v11;
    v8 = v7[2];
    result = a2;
    a2[2] = v8 + v12;
  }
  return result;
}
