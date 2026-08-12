char __thiscall sub_102DF910(int this)
{
  _BYTE *v1; // esi
  int v2; // eax

  v1 = (_BYTE *)(this + 5106);
  if ( *(_BYTE *)(this + 5106) )
    return 1;
  v2 = sub_100CF460((_DWORD *)this);
  if ( v2 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 1412))(v2) )
  {
    if ( *v1 != 1 )
    {
      (**(void (__thiscall ***)(int, _BYTE *))(v1 - 26))((int)(v1 - 26), v1);
      *v1 = 1;
    }
    return 1;
  }
  return 0;
}
