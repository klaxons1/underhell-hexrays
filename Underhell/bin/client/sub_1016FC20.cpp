int __thiscall sub_1016FC20(int this, int a2)
{
  unsigned __int16 v3; // bx
  int result; // eax
  int v5; // esi
  unsigned __int16 v6; // cx
  unsigned __int16 v7; // [esp+8h] [ebp-4h]

  v3 = *(_WORD *)(this + 12);
  result = 0xFFFF;
  if ( v3 != 0xFFFF )
  {
    do
    {
      v5 = 12 * v3;
      result = v5 + *(_DWORD *)this;
      v6 = *(_WORD *)(result + 10);
      v7 = v6;
      if ( *(_DWORD *)(result + 4) == a2 )
      {
        sub_10063620((int *)this, v3);
        result = *(_DWORD *)this;
        *(_WORD *)(v5 + *(_DWORD *)this + 10) = *(_WORD *)(this + 16);
        v6 = v7;
        *(_WORD *)(this + 16) = v3;
      }
      v3 = v6;
    }
    while ( v6 != 0xFFFF );
  }
  return result;
}
