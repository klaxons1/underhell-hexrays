int __thiscall sub_1011C5F0(int this, char a2)
{
  int v3; // eax
  int result; // eax

  if ( (*(_BYTE *)(this + 21) & 1) != 0 )
  {
    v3 = *(_DWORD *)(this + 16);
    if ( v3 )
    {
      if ( *(_BYTE *)(v3 - *(_DWORD *)(this + 32) + *(_DWORD *)this - 1) == 10 )
        sub_1011C5A0((_DWORD *)this);
    }
  }
  result = sub_1022E680(1);
  if ( (_BYTE)result )
  {
    *(_BYTE *)(*(_DWORD *)(this + 16) - *(_DWORD *)(this + 32) + *(_DWORD *)this) = a2;
    ++*(_DWORD *)(this + 16);
    return sub_1022E6D0(this);
  }
  return result;
}
