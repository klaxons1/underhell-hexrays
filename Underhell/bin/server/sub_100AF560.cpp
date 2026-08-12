void __thiscall sub_100AF560(_DWORD *this, int a2)
{
  int v2; // edi
  int v4; // eax
  int v5; // ecx
  int *v6; // eax
  int v7; // ebx
  int v8; // ebx
  int v9; // [esp+Ch] [ebp-8h]
  int v10; // [esp+10h] [ebp-4h]

  v2 = a2;
  if ( a2 != -1 )
  {
    if ( sub_100ACBF0(this, a2) != -1 && sub_100ACC50(this, a2) != -1 )
    {
      v4 = sub_100ACC50(this, a2);
      v5 = dword_10695154;
      v2 = v4;
      while ( 1 )
      {
        if ( (v5 & 1) == 0 )
        {
          v5 |= 1u;
          dword_10695154 = v5;
          dword_10695144 = -1;
          dword_10695148 = -1;
          dword_1069514C = -1;
          dword_10695150 = 1;
        }
        v6 = v2 == -1 ? &dword_10695144 : (int *)(this[1] + 28 * v2);
        if ( *v6 == -1 )
          break;
        if ( (v5 & 1) == 0 )
        {
          v5 |= 1u;
          dword_10695154 = v5;
          dword_10695144 = -1;
          dword_10695148 = -1;
          dword_1069514C = -1;
          dword_10695150 = 1;
        }
        if ( v2 == -1 )
          v2 = dword_10695144;
        else
          v2 = *(_DWORD *)(this[1] + 28 * v2);
      }
    }
    if ( sub_100ACBF0(this, v2) == -1 )
    {
      v10 = sub_100ACC50(this, v2);
      v7 = v10;
    }
    else
    {
      v7 = sub_100ACBF0(this, v2);
      v10 = v7;
    }
    if ( v7 != -1 )
      *(_DWORD *)(this[1] + 28 * v7 + 8) = sub_100ACB90(this, v2);
    if ( v2 == this[4] )
    {
      this[4] = v7;
    }
    else if ( sub_100ACF50(this, v2) )
    {
      *(_DWORD *)(this[1] + 28 * sub_100ACB90(this, v2)) = v7;
    }
    else
    {
      *(_DWORD *)(this[1] + 28 * sub_100ACB90(this, v2) + 4) = v7;
    }
    v9 = sub_100ACAA0(this, v2);
    if ( v2 != a2 )
    {
      v8 = 28 * v2;
      *(_DWORD *)(28 * v2 + this[1] + 8) = sub_100ACB90(this, a2);
      *(_DWORD *)(v8 + this[1] + 4) = sub_100ACC50(this, a2);
      *(_DWORD *)(v8 + this[1]) = sub_100ACBF0(this, a2);
      if ( a2 == this[4] )
      {
        this[4] = v2;
      }
      else if ( sub_100ACF50(this, a2) )
      {
        *(_DWORD *)(this[1] + 28 * sub_100ACB90(this, a2)) = v2;
      }
      else
      {
        *(_DWORD *)(this[1] + 28 * sub_100ACB90(this, a2) + 4) = v2;
      }
      if ( sub_100ACBF0(this, v2) != -1 )
        *(_DWORD *)(this[1] + 28 * sub_100ACBF0(this, v2) + 8) = v2;
      if ( sub_100ACC50(this, v2) != -1 )
        *(_DWORD *)(this[1] + 28 * sub_100ACC50(this, v2) + 8) = v2;
      *(_DWORD *)(v8 + this[1] + 12) = sub_100ACAA0(this, a2);
      v7 = v10;
    }
    if ( v7 != -1 && v9 == 1 )
      sub_100AE490(this, v7);
  }
}
