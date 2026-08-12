int __thiscall sub_10134A70(int this, int a2)
{
  const char **v3; // ecx
  const char *v4; // eax
  const char *v5; // edi
  const char *v6; // eax
  int result; // eax
  int *v8; // ecx
  int *v9; // ecx

  v3 = (const char **)(a2 + 8);
  if ( *(_DWORD *)(a2 + 24) == 2 )
  {
    v4 = *v3;
    if ( !*v3 )
      v4 = String;
  }
  else
  {
    v4 = sub_1010D460((int)v3);
  }
  if ( sscanf("%f %f", v4, 1.0, 1.0) == 2 )
  {
    if ( *(_DWORD *)(this + 828) != COERCE_INT(1.0) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v8 = *(int **)(this + 24);
        if ( v8 )
          sub_100194B0(v8, 828);
      }
      *(float *)(this + 828) = 1.0;
    }
    result = *(_DWORD *)(this + 828);
    if ( result != COERCE_INT(1.0) )
    {
      result = this;
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
        *(float *)(this + 828) = 1.0;
      }
      else
      {
        v9 = *(int **)(this + 24);
        if ( v9 )
          result = sub_100194B0(v9, 828);
        *(float *)(this + 828) = 1.0;
      }
    }
  }
  else
  {
    v5 = *(const char **)(this + 92);
    if ( !v5 )
      v5 = String;
    v6 = sub_100D6390((_DWORD *)this);
    return Warning(
             "%s (%s) received SetBloomScaleRange input without 2 arguments. Syntax: <max bloom> <min bloom>\n",
             v5,
             v6);
  }
  return result;
}
