char __thiscall sub_102237E0(_DWORD *this, int a2)
{
  int v4; // edi
  int v5; // eax

  if ( !this[244] )
    return 0;
  v4 = 0;
  if ( ((int (*)(void))sub_1041CB40)() <= 0 )
    return 0;
  while ( 1 )
  {
    v5 = (*(int (__thiscall **)(_DWORD *, int))(*this + 896))(this, v4);
    if ( v5 )
    {
      if ( v5 == a2 )
        break;
    }
    if ( ++v4 >= sub_1041CB40(this[244]) )
      return 0;
  }
  return 1;
}
