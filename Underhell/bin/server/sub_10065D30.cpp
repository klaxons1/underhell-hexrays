int __thiscall sub_10065D30(int this, __int16 a2)
{
  __int16 v4; // di
  __int16 v5; // ax
  int result; // eax
  int v7; // [esp+14h] [ebp+8h]

  v4 = sub_10065A80((_DWORD *)this, a2);
  *(_WORD *)(*(_DWORD *)(this + 4) + 80 * a2 + 2) = sub_10065A20((_DWORD *)this, v4);
  v7 = 80 * a2;
  if ( sub_10065A20((_DWORD *)this, v4) != -1 )
    *(_WORD *)(*(_DWORD *)(this + 4) + 80 * sub_10065A20((_DWORD *)this, v4) + 4) = a2;
  if ( v4 != -1 )
    *(_WORD *)(*(_DWORD *)(this + 4) + 80 * v4 + 4) = sub_100659B0((_DWORD *)this, a2);
  if ( a2 == *(_WORD *)(this + 16) )
  {
    *(_WORD *)(this + 16) = v4;
  }
  else
  {
    v5 = sub_100659B0((_DWORD *)this, a2);
    if ( sub_10065A20((_DWORD *)this, v5) == a2 )
      *(_WORD *)(*(_DWORD *)(this + 4) + 80 * sub_100659B0((_DWORD *)this, a2)) = v4;
    else
      *(_WORD *)(*(_DWORD *)(this + 4) + 80 * sub_100659B0((_DWORD *)this, a2) + 2) = v4;
  }
  result = 10 * v4;
  *(_WORD *)(*(_DWORD *)(this + 4) + 80 * v4) = a2;
  if ( a2 != -1 )
  {
    result = v7;
    *(_WORD *)(*(_DWORD *)(this + 4) + v7 + 4) = v4;
  }
  return result;
}
