int __thiscall sub_101C46F0(_DWORD *this, unsigned int a2)
{
  int v4; // ecx

  if ( ((1 << a2) & this[191]) != 0 && a2 <= 0x1F && (v4 = dword_106BA7CC[a2]) != 0 )
    return (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v4 + 4))(v4, this);
  else
    return 0;
}
