int __thiscall sub_101C4770(_DWORD *this, unsigned int a2)
{
  int v3; // ecx
  int result; // eax

  if ( ((1 << a2) & this[191]) != 0 )
  {
    if ( a2 <= 0x1F )
    {
      v3 = dword_106BA7CC[a2];
      if ( v3 )
        result = (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v3 + 12))(v3, this);
    }
    this[191] &= ~(1 << a2);
  }
  return result;
}
