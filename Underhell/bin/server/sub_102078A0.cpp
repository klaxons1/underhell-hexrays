float *__thiscall sub_102078A0(_DWORD *this, float *a2)
{
  float *result; // eax

  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*(this - 1) + 92))(this - 1, 4)
    || (*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*(this - 1) + 92))(this - 1, 5) )
  {
    result = a2;
    *a2 = 0.0;
    a2[1] = 0.0;
    a2[2] = 0.0;
  }
  else
  {
    sub_100F2EC0(a2);
    return a2;
  }
  return result;
}
