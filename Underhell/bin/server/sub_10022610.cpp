bool __thiscall sub_10022610(void *this, int a2)
{
  int v2; // eax

  v2 = a2;
  if ( !a2 )
  {
    if ( *(_DWORD *)(dword_106B31C8 + 20) != 1 )
      return 0;
    v2 = sub_10261B20();
    if ( !v2 )
      return 1;
  }
  return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 1080))(this, v2) == 3;
}
