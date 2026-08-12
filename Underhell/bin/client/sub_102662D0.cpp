void __thiscall sub_102662D0(_DWORD *this, int a2)
{
  int v4; // eax
  int v5; // ecx
  int v6; // edi
  int *v7; // eax
  int v8; // ebp
  int v9; // [esp+Ch] [ebp-4h]
  int v10; // [esp+14h] [ebp+4h]

  if ( a2 != -1 )
  {
    if ( sub_10263990(this, a2) == -1 || sub_102639E0(this, a2) == -1 )
    {
      v6 = a2;
    }
    else
    {
      v4 = sub_102639E0(this, a2);
      v5 = dword_10480478;
      v6 = v4;
      while ( 1 )
      {
        if ( (v5 & 1) == 0 )
        {
          v5 |= 1u;
          dword_10480478 = v5;
          dword_10480468 = -1;
          dword_1048046C = -1;
          dword_10480470 = -1;
          dword_10480474 = 1;
        }
        v7 = v6 == -1 ? &dword_10480468 : (int *)(this[1] + 24 * v6);
        if ( *v7 == -1 )
          break;
        if ( (v5 & 1) == 0 )
        {
          v5 |= 1u;
          dword_10480478 = v5;
          dword_10480468 = -1;
          dword_1048046C = -1;
          dword_10480470 = -1;
          dword_10480474 = 1;
        }
        if ( v6 == -1 )
          v6 = dword_10480468;
        else
          v6 = *(_DWORD *)(this[1] + 24 * v6);
      }
    }
    if ( sub_10263990(this, v6) == -1 )
    {
      v10 = sub_102639E0(this, v6);
      v8 = v10;
    }
    else
    {
      v8 = sub_10263990(this, v6);
      v10 = v8;
    }
    if ( v8 != -1 )
      *(_DWORD *)(this[1] + 24 * v8 + 8) = sub_10263940(this, v6);
    if ( v6 == this[4] )
    {
      this[4] = v8;
    }
    else if ( sub_10263B20(this, v6) )
    {
      *(_DWORD *)(this[1] + 24 * sub_10263940(this, v6)) = v8;
    }
    else
    {
      *(_DWORD *)(this[1] + 24 * sub_10263940(this, v6) + 4) = v8;
    }
    v9 = sub_10261CF0(this, v6);
    if ( v6 != a2 )
    {
      *(_DWORD *)(this[1] + 24 * v6 + 8) = sub_10263940(this, a2);
      *(_DWORD *)(this[1] + 24 * v6 + 4) = sub_102639E0(this, a2);
      *(_DWORD *)(this[1] + 24 * v6) = sub_10263990(this, a2);
      if ( a2 == this[4] )
      {
        this[4] = v6;
      }
      else if ( sub_10263B20(this, a2) )
      {
        *(_DWORD *)(this[1] + 24 * sub_10263940(this, a2)) = v6;
      }
      else
      {
        *(_DWORD *)(this[1] + 24 * sub_10263940(this, a2) + 4) = v6;
      }
      if ( sub_10263990(this, v6) != -1 )
        *(_DWORD *)(this[1] + 24 * sub_10263990(this, v6) + 8) = v6;
      if ( sub_102639E0(this, v6) != -1 )
        *(_DWORD *)(this[1] + 24 * sub_102639E0(this, v6) + 8) = v6;
      *(_DWORD *)(this[1] + 24 * v6 + 12) = sub_10261CF0(this, a2);
      v8 = v10;
    }
    if ( v8 != -1 && v9 == 1 )
      sub_102655F0(this, v8);
  }
}
