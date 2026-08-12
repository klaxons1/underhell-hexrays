bool __thiscall sub_101C8820(_DWORD *this, int a2)
{
  bool result; // al
  int v4; // edi
  int i; // ebx

  result = 1;
  if ( (this[63] & 0x400000) == 0
    && (a2 == 2 || (result = sub_101C8780((int)this, -1, (void (__thiscall *)(_DWORD *))sub_103D79E0)))
    && a2 != 1 )
  {
    v4 = 0;
    if ( (int)this[39] > 0 )
    {
      for ( i = 0; ; i += 16 )
      {
        result = sub_101C8780((int)this, v4, *(void (__thiscall **)(_DWORD *))(this[36] + i));
        if ( !result )
          break;
        if ( ++v4 >= this[39] )
          return result;
      }
      return 0;
    }
  }
  return result;
}
