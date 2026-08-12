signed __int32 __cdecl sub_10143360(volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // esi
  signed __int32 result; // eax

  v1 = *a1;
  if ( !*a1 )
    return 0;
  result = _InterlockedDecrement(v1 + 1);
  if ( !result )
  {
    if ( (*(unsigned __int8 (__thiscall **)(volatile signed __int32 *))(*v1 + 4))(v1) )
      (**(void (__thiscall ***)(volatile signed __int32 *, int))v1)(v1, 1);
    result = 0;
  }
  *a1 = 0;
  return result;
}
