bool __thiscall sub_103D8590(void *this)
{
  int v2; // eax

  if ( *(int *)(dword_106B31C8 + 20) <= 1 )
    v2 = sub_10261B20();
  else
    v2 = 0;
  return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 1080))(this, v2) == 3;
}
