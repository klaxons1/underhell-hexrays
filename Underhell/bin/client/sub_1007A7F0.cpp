int __thiscall sub_1007A7F0(_DWORD *this)
{
  _DWORD *v1; // esi
  int result; // eax

  v1 = (_DWORD *)this[16385];
  if ( !v1 )
    return 0;
  while ( 1 )
  {
    if ( *v1 )
    {
      result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v1 + 28))(*v1);
      if ( result )
        break;
    }
    v1 = (_DWORD *)v1[3];
    if ( !v1 )
      return 0;
  }
  return result;
}
