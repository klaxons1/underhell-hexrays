int __thiscall sub_1016F0E0(int this, unsigned __int16 a2)
{
  int result; // eax
  unsigned __int16 i; // ax
  unsigned __int16 v5; // di
  int *v6; // eax
  unsigned __int16 v7; // bx
  unsigned __int16 v8; // ax
  int v9; // ebx
  unsigned __int16 v10; // ax
  int v11; // [esp+8h] [ebp-8h]
  __int16 v12; // [esp+Ch] [ebp-4h]

  result = 0xFFFF;
  if ( a2 != 0xFFFF )
  {
    if ( sub_1016CB30((_DWORD *)this, a2) == -1 || sub_1016CB90((_DWORD *)this, a2) == -1 )
    {
      v5 = a2;
    }
    else
    {
      for ( i = sub_1016CB90((_DWORD *)this, a2); ; i = sub_1016CB30((_DWORD *)this, v5) )
      {
        v5 = i;
        if ( (dword_106B5978 & 1) == 0 )
        {
          dword_106B5978 |= 1u;
          dword_106B5970 = -1;
          dword_106B5974 = 0x1FFFF;
        }
        v6 = i == 0xFFFF ? &dword_106B5970 : (int *)(*(_DWORD *)(this + 4) + 20 * i);
        if ( *(_WORD *)v6 == 0xFFFF )
          break;
      }
    }
    if ( sub_1016CB30((_DWORD *)this, v5) == -1 )
    {
      v12 = sub_1016CB90((_DWORD *)this, v5);
      v7 = v12;
    }
    else
    {
      v7 = sub_1016CB30((_DWORD *)this, v5);
      v12 = v7;
    }
    if ( v7 != 0xFFFF )
      *(_WORD *)(*(_DWORD *)(this + 4) + 20 * v7 + 4) = sub_1016CAC0((_DWORD *)this, v5);
    if ( v5 == *(_WORD *)(this + 16) )
    {
      *(_WORD *)(this + 16) = v7;
    }
    else
    {
      v8 = sub_1016CAC0((_DWORD *)this, v5);
      if ( sub_1016CB30((_DWORD *)this, v8) == v5 )
        *(_WORD *)(*(_DWORD *)(this + 4) + 20 * (unsigned __int16)sub_1016CAC0((_DWORD *)this, v5)) = v7;
      else
        *(_WORD *)(*(_DWORD *)(this + 4) + 20 * (unsigned __int16)sub_1016CAC0((_DWORD *)this, v5) + 2) = v7;
    }
    v11 = sub_1016C7D0((_DWORD *)this, v5);
    if ( v5 != a2 )
    {
      v9 = 20 * v5;
      *(_WORD *)(v9 + *(_DWORD *)(this + 4) + 4) = sub_1016CAC0((_DWORD *)this, a2);
      *(_WORD *)(v9 + *(_DWORD *)(this + 4) + 2) = sub_1016CB90((_DWORD *)this, a2);
      *(_WORD *)(v9 + *(_DWORD *)(this + 4)) = sub_1016CB30((_DWORD *)this, a2);
      if ( a2 == *(_WORD *)(this + 16) )
      {
        *(_WORD *)(this + 16) = v5;
      }
      else
      {
        v10 = sub_1016CAC0((_DWORD *)this, a2);
        if ( sub_1016CB30((_DWORD *)this, v10) == a2 )
          *(_WORD *)(*(_DWORD *)(this + 4) + 20 * (unsigned __int16)sub_1016CAC0((_DWORD *)this, a2)) = v5;
        else
          *(_WORD *)(*(_DWORD *)(this + 4) + 20 * (unsigned __int16)sub_1016CAC0((_DWORD *)this, a2) + 2) = v5;
      }
      if ( sub_1016CB30((_DWORD *)this, v5) != -1 )
        *(_WORD *)(*(_DWORD *)(this + 4) + 20 * (unsigned __int16)sub_1016CB30((_DWORD *)this, v5) + 4) = v5;
      if ( sub_1016CB90((_DWORD *)this, v5) != -1 )
        *(_WORD *)(*(_DWORD *)(this + 4) + 20 * (unsigned __int16)sub_1016CB90((_DWORD *)this, v5) + 4) = v5;
      *(_WORD *)(v9 + *(_DWORD *)(this + 4) + 6) = sub_1016C7D0((_DWORD *)this, a2);
      v7 = v12;
    }
    result = 0xFFFF;
    if ( v7 != 0xFFFF && v11 == 1 )
      return sub_1016E270(this, v7);
  }
  return result;
}
