int __usercall sub_10192B40@<eax>(int a1@<ecx>, int a2@<ebx>)
{
  _DWORD *v3; // eax
  int v4; // edi
  unsigned int v5; // eax
  unsigned int v6; // eax
  int *v7; // ecx
  int v8; // edx
  char v9; // bl
  int v10; // eax
  int result; // eax
  double v12; // st7
  int v13; // eax
  char Buffer[32]; // [esp+8h] [ebp-24h] BYREF
  int v16; // [esp+28h] [ebp-4h]

  nullsub_4();
  v3 = (_DWORD *)dword_103EADCC;
  v4 = 0;
  if ( dword_103EADCC )
  {
    while ( !*(_BYTE *)(*v3 + 1192) )
    {
      v3 = (_DWORD *)v3[2];
      if ( !v3 )
        goto LABEL_6;
    }
    v4 = *v3;
  }
LABEL_6:
  v5 = *(_DWORD *)(a1 + 252);
  if ( v5 != -1
    && (v6 = v5 >> 12, *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a1 + 252) & 0xFFF) + 2) == v6)
    && *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a1 + 252) & 0xFFF) + 1)
    && v4 )
  {
    v7 = *(int **)(a1 + 256);
    v8 = *v7;
    v9 = *(_BYTE *)(v4 + 1193);
    LOBYTE(v6) = v9 == 0;
    LOBYTE(v16) = v9 == 0;
    (*(void (__thiscall **)(int *, unsigned int, int))(v8 + 124))(v7, v6, a2);
    v10 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 260) + 124))(*(_DWORD *)(a1 + 260), v16);
    LOBYTE(v10) = v9 && (v10 = (int)*((float *)off_103DC81C + 3), (v10 & 1) != 0);
    result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 264) + 124))(*(_DWORD *)(a1 + 264), v10);
    if ( !v9 && *(_DWORD *)(a1 + 260) )
    {
      v12 = *((float *)off_103DC81C + 3) - *(float *)(v4 + 1196);
      if ( v12 < 0.0 )
        v12 = 0.0;
      v13 = (int)(*(float *)(v4 + 1200) - v12 + 0.5);
      if ( v13 < 0 )
        LOBYTE(v13) = 0;
      sub_10228370(Buffer, 0x20u, "%d", v13);
      return (*(int (__thiscall **)(_DWORD, char *))(**(_DWORD **)(a1 + 260) + 772))(*(_DWORD *)(a1 + 260), Buffer);
    }
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 256) + 124))(*(_DWORD *)(a1 + 256), 0);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 260) + 124))(*(_DWORD *)(a1 + 260), 0);
    return (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 264) + 124))(*(_DWORD *)(a1 + 264), 0);
  }
  return result;
}
