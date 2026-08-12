bool __thiscall sub_100B6820(int this, int a2, int a3)
{
  bool result; // al
  int v5; // eax
  int v6; // ecx
  int v7; // edi
  _DWORD v8[2]; // [esp+Ch] [ebp-8h] BYREF

  v8[0] = a3;
  if ( sub_100B4A40((_WORD *)(this + 108), (int)v8) == -1 )
    return 0;
  v8[0] = a3;
  v5 = *(_DWORD *)(*(_DWORD *)(this + 112) + 16 * (unsigned __int16)sub_100B4A40((_WORD *)(this + 108), (int)v8) + 12);
  if ( !v5 )
    return 0;
  if ( *(_BYTE *)v5 )
    return 1;
  if ( !*(_DWORD *)(v5 + 16) )
    return 0;
  if ( !a2 )
    return 1;
  v6 = **(_DWORD **)(v5 + 4);
  result = 0;
  if ( v6 != a2 )
  {
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 52))(v6);
    if ( v7 > (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 52))(a2) )
      return 1;
  }
  return result;
}
