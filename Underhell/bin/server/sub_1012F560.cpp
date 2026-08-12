float *__thiscall sub_1012F560(int this, float a2)
{
  float *result; // eax
  int v4; // ecx
  float *v5; // edx
  char *v6; // eax
  int v7; // eax
  int *v8; // ecx

  result = (float *)(LODWORD(a2) + 8);
  v4 = *(_DWORD *)(LODWORD(a2) + 24);
  if ( v4 == 2 )
  {
    v5 = (float *)(LODWORD(a2) + 8);
  }
  else
  {
    a2 = 0.0;
    v5 = &a2;
  }
  if ( *(_DWORD *)v5 )
  {
    if ( v4 != 2 )
    {
      a2 = 0.0;
      result = &a2;
    }
    v6 = *(char **)result;
    if ( !v6 )
      v6 = (char *)String;
    result = (float *)sub_100BDF40(this, v6);
    if ( result != (float *)-1 )
    {
      sub_100C1170(this, (int)result);
      sub_100C2AB0(this);
      v7 = *(_DWORD *)(this + 904);
      a2 = 0.0;
      if ( v7 != COERCE_INT(0.0) )
      {
        if ( *(_BYTE *)(this + 84) )
        {
          *(_BYTE *)(this + 88) |= 1u;
        }
        else
        {
          v8 = *(int **)(this + 24);
          if ( v8 )
            sub_100194B0(v8, 904);
        }
        *(float *)(this + 904) = 0.0;
      }
      a2 = 1.0;
      return sub_10045790((float *)(this + 864), &a2);
    }
  }
  return result;
}
