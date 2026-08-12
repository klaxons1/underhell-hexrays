_DWORD *__thiscall sub_100D14A0(int this, float a2, int a3)
{
  _DWORD *result; // eax

  result = (_DWORD *)dword_106B31C8;
  *(float *)(this + 1240) = *(float *)(dword_106B31C8 + 12) + a2;
  if ( a3 )
  {
    result = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 8))(a3);
    *(_DWORD *)(this + 1244) = *result;
  }
  else
  {
    *(_DWORD *)(this + 1244) = -1;
  }
  return result;
}
