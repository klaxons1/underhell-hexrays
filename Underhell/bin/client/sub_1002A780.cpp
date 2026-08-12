signed __int32 __thiscall sub_1002A780(volatile signed __int32 *this)
{
  volatile signed __int32 *v1; // esi
  signed __int32 result; // eax

  v1 = this + 2;
  result = _InterlockedDecrement(this + 3);
  if ( !result )
  {
    if ( (*(unsigned __int8 (__thiscall **)(volatile signed __int32 *))(*v1 + 4))(v1) )
      (**(void (__thiscall ***)(volatile signed __int32 *, int))v1)(v1, 1);
    return 0;
  }
  return result;
}
