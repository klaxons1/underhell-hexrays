int __thiscall sub_10161830(int this, unsigned __int16 a2)
{
  unsigned __int16 v4; // ax
  int v5; // edi
  unsigned __int16 v6; // ax
  int result; // eax
  int v8; // [esp+14h] [ebp+8h]

  v4 = sub_1015FF60((_DWORD *)this, a2);
  v5 = v4;
  *(_WORD *)(*(_DWORD *)(this + 4) + 52 * a2 + 2) = sub_1015FF00((_DWORD *)this, v4);
  v8 = 52 * a2;
  if ( sub_1015FF00((_DWORD *)this, v5) != -1 )
    *(_WORD *)(52 * (unsigned __int16)sub_1015FF00((_DWORD *)this, v5) + *(_DWORD *)(this + 4) + 4) = a2;
  if ( (_WORD)v5 != 0xFFFF )
    *(_WORD *)(52 * v5 + *(_DWORD *)(this + 4) + 4) = sub_1015FEA0((_DWORD *)this, a2);
  if ( a2 == *(_WORD *)(this + 16) )
  {
    *(_WORD *)(this + 16) = v5;
  }
  else
  {
    v6 = sub_1015FEA0((_DWORD *)this, a2);
    if ( sub_1015FF00((_DWORD *)this, v6) == a2 )
      *(_WORD *)(52 * (unsigned __int16)sub_1015FEA0((_DWORD *)this, a2) + *(_DWORD *)(this + 4)) = v5;
    else
      *(_WORD *)(52 * (unsigned __int16)sub_1015FEA0((_DWORD *)this, a2) + *(_DWORD *)(this + 4) + 2) = v5;
  }
  result = 0xFFFF;
  *(_WORD *)(52 * v5 + *(_DWORD *)(this + 4)) = a2;
  if ( a2 != 0xFFFF )
    *(_WORD *)(*(_DWORD *)(this + 4) + v8 + 4) = v5;
  return result;
}
