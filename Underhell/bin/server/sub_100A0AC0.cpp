void __thiscall sub_100A0AC0(_DWORD *this, int a2)
{
  int v2; // edi
  int v4; // ecx
  int v5; // eax
  int *v6; // eax
  int *v7; // eax
  int v8; // ebx
  int v9; // ebx
  int v10; // [esp+Ch] [ebp-8h]
  int v11; // [esp+10h] [ebp-4h]

  v2 = a2;
  if ( a2 != -1 )
  {
    v4 = dword_10693D2C;
    if ( (dword_10693D2C & 1) == 0 )
    {
      v4 = dword_10693D2C | 1;
      dword_10693D2C |= 1u;
      dword_10693D1C = -1;
      dword_10693D20 = -1;
      dword_10693D24 = -1;
      dword_10693D28 = 1;
    }
    if ( *(_DWORD *)(this[1] + 24 * a2) != -1 )
    {
      if ( sub_1009B5F0(this, a2) == -1 )
      {
        v4 = dword_10693D2C;
      }
      else
      {
        v5 = sub_1009B5F0(this, a2);
        v4 = dword_10693D2C;
        v2 = v5;
        while ( 1 )
        {
          if ( (v4 & 1) == 0 )
          {
            v4 |= 1u;
            dword_10693D2C = v4;
            dword_10693D1C = -1;
            dword_10693D20 = -1;
            dword_10693D24 = -1;
            dword_10693D28 = 1;
          }
          v6 = v2 == -1 ? &dword_10693D1C : (int *)(this[1] + 24 * v2);
          if ( *v6 == -1 )
            break;
          if ( (v4 & 1) == 0 )
          {
            v4 |= 1u;
            dword_10693D2C = v4;
            dword_10693D1C = -1;
            dword_10693D20 = -1;
            dword_10693D24 = -1;
            dword_10693D28 = 1;
          }
          if ( v2 == -1 )
            v2 = dword_10693D1C;
          else
            v2 = *(_DWORD *)(this[1] + 24 * v2);
        }
      }
    }
    if ( (v4 & 1) == 0 )
    {
      dword_10693D2C = v4 | 1;
      dword_10693D1C = -1;
      dword_10693D20 = -1;
      dword_10693D24 = -1;
      dword_10693D28 = 1;
    }
    if ( v2 == -1 )
      v7 = &dword_10693D1C;
    else
      v7 = (int *)(this[1] + 24 * v2);
    if ( *v7 == -1 )
    {
      v11 = sub_1009B5F0(this, v2);
      v8 = v11;
    }
    else
    {
      v8 = sub_1009B590(this, v2);
      v11 = v8;
    }
    if ( v8 != -1 )
      *(_DWORD *)(this[1] + 24 * v8 + 8) = sub_1009B530(this, v2);
    if ( v2 == this[4] )
    {
      this[4] = v8;
    }
    else if ( sub_1009B900(this, v2) )
    {
      *(_DWORD *)(this[1] + 24 * sub_1009B530(this, v2)) = v8;
    }
    else
    {
      *(_DWORD *)(this[1] + 24 * sub_1009B530(this, v2) + 4) = v8;
    }
    v10 = sub_1009A950(this, v2);
    if ( v2 != a2 )
    {
      v9 = 24 * v2;
      *(_DWORD *)(24 * v2 + this[1] + 8) = sub_1009B530(this, a2);
      *(_DWORD *)(v9 + this[1] + 4) = sub_1009B5F0(this, a2);
      *(_DWORD *)(v9 + this[1]) = sub_1009B590(this, a2);
      if ( a2 == this[4] )
      {
        this[4] = v2;
      }
      else if ( sub_1009B900(this, a2) )
      {
        *(_DWORD *)(this[1] + 24 * sub_1009B530(this, a2)) = v2;
      }
      else
      {
        *(_DWORD *)(this[1] + 24 * sub_1009B530(this, a2) + 4) = v2;
      }
      if ( sub_1009B590(this, v2) != -1 )
        *(_DWORD *)(this[1] + 24 * sub_1009B590(this, v2) + 8) = v2;
      if ( sub_1009B5F0(this, v2) != -1 )
        *(_DWORD *)(this[1] + 24 * sub_1009B5F0(this, v2) + 8) = v2;
      *(_DWORD *)(v9 + this[1] + 12) = sub_1009A950(this, a2);
      v8 = v11;
    }
    if ( v8 != -1 && v10 == 1 )
      sub_1009DE10(this, v8);
  }
}
