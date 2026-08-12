float *__thiscall sub_1017A2B0(int this)
{
  int v2; // ecx
  char *v3; // eax
  float *result; // eax

  v2 = 0;
  while ( 1 )
  {
    v3 = *(char **)(this + 212);
    if ( !v3 )
      v3 = (char *)String;
    result = (float *)sub_1012BF20(&dword_1069E3E0, v2, v3, 0, 0, 0, 0);
    v2 = (int)result;
    if ( !result )
      break;
    if ( *(_BYTE *)(this + 804) )
    {
      if ( (*(_BYTE *)(this + 808) & 1) != 0 && result[112] < 3.4028235e38 )
        result[112] = 3.4028235e38;
    }
    else if ( (*(_BYTE *)(this + 808) & 1) != 0 )
    {
      result[112] = 0.0;
    }
  }
  return result;
}
