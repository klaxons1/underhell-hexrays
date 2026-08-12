char __thiscall sub_102C8CE0(float *this)
{
  double v2; // st7
  char result; // al
  float v4; // [esp+4h] [ebp-4h]

  v2 = *(float *)(dword_106B31C8 + 12) - this[246];
  if ( v2 <= this[247] || v2 <= this[249] )
    return 1;
  if ( v2 > this[248]
    || (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 30) )
  {
    return 0;
  }
  result = 1;
  v4 = v2;
  this[249] = v4 + 0.5;
  return result;
}
