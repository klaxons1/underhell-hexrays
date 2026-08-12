int __thiscall sub_100EEC20(int this, unsigned __int16 a2)
{
  unsigned __int16 v4; // ax
  int v5; // edi
  unsigned __int16 v6; // ax
  int result; // eax
  int v8; // [esp+14h] [ebp+8h]

  v4 = sub_100EE9B0((_DWORD *)this, a2);
  v5 = v4;
  *(_WORD *)(*(_DWORD *)(this + 4) + 20 * a2 + 2) = sub_100EE950((_DWORD *)this, v4);
  v8 = 20 * a2;
  if ( sub_100EE950((_DWORD *)this, v5) != -1 )
    *(_WORD *)(*(_DWORD *)(this + 4) + 20 * (unsigned __int16)sub_100EE950((_DWORD *)this, v5) + 4) = a2;
  if ( (_WORD)v5 != 0xFFFF )
    *(_WORD *)(*(_DWORD *)(this + 4) + 20 * v5 + 4) = sub_100ED3E0((_DWORD *)this, a2);
  if ( a2 == *(_WORD *)(this + 16) )
  {
    *(_WORD *)(this + 16) = v5;
  }
  else
  {
    v6 = sub_100ED3E0((_DWORD *)this, a2);
    if ( sub_100EE950((_DWORD *)this, v6) == a2 )
      *(_WORD *)(*(_DWORD *)(this + 4) + 20 * (unsigned __int16)sub_100ED3E0((_DWORD *)this, a2)) = v5;
    else
      *(_WORD *)(*(_DWORD *)(this + 4) + 20 * (unsigned __int16)sub_100ED3E0((_DWORD *)this, a2) + 2) = v5;
  }
  result = 5 * v5;
  *(_WORD *)(*(_DWORD *)(this + 4) + 20 * v5) = a2;
  if ( a2 != 0xFFFF )
  {
    result = *(_DWORD *)(this + 4);
    *(_WORD *)(result + v8 + 4) = v5;
  }
  return result;
}
