int *__thiscall sub_102059F0(int *this, _DWORD *a2)
{
  int *result; // eax
  float v4; // [esp+0h] [ebp-Ch]

  sub_100EC3F0(this, (int)sub_10205830, 0.0, 0);
  v4 = *(float *)(dword_106B31C8 + 12) + 0.1;
  result = (int *)sub_100EC4A0(this, v4, 0);
  if ( *a2 )
  {
    result = (int *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a2 + 8))(*a2);
    this[205] = *result;
  }
  else
  {
    this[205] = -1;
  }
  return result;
}
