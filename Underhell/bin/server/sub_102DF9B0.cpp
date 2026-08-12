char __thiscall sub_102DF9B0(int this)
{
  int v2; // ebx
  _BYTE *v4; // esi
  int v5; // eax
  char v6; // [esp+Bh] [ebp-1h]

  v2 = sub_100CF460((_DWORD *)this);
  if ( !v2 )
    return 0;
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 1432))(v2);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 1428))(v2) )
  {
    if ( *(_BYTE *)(this + 3368) || *(_BYTE *)(this + 5216) )
      return 0;
  }
  v4 = (_BYTE *)(this + 5105);
  if ( *(_BYTE *)(this + 5105) )
    goto LABEL_10;
  if ( !*(_BYTE *)(this + 5106) )
    return 1;
  if ( *v4 )
  {
LABEL_10:
    (**(void (__thiscall ***)(int, int))(this + 5080))(this + 5080, this + 5105);
    *v4 = 0;
  }
  if ( *(_BYTE *)(this + 5106) )
  {
    (**(void (__thiscall ***)(int, int))(this + 5080))(this + 5080, this + 5106);
    *(_BYTE *)(this + 5106) = 0;
  }
  v5 = *(_DWORD *)v2;
  if ( !v6 )
    return (*(int (__thiscall **)(int))(v5 + 1404))(v2);
  if ( *(_BYTE *)(this + 2137) )
    return (*(int (__fastcall **)(int))(v5 + 1420))(v2);
  return (*(int (__fastcall **)(int))(v5 + 1416))(v2);
}
