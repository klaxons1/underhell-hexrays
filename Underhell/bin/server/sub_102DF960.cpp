char __thiscall sub_102DF960(int this)
{
  _BYTE *v2; // esi
  int v4; // eax

  v2 = (_BYTE *)(this + 5105);
  if ( *(_BYTE *)(this + 5105) )
    return 1;
  if ( *v2 != 1 )
  {
    (**(void (__thiscall ***)(int, _BYTE *))(this + 5080))(this + 5080, v2);
    *v2 = 1;
  }
  v4 = sub_100CF460((_DWORD *)this);
  if ( v4 )
    return (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 1408))(v4);
  else
    return 0;
}
