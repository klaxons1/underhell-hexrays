int __thiscall sub_10015420(float *this)
{
  int result; // eax
  float v3[3]; // [esp+4h] [ebp-18h] BYREF
  float v4[3]; // [esp+10h] [ebp-Ch] BYREF

  (*(void (__thiscall **)(float *))(*(_DWORD *)this + 128))(this);
  v4[0] = 8.0;
  v4[1] = 4.0;
  v4[2] = 2.0;
  v3[0] = -8.0;
  v3[1] = -4.0;
  v3[2] = -2.0;
  sub_10036450(v3, v4);
  result = sub_1008FA90(0);
  if ( *((_BYTE *)this + 1960) )
    *((_BYTE *)this + 1960) = 0;
  this[491] = 0.0;
  return result;
}
