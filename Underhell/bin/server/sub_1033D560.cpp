float *__thiscall sub_1033D560(void *this, float *a2, int a3)
{
  float *result; // eax

  if ( ((*(int (__thiscall **)(void *))(*(_DWORD *)this + 1672))(this) & 0x8000000) != 0
    && (*(unsigned __int8 (__thiscall **)(void *, int))(*(_DWORD *)this + 2184))(this, a3)
    || (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 2168))(this) )
  {
    result = a2;
    *a2 = 0.0;
    a2[1] = 0.0;
    a2[2] = 40.0;
  }
  else
  {
    result = a2;
    *a2 = 0.0;
    a2[1] = 0.0;
    a2[2] = 66.0;
  }
  return result;
}
