void __thiscall sub_10067940(int this, __int16 a2)
{
  __int16 i; // ax
  __int16 v4; // di
  __int16 *v5; // eax
  __int16 v6; // bx
  __int16 v7; // ax
  __int16 v8; // ax
  int v9; // [esp+8h] [ebp-8h]
  __int16 v10; // [esp+Ch] [ebp-4h]

  if ( a2 != -1 )
  {
    if ( sub_10065A20((_DWORD *)this, a2) == -1 || sub_10065A80((_DWORD *)this, a2) == -1 )
    {
      v4 = a2;
    }
    else
    {
      for ( i = sub_10065A80((_DWORD *)this, a2); ; i = sub_10065A20((_DWORD *)this, v4) )
      {
        v4 = i;
        if ( (dword_10692DD0 & 1) == 0 )
        {
          dword_10692DD0 |= 1u;
          word_10692DC8 = -1;
          word_10692DCA = -1;
          word_10692DCC = -1;
          word_10692DCE = 1;
        }
        v5 = i == -1 ? &word_10692DC8 : (__int16 *)(*(_DWORD *)(this + 4) + 80 * i);
        if ( *v5 == -1 )
          break;
      }
    }
    if ( sub_10065A20((_DWORD *)this, v4) == -1 )
    {
      v10 = sub_10065A80((_DWORD *)this, v4);
      v6 = v10;
    }
    else
    {
      v6 = sub_10065A20((_DWORD *)this, v4);
      v10 = v6;
    }
    if ( v6 != -1 )
      *(_WORD *)(*(_DWORD *)(this + 4) + 80 * v6 + 4) = sub_100659B0((_DWORD *)this, v4);
    if ( v4 == *(_WORD *)(this + 16) )
    {
      *(_WORD *)(this + 16) = v6;
    }
    else
    {
      v7 = sub_100659B0((_DWORD *)this, v4);
      if ( sub_10065A20((_DWORD *)this, v7) == v4 )
        *(_WORD *)(*(_DWORD *)(this + 4) + 80 * sub_100659B0((_DWORD *)this, v4)) = v6;
      else
        *(_WORD *)(*(_DWORD *)(this + 4) + 80 * sub_100659B0((_DWORD *)this, v4) + 2) = v6;
    }
    v9 = sub_10065620((_DWORD *)this, v4);
    if ( v4 != a2 )
    {
      *(_WORD *)(*(_DWORD *)(this + 4) + 80 * v4 + 4) = sub_100659B0((_DWORD *)this, a2);
      *(_WORD *)(*(_DWORD *)(this + 4) + 80 * v4 + 2) = sub_10065A80((_DWORD *)this, a2);
      *(_WORD *)(*(_DWORD *)(this + 4) + 80 * v4) = sub_10065A20((_DWORD *)this, a2);
      if ( a2 == *(_WORD *)(this + 16) )
      {
        *(_WORD *)(this + 16) = v4;
      }
      else
      {
        v8 = sub_100659B0((_DWORD *)this, a2);
        if ( sub_10065A20((_DWORD *)this, v8) == a2 )
          *(_WORD *)(*(_DWORD *)(this + 4) + 80 * sub_100659B0((_DWORD *)this, a2)) = v4;
        else
          *(_WORD *)(*(_DWORD *)(this + 4) + 80 * sub_100659B0((_DWORD *)this, a2) + 2) = v4;
      }
      if ( sub_10065A20((_DWORD *)this, v4) != -1 )
        *(_WORD *)(*(_DWORD *)(this + 4) + 80 * sub_10065A20((_DWORD *)this, v4) + 4) = v4;
      if ( sub_10065A80((_DWORD *)this, v4) != -1 )
        *(_WORD *)(*(_DWORD *)(this + 4) + 80 * sub_10065A80((_DWORD *)this, v4) + 4) = v4;
      *(_WORD *)(*(_DWORD *)(this + 4) + 80 * v4 + 6) = sub_10065620((_DWORD *)this, a2);
      v6 = v10;
    }
    if ( v6 != -1 && v9 == 1 )
      sub_10066A90(this, v6);
  }
}
