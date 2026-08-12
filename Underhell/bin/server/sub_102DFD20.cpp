int __thiscall sub_102DFD20(int this, int a2)
{
  int result; // eax
  int v4; // eax
  int v5; // eax

  result = sub_100CF460((_DWORD *)this);
  if ( result )
  {
    v4 = sub_100CF460((_DWORD *)this);
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 1400))(v4);
    if ( (_BYTE)result )
    {
      if ( *(_BYTE *)(this + 2137) )
        sub_101ECF40(this);
      *(_BYTE *)(this + 3368) = 1;
      v5 = sub_100CF460((_DWORD *)this);
      if ( v5 )
        *(_WORD *)(v5 + 1126) = 0;
      if ( *(_BYTE *)(this + 5105) )
      {
        (**(void (__thiscall ***)(int, int))(this + 5080))(this + 5080, this + 5105);
        *(_BYTE *)(this + 5105) = 0;
      }
      if ( *(_BYTE *)(this + 5106) )
      {
        (**(void (__thiscall ***)(int, int))(this + 5080))(this + 5080, this + 5106);
        *(_BYTE *)(this + 5106) = 0;
      }
      return (*(int (__thiscall **)(int))(*(_DWORD *)this + 1680))(this);
    }
  }
  return result;
}
