void __thiscall sub_100F8700(_DWORD *this)
{
  int v2; // eax
  int v3; // ebx
  int *v4; // esi
  int v5; // eax
  int v6; // esi
  char v7; // [esp+7h] [ebp-1h]

  if ( (this[283] & 2) != 0 )
  {
    if ( dword_10435FF0 )
    {
      v2 = (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_10435FF0 + 4))(dword_10435FF0, this);
      v3 = v2;
      if ( v2 )
      {
        v4 = *(int **)(v2 + 8);
        v7 = byte_103E1B48;
        byte_103E1B48 = 0;
        if ( v4 != (int *)v2 )
        {
          do
          {
            v5 = v4[1];
            dword_10435F04 = v4[2];
            if ( v5 == -1 )
            {
              v6 = *v4;
              if ( v6 && (this[78] & 1) == 0 && (*(_BYTE *)(v6 + 312) & 1) == 0 )
                (*(void (__thiscall **)(_DWORD *, int))(*this + 484))(this, v6);
            }
            else if ( v5 != this[39] )
            {
              sub_100F7C50((int)this, *v4);
              sub_100F7560((int)this, (int)v4);
            }
            v4 = (int *)dword_10435F04;
          }
          while ( dword_10435F04 != v3 );
        }
        byte_103E1B48 = v7;
        if ( *(_DWORD *)(v3 + 8) == v3 && *(_DWORD *)(v3 + 12) == v3 && (this[283] & 2) != 0 )
        {
          if ( dword_10435FF0 )
            (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_10435FF0 + 12))(dword_10435FF0, this);
          this[283] &= ~2u;
        }
      }
    }
  }
  dword_10435F04 = 0;
  sub_100F7060(this, 0);
}
