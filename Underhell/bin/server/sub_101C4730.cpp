int __thiscall sub_101C4730(_DWORD *this, unsigned int a2)
{
  int v3; // ecx

  this[191] |= 1 << a2;
  if ( a2 <= 0x1F && (v3 = dword_106BA7CC[a2]) != 0 )
    return (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v3 + 8))(v3, this);
  else
    return 0;
}
