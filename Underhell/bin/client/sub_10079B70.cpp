void __thiscall sub_10079B70(_DWORD *this, int a2, char a3, _DWORD *a4, int a5)
{
  int v6; // eax
  unsigned int v7; // eax
  int v8; // ecx
  int v9; // esi
  unsigned __int16 v10; // ax
  char v12; // [esp+1Bh] [ebp+Bh]

  if ( *(_DWORD *)(a2 + 12) != this[18] )
  {
    if ( -1293.0 == *(float *)(a2 + 4) || *((float *)off_103DC81C + 3) >= (double)*(float *)(a2 + 4) )
    {
      v12 = 1;
    }
    else
    {
      v12 = 0;
      if ( !a3 )
        return;
    }
    v6 = sub_1007A770(*(_DWORD *)a2);
    if ( v6 )
    {
      v7 = *(_DWORD *)(v6 + 324);
      if ( v7 != -1 && *((_DWORD *)off_103DCD74 + 4 * (v7 & 0xFFF) + 2) == v7 >> 12 )
      {
        v8 = *((_DWORD *)off_103DCD74 + 4 * (v7 & 0xFFF) + 1);
        if ( v8 )
        {
          v9 = v8 + 12;
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)(v8 + 12) + 8))(v8 + 12) != 0xFFFF )
          {
            v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 8))(v9);
            sub_10079B70(this[1] + 20 * v10, 1, a4, a5);
          }
        }
      }
    }
    if ( v12 )
    {
      *(_DWORD *)(a2 + 12) = this[18];
      *(_DWORD *)(a5 + 4 * (*a4)++) = a2;
    }
  }
}
