double *__thiscall sub_102C6310(_DWORD *this, float *a2, const char *ArgList, float a4)
{
  double *result; // eax
  double *v6; // esi
  double v7; // st7

  sub_1015F250(this, a2, ArgList, a4);
  result = (double *)sub_102C60E0(this, ArgList);
  v6 = result;
  if ( result )
  {
    *(_WORD *)result = (int)*a2;
    *((_WORD *)result + 1) = (int)a2[1];
    result = (double *)(int)a2[2];
    v7 = a4 + v6[2];
    ++*((_DWORD *)v6 + 2);
    *((_WORD *)v6 + 2) = (_WORD)result;
    v6[2] = v7;
  }
  return result;
}
