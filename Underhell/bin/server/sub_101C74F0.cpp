int __thiscall sub_101C74F0(int this, unsigned __int16 a2)
{
  int result; // eax
  unsigned __int16 v4; // di
  int v5; // ebx
  int v6; // ecx
  int v7; // [esp+8h] [ebp-4h]

  result = 5 * a2;
  v4 = *(_WORD *)(*(_DWORD *)(this + 12) + 10 * a2);
  if ( v4 != 0xFFFF )
  {
    do
    {
      v5 = 12 * v4;
      v6 = v5 + *(_DWORD *)this;
      result = *(unsigned __int16 *)(v6 + 10);
      v7 = result;
      if ( v4 < *(_WORD *)(this + 48) && *(_WORD *)(v6 + 8) != v4 )
      {
        sub_101C63C0((_DWORD *)this, a2, v4);
        result = v7;
      }
      *(_WORD *)(v5 + *(_DWORD *)this + 10) = *(_WORD *)(this + 44);
      --*(_WORD *)(this + 46);
      *(_WORD *)(this + 44) = v4;
      v4 = result;
    }
    while ( (_WORD)result != 0xFFFF );
  }
  return result;
}
