void __thiscall sub_10270090(int this, int a2)
{
  float *v3; // edi
  float *v4; // ebx
  float *v5; // edi
  int v6; // ecx
  float *v7; // esi
  float *v8; // edi

  if ( *(_DWORD *)(a2 + 24) == 6 && *(_BYTE *)(a2 + 8) )
  {
    if ( 0.0 == *(float *)(this + 1652) )
    {
      *(_BYTE *)(this + 1632) = *(_BYTE *)(this + 1588);
      *(_DWORD *)(this + 1636) = *(_DWORD *)(this + 1592);
      *(_DWORD *)(this + 1640) = *(_DWORD *)(this + 1596);
      *(_DWORD *)(this + 1644) = *(_DWORD *)(this + 1600);
      *(_DWORD *)(this + 1648) = *(_DWORD *)(this + 1604);
      *(_DWORD *)(this + 1652) = *(_DWORD *)(this + 1608);
      *(_DWORD *)(this + 1656) = *(_DWORD *)(this + 1612);
      *(_DWORD *)(this + 1660) = *(_DWORD *)(this + 1616);
      *(_DWORD *)(this + 1664) = *(_DWORD *)(this + 1620);
      v3 = (float *)(this + 1624);
      *(_DWORD *)(this + 1668) = *(_DWORD *)(this + 1624);
      if ( *(_DWORD *)(this + 1624) != COERCE_INT(0.0) )
      {
        (**(void (__thiscall ***)(int, int))(this + 1584))(this + 1584, this + 1624);
        *v3 = 0.0;
      }
      v4 = (float *)(this + 1620);
      if ( *(_DWORD *)(this + 1620) != *(_DWORD *)v3 )
      {
        (**(void (__thiscall ***)(int, int))(this + 1584))(this + 1584, this + 1620);
        *v4 = *v3;
      }
      v5 = (float *)(this + 1612);
      if ( *(_DWORD *)(this + 1612) != *(_DWORD *)v4 )
      {
        (**(void (__thiscall ***)(int, int))(this + 1584))(this + 1584, this + 1612);
        *v5 = *v4;
      }
      v6 = *(_DWORD *)(this + 1616);
      v7 = (float *)(this + 1616);
      if ( v6 != *(_DWORD *)v5 )
      {
        (**((void (__thiscall ***)(int, float *))v7 - 8))((int)(v7 - 8), v7);
        *v7 = *v5;
      }
    }
  }
  else
  {
    v8 = (float *)(this + 1652);
    if ( 0.0 != *(float *)(this + 1652) )
    {
      if ( *(_DWORD *)v8 != COERCE_INT(0.0) )
      {
        (**(void (__thiscall ***)(int, int))(this + 1628))(this + 1628, this + 1652);
        *v8 = 0.0;
      }
      if ( *(_DWORD *)(this + 1616) != *(_DWORD *)(this + 1660) )
      {
        (**(void (__thiscall ***)(int, int))(this + 1584))(this + 1584, this + 1616);
        *(float *)(this + 1616) = *(float *)(this + 1660);
      }
      if ( *(_DWORD *)(this + 1612) != *(_DWORD *)(this + 1656) )
      {
        (**(void (__thiscall ***)(int, int))(this + 1584))(this + 1584, this + 1612);
        *(float *)(this + 1612) = *(float *)(this + 1656);
      }
      if ( *(_DWORD *)(this + 1620) != *(_DWORD *)(this + 1664) )
      {
        (**(void (__thiscall ***)(int, int))(this + 1584))(this + 1584, this + 1620);
        *(float *)(this + 1620) = *(float *)(this + 1664);
      }
      if ( *(_DWORD *)(this + 1624) != *(_DWORD *)(this + 1668) )
      {
        (**(void (__thiscall ***)(int, int))(this + 1584))(this + 1584, this + 1624);
        *(float *)(this + 1624) = *(float *)(this + 1668);
      }
    }
  }
}
