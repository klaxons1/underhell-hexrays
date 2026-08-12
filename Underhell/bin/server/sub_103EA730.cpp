int __thiscall sub_103EA730(int (__thiscall ***this)(_DWORD), int a2)
{
  int result; // eax
  int v4; // esi
  int v5; // eax

  result = (*this[371])(this + 371);
  v4 = result;
  if ( result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 320))(result);
    if ( (_BYTE)result )
    {
      *(_DWORD *)(v4 + 3296) |= 0x20u;
      v5 = (*this)[85](this);
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 28))(v5, v4);
    }
  }
  return result;
}
