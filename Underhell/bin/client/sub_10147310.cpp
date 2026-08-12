int __thiscall sub_10147310(_DWORD *this)
{
  _DWORD *v2; // esi
  int result; // eax
  void (__thiscall ***v4)(_DWORD, int); // ebx

  while ( 1 )
  {
    v2 = (_DWORD *)*this;
    result = this[1];
    if ( !*this )
      break;
    while ( 1 )
    {
      result = ThreadInterlockedAssignIf64(this, *v2, result - 1, v2, result);
      if ( (_BYTE)result )
        break;
      _mm_pause();
      v2 = (_DWORD *)*this;
      result = this[1];
      if ( !*this )
        return result;
    }
    if ( !v2 )
      break;
    v4 = (void (__thiscall ***)(_DWORD, int))v2[1];
    sub_10034930((int)v2);
    if ( v4 )
      (**v4)(v4, 1);
  }
  return result;
}
