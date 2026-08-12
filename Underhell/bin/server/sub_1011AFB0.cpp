int __thiscall sub_1011AFB0(int *this, float **a2)
{
  int result; // eax
  float *v3; // esi

  result = (int)a2;
  v3 = *a2;
  if ( *a2 )
  {
    result = (*(int (__thiscall **)(float *))(*(_DWORD *)v3 + 320))(*a2);
    if ( (_BYTE)result )
    {
      if ( this[201] )
      {
        result = (int)v3[138];
        this[201] = result;
      }
      v3[138] = (float)this[200];
    }
  }
  return result;
}
