bool __thiscall sub_101BB1C0(int this, int a2)
{
  unsigned __int16 v3; // ax
  bool result; // al
  unsigned int v5; // eax
  _DWORD *v6; // ecx
  unsigned int v7; // eax
  int v8; // ecx
  _DWORD v9[2]; // [esp+4h] [ebp-8h] BYREF

  v9[0] = a2;
  v9[1] = -1;
  v3 = sub_101BA800((_WORD *)(this + 8), (int)v9);
  if ( v3 == 0xFFFF )
    return 0;
  v5 = *(_DWORD *)(*(_DWORD *)(this + 12) + 16 * v3 + 12);
  result = 0;
  if ( v5 != -1 )
  {
    v6 = (_DWORD *)((char *)off_103DCD74 + 16 * (v5 & 0xFFF) + 4);
    v7 = v5 >> 12;
    if ( v6[1] == v7 )
    {
      if ( *v6 )
      {
        v8 = v6[1] == v7 ? *v6 : 0;
        if ( *(_BYTE *)(v8 + 180) )
          return 1;
      }
    }
  }
  return result;
}
