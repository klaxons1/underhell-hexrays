volatile __int32 *__thiscall sub_1001E270(volatile __int32 *this)
{
  bool v1; // zf
  volatile __int32 *result; // eax

  v1 = (*((_DWORD *)this + 20))-- == 1;
  result = this + 19;
  if ( v1 )
    _InterlockedExchange(result, 0);
  return result;
}
