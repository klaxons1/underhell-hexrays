char __thiscall sub_103BCD90(void *this, unsigned int a2, int a3, int *a4)
{
  int v6; // ecx
  int v7; // [esp+4h] [ebp-4h] BYREF

  v7 = 0;
  if ( sub_100CEF80((unsigned int)this, a2, a2, a3, &v7) )
    return 1;
  v6 = v7;
  if ( v7 )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 288))(v7)
      && (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 1080))(this, v7) == 1 )
    {
      return 1;
    }
    v6 = v7;
  }
  if ( a4 )
    *a4 = v6;
  return 0;
}
