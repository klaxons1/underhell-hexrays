void __thiscall sub_10115DE0(int this, int a2, char a3)
{
  int v3; // edi
  int v4; // ebx
  int v5; // esi
  int v6; // edi
  int *v7; // eax
  int v8; // ebx
  unsigned int v9; // eax
  int v10; // ecx
  unsigned __int16 v11; // si
  int v12; // ebx
  int v13; // edx
  int v14; // ecx
  int v15; // esi
  unsigned __int16 v16; // ax
  int v17; // edi
  int v18; // eax
  int v19; // ecx
  int v20; // edx
  int *v21; // esi
  int v23; // [esp+1Ch] [ebp+Ch]

  v3 = this;
  if ( a3 )
  {
    if ( a2 )
      v4 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
    else
      v4 = -1;
    v5 = v3 + 40;
    v6 = (unsigned __int16)sub_100EC160((int *)(v3 + 40), 0);
    sub_1016F8E0(0xFFFF, v6);
    v7 = (int *)(*(_DWORD *)v5 + 8 * v6);
    if ( v7 )
      *v7 = v4;
    if ( *(unsigned __int16 *)(this + 58) > *(int *)(dword_104374EC + 48) )
    {
      v8 = *(unsigned __int16 *)(this + 52);
      v9 = *(_DWORD *)(*(_DWORD *)v5 + 8 * v8);
      if ( v9 != -1 && *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(*(_DWORD *)v5 + 8 * v8) & 0xFFF) + 2) == v9 >> 12 )
      {
        v10 = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(*(_DWORD *)v5 + 8 * v8) & 0xFFF) + 1);
        if ( v10 )
        {
          (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 436))(v10);
          sub_1003A300((int *)v5, v8);
          *(_WORD *)(8 * v8 + *(_DWORD *)v5 + 6) = *(_WORD *)(v5 + 16);
          *(_WORD *)(v5 + 16) = v8;
        }
      }
    }
  }
  else
  {
    v11 = *(_WORD *)(this + 24);
    if ( v11 != 0xFFFF )
    {
      v12 = *(_DWORD *)(this + 12);
      while ( 1 )
      {
        v13 = v12 + 8 * v11;
        if ( *(_DWORD *)v13 == -1
          || (v3 = this, *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)v13 & 0xFFF) + 2) != *(_DWORD *)v13 >> 12) )
        {
          v14 = 0;
        }
        else
        {
          v14 = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)v13 & 0xFFF) + 1);
        }
        if ( v14 == a2 )
          break;
        v11 = *(_WORD *)(v13 + 6);
        if ( v11 == 0xFFFF )
          goto LABEL_22;
      }
      sub_1003A300((int *)(v3 + 12), v11);
      *(_WORD *)(*(_DWORD *)(v3 + 12) + 8 * v11 + 6) = *(_WORD *)(v3 + 28);
      *(_WORD *)(v3 + 28) = v11;
    }
LABEL_22:
    if ( a2 )
      v23 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
    else
      v23 = -1;
    v15 = v3 + 12;
    v16 = sub_100EC160((int *)(v3 + 12), 0);
    v17 = v16;
    sub_1003A300((int *)v15, v16);
    v18 = *(_DWORD *)v15;
    v19 = 8 * v17;
    *(_WORD *)(v18 + v19 + 6) = -1;
    v20 = *(unsigned __int16 *)(v15 + 14);
    *(_WORD *)(v18 + v19 + 4) = v20;
    *(_WORD *)(v15 + 14) = v17;
    if ( (_WORD)v20 == 0xFFFF )
      *(_WORD *)(v15 + 12) = v17;
    else
      *(_WORD *)(*(_DWORD *)v15 + 8 * v20 + 6) = v17;
    ++*(_WORD *)(v15 + 18);
    v21 = (int *)(v19 + *(_DWORD *)v15);
    if ( v21 )
      *v21 = v23;
  }
}
