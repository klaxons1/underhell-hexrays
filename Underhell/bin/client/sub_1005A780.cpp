int __thiscall sub_1005A780(int this)
{
  int v2; // ecx
  int result; // eax
  int v4; // ecx
  int v5; // esi

  v2 = *(unsigned __int16 *)(this + 44);
  if ( (_WORD)v2 == 0xFFFF )
  {
    if ( *(unsigned __int16 *)(this + 48) == *(_DWORD *)(this + 4) )
    {
      sub_10059C80((_DWORD *)this, 1);
      *(_DWORD *)(this + 52) = *(_DWORD *)this;
    }
    result = *(unsigned __int16 *)(this + 48);
    *(_WORD *)(this + 48) = result + 1;
  }
  else
  {
    result = v2;
    *(_WORD *)(this + 44) = *(_WORD *)(*(_DWORD *)this + 28 * v2 + 26);
  }
  v4 = 28 * (unsigned __int16)result;
  *(_WORD *)(v4 + *(_DWORD *)this + 24) = result;
  *(_WORD *)(v4 + *(_DWORD *)this + 26) = result;
  ++*(_WORD *)(this + 46);
  v5 = v4 + *(_DWORD *)this;
  if ( v5 )
  {
    *(_WORD *)(v5 + 14) = 0;
    *(_DWORD *)(v5 + 20) = 0;
    *(_WORD *)(v5 + 12) = -1;
    *(_BYTE *)(v5 + 16) = 0;
  }
  return result;
}
