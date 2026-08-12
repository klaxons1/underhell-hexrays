char __thiscall sub_100C78E0(void *this, int a2)
{
  int v5; // ebx
  int i; // esi
  int v7; // eax
  int v8; // [esp+8h] [ebp-4h]
  int v9; // [esp+14h] [ebp+8h]

  v8 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 1328))(a2);
  v9 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 1332))(a2);
  if ( v9 < 1 )
    return 0;
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 848))(a2) )
    return 1;
  v5 = 0;
  if ( v9 <= 0 )
    return 1;
  for ( i = v8 + 4; ; i += 12 )
  {
    if ( *(_BYTE *)(i + 4) )
    {
      v7 = (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 932))(this, *(_DWORD *)i);
      if ( sub_100BDCE0((int)this, v7) == -1 )
        break;
    }
    if ( ++v5 >= v9 )
      return 1;
  }
  return 0;
}
