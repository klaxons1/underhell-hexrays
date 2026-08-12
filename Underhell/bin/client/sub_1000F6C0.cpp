char __thiscall sub_1000F6C0(int this, int a2)
{
  _DWORD *v2; // eax
  int v3; // ebx
  __int16 v5; // ax
  char v6; // al
  int v7; // eax
  int v8; // edi
  unsigned __int16 v9; // ax
  bool v10; // bl
  int v11; // edi
  unsigned __int16 v12; // ax
  unsigned int v13; // esi
  _DWORD *v14; // esi
  unsigned int v15; // eax

  LOBYTE(v2) = a2;
  v3 = 0;
  if ( (a2 & 4) != 0 )
    v3 = 4096;
  if ( (a2 & 1) != 0 )
  {
    v3 |= 0x800u;
    LOBYTE(v2) = sub_1008F420(this + 352);
  }
  if ( (a2 & 2) != 0 )
  {
    v5 = *(_WORD *)(this + 388);
    v3 |= 0x800u;
    if ( (v5 & 0x100) != 0 )
    {
LABEL_11:
      LOBYTE(v2) = sub_1008F760(this + 352);
    }
    else
    {
      switch ( *(_BYTE *)(this + 392) )
      {
        case 0:
        case 1:
        case 6:
          if ( (v5 & 0x40) == 0 )
          {
            v6 = *(_BYTE *)(this + 393);
            if ( v6 != 2 )
            {
              if ( v6 )
                goto LABEL_11;
            }
          }
          break;
        case 3:
        case 5:
          break;
        default:
          goto LABEL_11;
      }
      sub_10036280(this);
      if ( this )
        v7 = this + 4;
      else
        v7 = 0;
      (*(void (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)off_103DD080 + 88))(off_103DD080, v7, 0);
      v8 = *(_DWORD *)off_103DD080;
      v9 = (*(int (__thiscall **)(int))(*(_DWORD *)(this + 4) + 28))(this + 4);
      LOBYTE(v2) = (*(int (__thiscall **)(void *, _DWORD))(v8 + 140))(off_103DD080, v9);
    }
    a2 |= 5u;
  }
  *(_DWORD *)(this + 312) |= v3;
  v10 = 0;
  if ( (a2 & 8) != 0 )
  {
    v11 = *(_DWORD *)off_103DD080;
    v12 = (*(int (__thiscall **)(int))(*(_DWORD *)(this + 4) + 28))(this + 4);
    (*(void (__thiscall **)(void *, _DWORD))(v11 + 140))(off_103DD080, v12);
    LOBYTE(v2) = 7;
    v10 = (a2 & 7) == 0;
    a2 = 7;
  }
  v13 = *(_DWORD *)(this + 328);
  if ( v13 == -1
    || (v2 = (_DWORD *)((char *)off_103DCD74 + 16 * (v13 & 0xFFF) + 4),
        *((_DWORD *)off_103DCD74 + 4 * (v13 & 0xFFF) + 2) != v13 >> 12) )
  {
    v14 = 0;
  }
  else
  {
    v14 = (_DWORD *)*v2;
  }
  if ( v14 )
  {
    do
    {
      if ( !v10 || *((_BYTE *)v14 + 318) || (unsigned __int8)sub_10037870(v14) )
        sub_1000F6C0(a2);
      v15 = v14[83];
      if ( v15 == -1 || *((_DWORD *)off_103DCD74 + 4 * (v14[83] & 0xFFF) + 2) != v15 >> 12 )
        v2 = 0;
      else
        v2 = (_DWORD *)*((_DWORD *)off_103DCD74 + 4 * (v14[83] & 0xFFF) + 1);
      v14 = v2;
    }
    while ( v2 );
  }
  return (char)v2;
}
