_DWORD *__thiscall sub_1021EA00(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax
  _DWORD *v3; // ecx

  result = (_DWORD *)this[6];
  if ( result )
  {
    if ( result[3] - result[2] >= 12 )
    {
      v3 = (_DWORD *)result[1];
      *v3 = *a2;
      v3[1] = a2[1];
      v3[2] = a2[2];
      result[1] += 12;
      result[2] += 12;
    }
    else
    {
      result[2] = result[3];
      return (_DWORD *)Warning("Save/Restore overflow!\n");
    }
  }
  return result;
}
