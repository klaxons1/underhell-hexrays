int __thiscall sub_10257C40(_DWORD *this, int a2)
{
  int result; // eax

  result = (*(int (__thiscall **)(_DWORD *, int))(*this + 752))(this, a2);
  if ( (_BYTE)result )
  {
    if ( a2 )
    {
      result = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2);
      if ( (_BYTE)result )
      {
        result = this[62] >> 11;
        if ( (this[62] & 0x800) != 0 )
          result = sub_101E22E0((_DWORD *)a2, 4);
        if ( (this[62] & 0x80) != 0 && *(_BYTE *)(a2 + 2336) != 1 )
        {
          result = (**(int (__thiscall ***)(int, int))(a2 + 2192))(a2 + 2192, a2 + 2336);
          *(_BYTE *)(a2 + 2336) = 1;
        }
      }
    }
  }
  return result;
}
