__int16 __thiscall sub_1009C7B0(int this, __int16 a2)
{
  __int16 v4; // di
  int v5; // eax
  __int16 v6; // ax
  int v7; // edx
  int v9; // [esp+14h] [ebp+8h]

  v4 = sub_1009B3C0((_DWORD *)this, a2);
  *(_WORD *)(*(_DWORD *)(this + 4) + 16 * a2 + 2) = sub_1009B360((_DWORD *)this, v4);
  v9 = 16 * a2;
  LOWORD(v5) = sub_1009B360((_DWORD *)this, v4);
  if ( (_WORD)v5 != 0xFFFF )
  {
    v5 = 2 * sub_1009B360((_DWORD *)this, v4);
    *(_WORD *)(*(_DWORD *)(this + 4) + 8 * v5 + 4) = a2;
  }
  if ( v4 != -1 )
  {
    LOWORD(v5) = sub_1009B300((_DWORD *)this, a2);
    *(_WORD *)(*(_DWORD *)(this + 4) + 16 * v4 + 4) = v5;
  }
  if ( a2 == *(_WORD *)(this + 16) )
  {
    *(_WORD *)(this + 16) = v4;
  }
  else
  {
    v6 = sub_1009B300((_DWORD *)this, a2);
    if ( sub_1009B360((_DWORD *)this, v6) == a2 )
    {
      v5 = 2 * sub_1009B300((_DWORD *)this, a2);
      *(_WORD *)(*(_DWORD *)(this + 4) + 8 * v5) = v4;
    }
    else
    {
      v7 = sub_1009B300((_DWORD *)this, a2);
      v5 = *(_DWORD *)(this + 4);
      *(_WORD *)(v5 + 16 * v7 + 2) = v4;
    }
  }
  *(_WORD *)(*(_DWORD *)(this + 4) + 16 * v4) = a2;
  if ( a2 != -1 )
  {
    v5 = *(_DWORD *)(this + 4);
    *(_WORD *)(v5 + v9 + 4) = v4;
  }
  return v5;
}
