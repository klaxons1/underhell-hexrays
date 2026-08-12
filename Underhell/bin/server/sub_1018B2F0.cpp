int __thiscall sub_1018B2F0(int this)
{
  int result; // eax
  int v2; // edx

  result = dword_10632620;
  *(_DWORD *)(this + 520) = dword_10632620;
  v2 = dword_106B7A10;
  if ( dword_106B7A10 )
  {
    while ( *(float *)(v2 + 504) <= (double)*(float *)(this + 504) )
    {
      result = v2;
      v2 = *(_DWORD *)(v2 + 512);
      if ( !v2 )
      {
        *(_DWORD *)(result + 512) = this;
        *(_DWORD *)(this + 516) = result;
        *(_DWORD *)(this + 512) = 0;
        return result;
      }
    }
    result = *(_DWORD *)(v2 + 516);
    *(_DWORD *)(this + 516) = result;
    if ( result )
      *(_DWORD *)(result + 512) = this;
    else
      dword_106B7A10 = this;
    *(_DWORD *)(this + 512) = v2;
    *(_DWORD *)(v2 + 516) = this;
  }
  else
  {
    dword_106B7A10 = this;
    *(_DWORD *)(this + 516) = 0;
    *(_DWORD *)(this + 512) = 0;
  }
  return result;
}
