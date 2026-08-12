char __thiscall sub_100820C0(int this)
{
  char *v2; // eax
  int *v3; // eax
  int v4; // esi
  bool v5; // bl
  unsigned int v6; // eax
  int v7; // ecx
  char result; // al
  unsigned int v9; // eax
  int v10; // ecx
  const char *v11; // eax
  int v12; // ebx
  unsigned int v13; // eax
  int v14; // ecx
  int v15; // esi
  unsigned int v16; // eax
  char Buffer[256]; // [esp+Ch] [ebp-114h] BYREF
  int v18; // [esp+10Ch] [ebp-14h]
  int v19; // [esp+110h] [ebp-10h]
  int v20; // [esp+114h] [ebp-Ch]

  if ( *(_DWORD *)(dword_106934A4 + 48) )
  {
    v2 = sub_1001E280(Buffer, "[Nav] %s", "Advancing path\n");
    sub_10029660(*(_DWORD **)(this + 4), (int)v2);
  }
  v3 = *(int **)(this + 36);
  v4 = *v3;
  v5 = (*(_DWORD *)(*v3 + 32) & 2) != 0;
  if ( (*(_DWORD *)(*v3 + 32) & 2) != 0 )
  {
    v6 = *(_DWORD *)(v4 + 24);
    if ( v6 != -1 && off_1061BE18[4 * (*(_DWORD *)(v4 + 24) & 0xFFF) + 2] == v6 >> 12 )
    {
      v7 = off_1061BE18[4 * (*(_DWORD *)(v4 + 24) & 0xFFF) + 1];
      if ( v7 )
      {
        v18 = 0;
        (*(void (__thiscall **)(int, const char *, _DWORD, int, _DWORD, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v7 + 148))(
          v7,
          "InPass",
          *(_DWORD *)(this + 4),
          v7,
          0,
          v19,
          v20,
          -1,
          0,
          0);
      }
    }
  }
  result = sub_100A61C0(*(_DWORD *)(this + 36));
  if ( !result )
  {
    if ( (*(_BYTE *)(v4 + 32) & 0x10) != 0 )
    {
      v9 = *(_DWORD *)(v4 + 28);
      if ( v9 != -1
        && off_1061BE18[4 * (*(_DWORD *)(v4 + 28) & 0xFFF) + 2] == v9 >> 12
        && (v10 = off_1061BE18[4 * (*(_DWORD *)(v4 + 28) & 0xFFF) + 1]) != 0 )
      {
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4) + 1780))(*(_DWORD *)(this + 4), v10);
      }
      else
      {
        v11 = (const char *)sub_100D6390(*(_DWORD *)(this + 4));
        DevMsg("%s trying to open a door that has been deleted!\n", v11);
      }
    }
    result = sub_100A6890(*(_DWORD *)(this + 36));
    if ( v5 )
    {
      v12 = **(_DWORD **)(this + 36);
      if ( v12 )
      {
        v13 = *(_DWORD *)(v12 + 24);
        if ( v13 == -1 || off_1061BE18[4 * (*(_DWORD *)(v12 + 24) & 0xFFF) + 2] != v13 >> 12 )
          v14 = 0;
        else
          v14 = off_1061BE18[4 * (*(_DWORD *)(v12 + 24) & 0xFFF) + 1];
        v15 = *(_DWORD *)(this + 4);
        if ( v14 )
          *(_DWORD *)(v15 + 2608) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v14 + 8))(v14);
        else
          *(_DWORD *)(v15 + 2608) = -1;
        v16 = *(_DWORD *)(v12 + 24);
        if ( v16 == -1 || off_1061BE18[4 * (*(_DWORD *)(v12 + 24) & 0xFFF) + 2] != v16 >> 12 )
          return sub_10080C20(this, 0);
        else
          return sub_10080C20(this, off_1061BE18[4 * (*(_DWORD *)(v12 + 24) & 0xFFF) + 1]);
      }
    }
  }
  return result;
}
