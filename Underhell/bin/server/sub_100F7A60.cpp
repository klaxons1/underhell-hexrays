float *__thiscall sub_100F7A60(float *this, float *a2)
{
  float *result; // eax
  double v4; // st6
  double v5; // st7
  float v6[3]; // [esp+4h] [ebp-Ch] BYREF

  result = (float *)dword_10699204;
  if ( !*(_DWORD *)(dword_10699204 + 48) )
  {
    result = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 1088))(this);
    if ( !(_BYTE)result )
    {
      v4 = 20.0 * a2[2];
      v5 = a2[1] * 20.0;
      v6[0] = *a2 * 20.0 + this[579];
      v6[1] = v5 + this[580];
      v6[2] = v4 + this[581];
      return sub_100F5EF0(this + 579, v6);
    }
  }
  return result;
}
