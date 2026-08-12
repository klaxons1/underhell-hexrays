BOOL __thiscall sub_1033D050(_BYTE *this)
{
  int v2; // eax
  BOOL result; // eax

  result = 0;
  if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 368))(this) )
  {
    v2 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 368))(this);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 320))(v2) )
    {
      if ( (unsigned __int8)sub_103FA550() && !this[2812] )
        return 1;
    }
  }
  return result;
}
