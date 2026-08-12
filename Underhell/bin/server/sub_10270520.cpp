int __stdcall sub_10270520(int a1)
{
  int result; // eax

  if ( *(_BYTE *)(a1 + 4) != 1 )
  {
    (**(void (__thiscall ***)(int, int))a1)(a1, a1 + 4);
    *(_BYTE *)(a1 + 4) = 1;
  }
  result = *(_DWORD *)(a1 + 8);
  if ( result != COERCE_INT(10.0) )
  {
    result = (**(int (__thiscall ***)(int, int))a1)(a1, a1 + 8);
    *(float *)(a1 + 8) = 10.0;
  }
  if ( *(_DWORD *)(a1 + 12) != COERCE_INT(45.0) )
  {
    result = (**(int (__thiscall ***)(int, int))a1)(a1, a1 + 12);
    *(float *)(a1 + 12) = 45.0;
  }
  if ( *(_DWORD *)(a1 + 16) != COERCE_INT(5.0) )
  {
    result = (**(int (__thiscall ***)(int, int))a1)(a1, a1 + 16);
    *(float *)(a1 + 16) = 5.0;
  }
  if ( *(_DWORD *)(a1 + 20) != COERCE_INT(45.0) )
  {
    result = (**(int (__thiscall ***)(int, int))a1)(a1, a1 + 20);
    *(float *)(a1 + 20) = 45.0;
  }
  if ( *(_DWORD *)(a1 + 24) != COERCE_INT(90.0) )
  {
    result = (**(int (__thiscall ***)(int, int))a1)(a1, a1 + 24);
    *(float *)(a1 + 24) = 90.0;
  }
  if ( *(_DWORD *)(a1 + 28) != COERCE_INT(-60.0) )
  {
    result = (**(int (__thiscall ***)(int, int))a1)(a1, a1 + 28);
    *(float *)(a1 + 28) = -60.0;
  }
  if ( *(_DWORD *)(a1 + 32) != COERCE_INT(60.0) )
  {
    result = (**(int (__thiscall ***)(int, int))a1)(a1, a1 + 32);
    *(float *)(a1 + 32) = 60.0;
  }
  if ( *(_DWORD *)(a1 + 36) != COERCE_INT(-90.0) )
  {
    result = (**(int (__thiscall ***)(int, int))a1)(a1, a1 + 36);
    *(float *)(a1 + 36) = -90.0;
  }
  if ( *(_DWORD *)(a1 + 40) != COERCE_INT(38.0) )
  {
    result = (**(int (__thiscall ***)(int, int))a1)(a1, a1 + 40);
    *(float *)(a1 + 40) = 38.0;
  }
  return result;
}
