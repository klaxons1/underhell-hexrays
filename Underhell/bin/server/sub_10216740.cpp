void __thiscall sub_10216740(int this, int a2)
{
  unsigned __int16 v2; // di
  int v3; // ebx
  int v4; // esi
  int v5; // eax
  int v6; // edi
  unsigned __int16 v7; // bx
  int v8; // esi
  unsigned int v9; // eax
  int v10; // eax
  int v11; // ebx
  unsigned __int16 v12; // ax
  int v13; // edi
  _DWORD *v14; // eax
  int v15; // [esp+0h] [ebp-8h]
  int v16; // [esp+4h] [ebp-4h]

  v16 = this;
  if ( a2 )
  {
    v2 = *(_WORD *)(this + 812);
    if ( v2 != 0xFFFF )
    {
      v3 = this + 800;
      do
      {
        v4 = 8 * v2;
        v15 = *(unsigned __int16 *)(*(_DWORD *)v3 + v4 + 6);
        if ( *(_DWORD *)(*(_DWORD *)v3 + v4) == -1
          || off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)v3 + 8 * v2) & 0xFFF) + 2] != *(_DWORD *)(*(_DWORD *)v3 + 8 * v2) >> 12
          || !off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)v3 + 8 * v2) & 0xFFF) + 1] )
        {
          sub_10399E70(v2);
          *(_WORD *)(*(_DWORD *)v3 + v4 + 6) = *(_WORD *)(v3 + 16);
          *(_WORD *)(v3 + 16) = v2;
        }
        v2 = v15;
      }
      while ( v15 < 0xFFFF );
      this = v16;
    }
    v5 = *(_DWORD *)(this + 836);
    if ( v5 > 0 )
    {
      if ( *(unsigned __int16 *)(this + 818) >= v5 )
      {
        v6 = this + 800;
        while ( 1 )
        {
          v7 = *(_WORD *)(this + 812);
          v8 = 8 * v7;
          v9 = *(_DWORD *)(*(_DWORD *)v6 + v8);
          if ( v9 == -1
            || off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)v6 + 8 * *(unsigned __int16 *)(this + 812)) & 0xFFF) + 2] != v9 >> 12 )
          {
            v10 = 0;
          }
          else
          {
            v10 = off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)v6 + 8 * *(unsigned __int16 *)(this + 812)) & 0xFFF) + 1];
          }
          sub_1025FAC0(v10);
          sub_10399E70(v7);
          *(_WORD *)(*(_DWORD *)v6 + v8 + 6) = *(_WORD *)(v6 + 16);
          *(_WORD *)(v6 + 16) = v7;
          if ( *(unsigned __int16 *)(v16 + 818) < *(int *)(v16 + 836) )
            break;
          this = v16;
        }
      }
      v11 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
      v12 = sub_10147EA0((int *)(v16 + 800), 0);
      v13 = v12;
      sub_100D09C0((unsigned __int16 *)(v16 + 800), 0xFFFFu, v12);
      v14 = (_DWORD *)(*(_DWORD *)(v16 + 800) + 8 * v13);
      if ( v14 )
        *v14 = v11;
      *(_DWORD *)(v16 + 848) = *(_DWORD *)(dword_106B31C8 + 4);
    }
  }
}
