_DWORD *__thiscall sub_101666F0(int this, int a2, int a3)
{
  _DWORD *result; // eax
  double v4; // st7
  float v6; // [esp+4h] [ebp-4h]

  result = (_DWORD *)dword_106B31C8;
  v4 = *(float *)(dword_106B31C8 + 12);
  v6 = *(float *)(dword_106B31C8 + 12);
  if ( a2 )
  {
    result = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
    *(_DWORD *)(this + 20) = *result;
    *(float *)(this + 24) = v6;
  }
  else
  {
    *(_DWORD *)(this + 20) = -1;
    *(float *)(this + 24) = v4;
  }
  return result;
}
