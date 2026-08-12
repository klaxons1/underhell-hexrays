_BYTE *__thiscall sub_104320B0(int this, signed int a2, int a3)
{
  _BYTE *result; // eax
  int v5; // ecx
  int v6; // ecx

  if ( a2 >= 0 )
  {
    result = (_BYTE *)sub_101532C0((_DWORD *)this, a2, a3 - 1, 1);
    v6 = *(_DWORD *)(this + 12);
    if ( v6 + 1 > *(_DWORD *)(this + 8) )
      *(_BYTE *)(this + 16) = 1;
    if ( !*(_BYTE *)(this + 16) )
    {
      result = (_BYTE *)(*(_DWORD *)this + (v6 >> 3));
      *result &= ~(1 << (v6 & 7));
      ++*(_DWORD *)(this + 12);
    }
  }
  else
  {
    result = (_BYTE *)sub_101532C0((_DWORD *)this, a2 + 0x80000000, a3 - 1, 0);
    v5 = *(_DWORD *)(this + 12);
    if ( v5 + 1 > *(_DWORD *)(this + 8) )
      *(_BYTE *)(this + 16) = 1;
    if ( !*(_BYTE *)(this + 16) )
    {
      result = (_BYTE *)(*(_DWORD *)this + (v5 >> 3));
      *result |= 1 << (v5 & 7);
      ++*(_DWORD *)(this + 12);
    }
  }
  return result;
}
