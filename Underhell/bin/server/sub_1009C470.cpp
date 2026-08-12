int __thiscall sub_1009C470(int this, __int16 a2)
{
  __int16 v4; // di
  __int16 *v5; // eax
  int result; // eax
  int v7; // [esp+14h] [ebp+8h]

  v4 = *sub_1009A890((_DWORD *)this, a2);
  *(_WORD *)(56 * a2 + *(_DWORD *)(this + 4)) = sub_1009A890((_DWORD *)this, v4)[1];
  v7 = 56 * a2;
  if ( sub_1009A890((_DWORD *)this, v4)[1] != -1 )
    *(_WORD *)(*(_DWORD *)(this + 4) + 56 * sub_1009A890((_DWORD *)this, v4)[1] + 4) = a2;
  if ( v4 != -1 )
    *(_WORD *)(*(_DWORD *)(this + 4) + 56 * v4 + 4) = sub_1009A890((_DWORD *)this, a2)[2];
  if ( a2 == *(_WORD *)(this + 16) )
  {
    *(_WORD *)(this + 16) = v4;
  }
  else
  {
    v5 = sub_1009A890((_DWORD *)this, a2);
    if ( sub_1009A890((_DWORD *)this, v5[2])[1] == a2 )
      *(_WORD *)(*(_DWORD *)(this + 4) + 56 * sub_1009A890((_DWORD *)this, a2)[2] + 2) = v4;
    else
      *(_WORD *)(*(_DWORD *)(this + 4) + 56 * sub_1009A890((_DWORD *)this, a2)[2]) = v4;
  }
  result = v4;
  *(_WORD *)(*(_DWORD *)(this + 4) + 56 * v4 + 2) = a2;
  if ( a2 != -1 )
  {
    result = *(_DWORD *)(this + 4);
    *(_WORD *)(result + v7 + 4) = v4;
  }
  return result;
}
