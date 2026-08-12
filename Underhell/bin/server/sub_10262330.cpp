_DWORD *sub_10262330()
{
  double v0; // st7
  _DWORD *result; // eax

  v0 = *(float *)(dword_106B31C8 + 12) - flt_106CC0CC;
  if ( v0 >= 0.1 || v0 < 0.0 )
  {
    dword_106CC0C8 = sub_10262220(dword_106CC0C8);
    flt_106CC0CC = *(float *)(dword_106B31C8 + 12);
  }
  result = (_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, dword_106CC0C8);
  if ( !result || (*result & 2) != 0 || !result[3] )
    return 0;
  return result;
}
