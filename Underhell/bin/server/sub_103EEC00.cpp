float *__thiscall sub_103EEC00(_DWORD *this, float *a2)
{
  bool v2; // zf
  float *result; // eax

  v2 = (*(unsigned __int8 (__thiscall **)(_DWORD *))(*(this - 280) + 868))(this - 280) == 0;
  result = a2;
  *a2 = 0.0;
  if ( v2 )
    a2[1] = 0.0;
  else
    a2[1] = 300.0;
  a2[2] = 0.0;
  return result;
}
