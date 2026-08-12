int __thiscall sub_10417BE0(void *this, int a2)
{
  int result; // eax

  result = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 4))(this, a2);
  if ( result )
    return sub_101EE630(result);
  result = sub_10261B20();
  if ( result )
    return sub_101EE630(result);
  return result;
}
