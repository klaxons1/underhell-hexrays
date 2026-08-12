void *__thiscall sub_10037EA0(int this, void *a2)
{
  unsigned int v2; // eax
  int *v3; // edx
  int v4; // esi
  unsigned __int8 v6; // al
  _BYTE v7[12]; // [esp+4h] [ebp-18h] BYREF
  _BYTE v8[12]; // [esp+10h] [ebp-Ch] BYREF

  v2 = *(_DWORD *)(this + 324);
  if ( v2 != -1
    && (v3 = (int *)((char *)off_103DCD74 + 16 * (*(_DWORD *)(this + 324) & 0xFFF) + 4),
        *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 324) & 0xFFF) + 2) == v2 >> 12)
    && (v4 = *v3) != 0 )
  {
    v6 = *(_BYTE *)(this + 318);
    if ( v6
      && (*(unsigned __int8 (__thiscall **)(int, _DWORD, _BYTE *, _BYTE *))(*(_DWORD *)(v4 + 4) + 148))(
           v4 + 4,
           v6,
           v8,
           v7) )
    {
      sub_101F0B70(v7, v8, a2);
      return a2;
    }
    else
    {
      sub_10037F50(v4);
      return (void *)(v4 + 660);
    }
  }
  else
  {
    sub_101EE350(a2);
    return a2;
  }
}
