void __thiscall sub_1006CBB0(_DWORD *this, int a2)
{
  int v2; // edi
  int v4; // ecx
  int v5; // eax
  int *v6; // eax
  int *v7; // eax
  int v8; // ebx
  int *v9; // eax
  int v10; // ebx
  int v11; // [esp+Ch] [ebp-8h]
  int v12; // [esp+10h] [ebp-4h]

  v2 = a2;
  if ( a2 != -1 )
  {
    v4 = dword_10692F00;
    if ( (dword_10692F00 & 1) == 0 )
    {
      v4 = dword_10692F00 | 1;
      dword_10692F00 |= 1u;
      dword_10692EF0 = -1;
      dword_10692EF4 = -1;
      dword_10692EF8 = -1;
      dword_10692EFC = 1;
    }
    if ( *(_DWORD *)(this[1] + 32 * a2) != -1 )
    {
      if ( sub_1006B170(this, a2) == -1 )
      {
        v4 = dword_10692F00;
      }
      else
      {
        v5 = sub_1006B170(this, a2);
        v4 = dword_10692F00;
        v2 = v5;
        while ( 1 )
        {
          if ( (v4 & 1) == 0 )
          {
            v4 |= 1u;
            dword_10692F00 = v4;
            dword_10692EF0 = -1;
            dword_10692EF4 = -1;
            dword_10692EF8 = -1;
            dword_10692EFC = 1;
          }
          v6 = v2 == -1 ? &dword_10692EF0 : (int *)(this[1] + 32 * v2);
          if ( *v6 == -1 )
            break;
          if ( (v4 & 1) == 0 )
          {
            v4 |= 1u;
            dword_10692F00 = v4;
            dword_10692EF0 = -1;
            dword_10692EF4 = -1;
            dword_10692EF8 = -1;
            dword_10692EFC = 1;
          }
          if ( v2 == -1 )
            v2 = dword_10692EF0;
          else
            v2 = *(_DWORD *)(this[1] + 32 * v2);
        }
      }
    }
    if ( (v4 & 1) == 0 )
    {
      dword_10692F00 = v4 | 1;
      dword_10692EF0 = -1;
      dword_10692EF4 = -1;
      dword_10692EF8 = -1;
      dword_10692EFC = 1;
    }
    if ( v2 == -1 )
      v7 = &dword_10692EF0;
    else
      v7 = (int *)(this[1] + 32 * v2);
    if ( *v7 == -1 )
    {
      v12 = sub_1006B170(this, v2);
      v8 = v12;
    }
    else
    {
      v8 = sub_1006B120(this, v2);
      v12 = v8;
    }
    if ( v8 != -1 )
      *(_DWORD *)(32 * v8 + this[1] + 8) = sub_1006B0D0(this, v2);
    if ( v2 == this[4] )
    {
      this[4] = v8;
    }
    else if ( sub_1006B360(this, v2) )
    {
      *(_DWORD *)(32 * sub_1006B0D0(this, v2) + this[1]) = v8;
    }
    else
    {
      *(_DWORD *)(32 * sub_1006B0D0(this, v2) + this[1] + 4) = v8;
    }
    if ( (dword_10692F00 & 1) == 0 )
    {
      dword_10692F00 |= 1u;
      dword_10692EF0 = -1;
      dword_10692EF4 = -1;
      dword_10692EF8 = -1;
      dword_10692EFC = 1;
    }
    if ( v2 == -1 )
      v9 = &dword_10692EF0;
    else
      v9 = (int *)(this[1] + 32 * v2);
    v11 = v9[3];
    if ( v2 != a2 )
    {
      v10 = 32 * v2;
      *(_DWORD *)(32 * v2 + this[1] + 8) = sub_1006B0D0(this, a2);
      *(_DWORD *)(v10 + this[1] + 4) = sub_1006B170(this, a2);
      *(_DWORD *)(v10 + this[1]) = sub_1006B120(this, a2);
      if ( a2 == this[4] )
      {
        this[4] = v2;
      }
      else if ( sub_1006B360(this, a2) )
      {
        *(_DWORD *)(32 * sub_1006B0D0(this, a2) + this[1]) = v2;
      }
      else
      {
        *(_DWORD *)(32 * sub_1006B0D0(this, a2) + this[1] + 4) = v2;
      }
      if ( sub_1006B120(this, v2) != -1 )
        *(_DWORD *)(32 * sub_1006B120(this, v2) + this[1] + 8) = v2;
      if ( sub_1006B170(this, v2) != -1 )
        *(_DWORD *)(32 * sub_1006B170(this, v2) + this[1] + 8) = v2;
      *(_DWORD *)(v10 + this[1] + 12) = sub_1006B010(this, a2);
      v8 = v12;
    }
    if ( v8 != -1 && v11 == 1 )
      sub_1006C180(this, v8);
  }
}
