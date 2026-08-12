_DWORD *__thiscall sub_101FA630(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax
  _DWORD *v3; // edx
  int v4; // edx
  bool v5; // zf

  result = a2;
  v3 = (_DWORD *)a2[1];
  if ( v3 )
  {
    *v3 = *a2;
    if ( *a2 )
    {
      *(_DWORD *)(*a2 + 4) = a2[1];
      a2[1] = 0;
      *a2 = 0;
      return result;
    }
  }
  else if ( (_DWORD *)*this == a2 )
  {
    v4 = *a2;
    v5 = *a2 == 0;
    *this = *a2;
    if ( !v5 )
      *(_DWORD *)(v4 + 4) = 0;
  }
  a2[1] = 0;
  *a2 = 0;
  return result;
}
