int __thiscall sub_10089A50(int this, unsigned __int16 a2)
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
    if ( sub_10086390((_DWORD *)this, a2) == -1 || sub_100863F0((_DWORD *)this, a2) == -1 )
    {
      v5 = a2;
    }
    else
    {
      for ( i = sub_100863F0((_DWORD *)this, a2); ; i = sub_10086390((_DWORD *)this, v5) )
      {
        v5 = i;
        if ( (dword_1042BFEC & 1) == 0 )
        {
          dword_1042BFEC |= 1u;
          dword_1042BFE4 = -1;
          dword_1042BFE8 = 0x1FFFF;
        }
        v6 = i == 0xFFFF ? &dword_1042BFE4 : (int *)(*(_DWORD *)(this + 4) + 10 * i);
        if ( *(_WORD *)v6 == 0xFFFF )
          break;
      }
    }
    if ( sub_10086390((_DWORD *)this, v5) == -1 )
    {
      v12 = sub_100863F0((_DWORD *)this, v5);
      v7 = v12;
    }
    else
    {
      v7 = sub_10086390((_DWORD *)this, v5);
      v12 = v7;
    }
    if ( v7 != 0xFFFF )
      *(_WORD *)(*(_DWORD *)(this + 4) + 10 * v7 + 4) = sub_10086320((_DWORD *)this, v5);
    if ( v5 == *(_WORD *)(this + 16) )
    {
      *(_WORD *)(this + 16) = v7;
    }
    else
    {
      v8 = sub_10086320((_DWORD *)this, v5);
      if ( sub_10086390((_DWORD *)this, v8) == v5 )
        *(_WORD *)(*(_DWORD *)(this + 4) + 10 * (unsigned __int16)sub_10086320((_DWORD *)this, v5)) = v7;
      else
        *(_WORD *)(*(_DWORD *)(this + 4) + 10 * (unsigned __int16)sub_10086320((_DWORD *)this, v5) + 2) = v7;
    }
    v11 = sub_10084B00((_DWORD *)this, v5);
    if ( v5 != a2 )
    {
      v9 = 10 * v5;
      *(_WORD *)(v9 + *(_DWORD *)(this + 4) + 4) = sub_10086320((_DWORD *)this, a2);
      *(_WORD *)(v9 + *(_DWORD *)(this + 4) + 2) = sub_100863F0((_DWORD *)this, a2);
      *(_WORD *)(v9 + *(_DWORD *)(this + 4)) = sub_10086390((_DWORD *)this, a2);
      if ( a2 == *(_WORD *)(this + 16) )
      {
        *(_WORD *)(this + 16) = v5;
      }
      else
      {
        v10 = sub_10086320((_DWORD *)this, a2);
        if ( sub_10086390((_DWORD *)this, v10) == a2 )
          *(_WORD *)(*(_DWORD *)(this + 4) + 10 * (unsigned __int16)sub_10086320((_DWORD *)this, a2)) = v5;
        else
          *(_WORD *)(*(_DWORD *)(this + 4) + 10 * (unsigned __int16)sub_10086320((_DWORD *)this, a2) + 2) = v5;
      }
      if ( sub_10086390((_DWORD *)this, v5) != -1 )
        *(_WORD *)(*(_DWORD *)(this + 4) + 10 * (unsigned __int16)sub_10086390((_DWORD *)this, v5) + 4) = v5;
      if ( sub_100863F0((_DWORD *)this, v5) != -1 )
        *(_WORD *)(*(_DWORD *)(this + 4) + 10 * (unsigned __int16)sub_100863F0((_DWORD *)this, v5) + 4) = v5;
      *(_WORD *)(v9 + *(_DWORD *)(this + 4) + 6) = sub_10084B00((_DWORD *)this, a2);
      v7 = v12;
    }
    result = 0xFFFF;
    if ( v7 != 0xFFFF && v11 == 1 )
      return sub_100882F0(this, v7);
  }
  return result;
}
