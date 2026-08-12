int __thiscall sub_10116E50(_DWORD *this, float a2, int a3)
{
  int v3; // esi
  float v5; // ebx
  double v6; // st7
  long double v7; // st7
  int result; // eax

  v3 = 0;
  if ( a3 > 0 )
  {
    v5 = a2;
    while ( 0.0 != *(float *)(LODWORD(v5) + 4 * v3) )
    {
      if ( -3.402823466385289e38 == *(float *)(LODWORD(v5) + 4 * v3) || 3.4028235e38 == *(float *)(LODWORD(v5) + 4 * v3) )
      {
        v6 = *(float *)(LODWORD(v5) + 4 * v3);
        goto LABEL_10;
      }
      v7 = *(float *)(LODWORD(v5) + 4 * v3) - *(float *)(this[7] + 1320);
      a2 = v7;
      if ( fabs(v7) < 0.001 )
      {
        v6 = 0.001;
        goto LABEL_10;
      }
LABEL_11:
      result = (*(int (__thiscall **)(_DWORD *, float *, int))(*this + 76))(this, &a2, 4);
      if ( ++v3 >= a3 )
        return result;
    }
    v6 = -1.7014117e38;
LABEL_10:
    a2 = v6;
    goto LABEL_11;
  }
  return result;
}
