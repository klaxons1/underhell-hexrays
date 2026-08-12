float *__thiscall sub_100C8350(_DWORD *this, float *a2, int a3, int a4)
{
  float *result; // eax

  if ( a3 )
  {
    (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)a3 + 1096))(a3, a2, this[439]);
    return a2;
  }
  else
  {
    result = a2;
    *a2 = 0.13053;
    a2[1] = 0.13053;
    a2[2] = 0.13053;
  }
  return result;
}
