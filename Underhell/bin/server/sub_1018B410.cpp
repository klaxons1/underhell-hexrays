int __thiscall sub_1018B410(_DWORD *this)
{
  int v1; // eax
  int result; // eax

  v1 = this[129];
  if ( v1 )
    *(_DWORD *)(v1 + 512) = this[128];
  else
    dword_106B7A10 = this[128];
  result = this[128];
  if ( result )
    *(_DWORD *)(result + 516) = this[129];
  this[130] = 0;
  return result;
}
