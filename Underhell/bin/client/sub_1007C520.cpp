int __thiscall sub_1007C520(int this, unsigned __int16 a2)
{
  int result; // eax
  __int16 v4; // ax
  int v5; // ecx
  unsigned __int16 v6; // di
  int *v7; // eax
  unsigned __int16 v8; // bx
  unsigned __int16 v9; // ax
  unsigned __int16 v10; // ax
  int v11; // [esp+8h] [ebp-8h]
  __int16 v12; // [esp+Ch] [ebp-4h]

  result = 0xFFFF;
  if ( a2 != 0xFFFF )
  {
    if ( sub_1007AA60((_DWORD *)this, a2) == -1 || sub_1007AAC0((_DWORD *)this, a2) == -1 )
    {
      v6 = a2;
    }
    else
    {
      v4 = sub_1007AAC0((_DWORD *)this, a2);
      v5 = dword_104138F4;
      v6 = v4;
      while ( 1 )
      {
        if ( (v5 & 1) == 0 )
        {
          v5 |= 1u;
          dword_104138F4 = v5;
          dword_104138EC = -1;
          dword_104138F0 = 0x1FFFF;
        }
        v7 = v6 == 0xFFFF ? &dword_104138EC : (int *)(*(_DWORD *)(this + 4) + 16 * v6);
        if ( *(_WORD *)v7 == 0xFFFF )
          break;
        if ( (v5 & 1) == 0 )
        {
          v5 |= 1u;
          dword_104138F4 = v5;
          dword_104138EC = -1;
          dword_104138F0 = 0x1FFFF;
        }
        if ( v6 == 0xFFFF )
          v6 = dword_104138EC;
        else
          v6 = *(_WORD *)(*(_DWORD *)(this + 4) + 16 * v6);
      }
    }
    if ( sub_1007AA60((_DWORD *)this, v6) == -1 )
    {
      v12 = sub_1007AAC0((_DWORD *)this, v6);
      v8 = v12;
    }
    else
    {
      v8 = sub_1007AA60((_DWORD *)this, v6);
      v12 = v8;
    }
    if ( v8 != 0xFFFF )
      *(_WORD *)(*(_DWORD *)(this + 4) + 16 * v8 + 4) = sub_1007AD30((_DWORD *)this, v6);
    if ( v6 == *(_WORD *)(this + 16) )
    {
      *(_WORD *)(this + 16) = v8;
    }
    else
    {
      v9 = sub_1007AD30((_DWORD *)this, v6);
      if ( sub_1007AA60((_DWORD *)this, v9) == v6 )
        *(_WORD *)(*(_DWORD *)(this + 4) + 16 * (unsigned __int16)sub_1007AD30((_DWORD *)this, v6)) = v8;
      else
        *(_WORD *)(*(_DWORD *)(this + 4) + 16 * (unsigned __int16)sub_1007AD30((_DWORD *)this, v6) + 2) = v8;
    }
    v11 = sub_1007A8A0((_DWORD *)this, v6);
    if ( v6 != a2 )
    {
      *(_WORD *)(*(_DWORD *)(this + 4) + 16 * v6 + 4) = sub_1007AD30((_DWORD *)this, a2);
      *(_WORD *)(*(_DWORD *)(this + 4) + 16 * v6 + 2) = sub_1007AAC0((_DWORD *)this, a2);
      *(_WORD *)(*(_DWORD *)(this + 4) + 16 * v6) = sub_1007AA60((_DWORD *)this, a2);
      if ( a2 == *(_WORD *)(this + 16) )
      {
        *(_WORD *)(this + 16) = v6;
      }
      else
      {
        v10 = sub_1007AD30((_DWORD *)this, a2);
        if ( sub_1007AA60((_DWORD *)this, v10) == a2 )
          *(_WORD *)(*(_DWORD *)(this + 4) + 16 * (unsigned __int16)sub_1007AD30((_DWORD *)this, a2)) = v6;
        else
          *(_WORD *)(*(_DWORD *)(this + 4) + 16 * (unsigned __int16)sub_1007AD30((_DWORD *)this, a2) + 2) = v6;
      }
      if ( sub_1007AA60((_DWORD *)this, v6) != -1 )
        *(_WORD *)(*(_DWORD *)(this + 4) + 16 * (unsigned __int16)sub_1007AA60((_DWORD *)this, v6) + 4) = v6;
      if ( sub_1007AAC0((_DWORD *)this, v6) != -1 )
        *(_WORD *)(*(_DWORD *)(this + 4) + 16 * (unsigned __int16)sub_1007AAC0((_DWORD *)this, v6) + 4) = v6;
      *(_WORD *)(*(_DWORD *)(this + 4) + 16 * v6 + 6) = sub_1007A8A0((_DWORD *)this, a2);
      v8 = v12;
    }
    result = 0xFFFF;
    if ( v8 != 0xFFFF && v11 == 1 )
      return sub_1007B970(this, v8);
  }
  return result;
}
