int __thiscall sub_1015E1B0(void *this, int a2)
{
  int result; // eax
  int v3; // edx

  result = a2;
  v3 = dword_106B4F3C;
  if ( a2 >= 1 )
  {
    if ( a2 > 3 )
      result = 3;
  }
  else
  {
    result = 1;
  }
  dword_106B4F3C = result;
  if ( result != v3 )
    return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, result);
  return result;
}
