int __thiscall sub_10079120(int this, unsigned __int16 a2)
{
  int result; // eax
  unsigned __int16 v4; // di
  int v5; // ecx
  int *v6; // eax
  unsigned __int16 v7; // bx
  int *v8; // eax
  int v9; // ebx
  int *v10; // eax
  int v11; // [esp+8h] [ebp-8h]
  unsigned __int16 v12; // [esp+Ch] [ebp-4h]

  result = 0xFFFF;
  if ( a2 != 0xFFFF )
  {
    if ( *(_WORD *)sub_100772B0((_DWORD *)this, a2) == 0xFFFF
      || *((_WORD *)sub_100772B0((_DWORD *)this, a2) + 1) == 0xFFFF )
    {
      v4 = a2;
    }
    else
    {
      v4 = *((_WORD *)sub_100772B0((_DWORD *)this, a2) + 1);
      v5 = dword_10413850;
      while ( 1 )
      {
        if ( (v5 & 1) == 0 )
        {
          v5 |= 1u;
          dword_10413850 = v5;
          dword_10413848 = -1;
          dword_1041384C = 0x1FFFF;
        }
        v6 = v4 == 0xFFFF ? &dword_10413848 : (int *)(*(_DWORD *)(this + 4) + 60 * v4);
        if ( *(_WORD *)v6 == 0xFFFF )
          break;
        if ( (v5 & 1) == 0 )
        {
          v5 |= 1u;
          dword_10413850 = v5;
          dword_10413848 = -1;
          dword_1041384C = 0x1FFFF;
        }
        if ( v4 == 0xFFFF )
          v4 = dword_10413848;
        else
          v4 = *(_WORD *)(*(_DWORD *)(this + 4) + 60 * v4);
      }
    }
    if ( *(_WORD *)sub_100772B0((_DWORD *)this, v4) == 0xFFFF )
    {
      v12 = *((_WORD *)sub_100772B0((_DWORD *)this, v4) + 1);
      v7 = v12;
    }
    else
    {
      v7 = *(_WORD *)sub_100772B0((_DWORD *)this, v4);
      v12 = v7;
    }
    if ( v7 != 0xFFFF )
      *(_WORD *)(*(_DWORD *)(this + 4) + 60 * v7 + 4) = *((_WORD *)sub_100772B0((_DWORD *)this, v4) + 2);
    if ( v4 == *(_WORD *)(this + 16) )
    {
      *(_WORD *)(this + 16) = v7;
    }
    else
    {
      v8 = sub_100772B0((_DWORD *)this, v4);
      if ( *(_WORD *)sub_100772B0((_DWORD *)this, *((_WORD *)v8 + 2)) == v4 )
        *(_WORD *)(*(_DWORD *)(this + 4) + 60 * *((unsigned __int16 *)sub_100772B0((_DWORD *)this, v4) + 2)) = v7;
      else
        *(_WORD *)(*(_DWORD *)(this + 4) + 60 * *((unsigned __int16 *)sub_100772B0((_DWORD *)this, v4) + 2) + 2) = v7;
    }
    v11 = *((unsigned __int16 *)sub_100772B0((_DWORD *)this, v4) + 3);
    if ( v4 != a2 )
    {
      v9 = 60 * v4;
      *(_WORD *)(v9 + *(_DWORD *)(this + 4) + 4) = *((_WORD *)sub_100772B0((_DWORD *)this, a2) + 2);
      *(_WORD *)(v9 + *(_DWORD *)(this + 4) + 2) = *((_WORD *)sub_100772B0((_DWORD *)this, a2) + 1);
      *(_WORD *)(v9 + *(_DWORD *)(this + 4)) = *(_WORD *)sub_100772B0((_DWORD *)this, a2);
      if ( a2 == *(_WORD *)(this + 16) )
      {
        *(_WORD *)(this + 16) = v4;
      }
      else
      {
        v10 = sub_100772B0((_DWORD *)this, a2);
        if ( *(_WORD *)sub_100772B0((_DWORD *)this, *((_WORD *)v10 + 2)) == a2 )
          *(_WORD *)(*(_DWORD *)(this + 4) + 60 * *((unsigned __int16 *)sub_100772B0((_DWORD *)this, a2) + 2)) = v4;
        else
          *(_WORD *)(*(_DWORD *)(this + 4) + 60 * *((unsigned __int16 *)sub_100772B0((_DWORD *)this, a2) + 2) + 2) = v4;
      }
      if ( *(_WORD *)sub_100772B0((_DWORD *)this, v4) != 0xFFFF )
        *(_WORD *)(*(_DWORD *)(this + 4) + 60 * *(unsigned __int16 *)sub_100772B0((_DWORD *)this, v4) + 4) = v4;
      if ( *((_WORD *)sub_100772B0((_DWORD *)this, v4) + 1) != 0xFFFF )
        *(_WORD *)(*(_DWORD *)(this + 4) + 60 * *((unsigned __int16 *)sub_100772B0((_DWORD *)this, v4) + 1) + 4) = v4;
      *(_WORD *)(v9 + *(_DWORD *)(this + 4) + 6) = *((_WORD *)sub_100772B0((_DWORD *)this, a2) + 3);
      v7 = v12;
    }
    result = 0xFFFF;
    if ( v7 != 0xFFFF && v11 == 1 )
      return sub_10078410(this, v7);
  }
  return result;
}
