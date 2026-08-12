void *__thiscall sub_1022E900(int *this, int a2)
{
  int v3; // eax
  _DWORD *v4; // ecx
  int v6; // eax
  const char *v7; // eax
  void *result; // eax
  unsigned int v9; // eax
  int v10; // ecx
  int v11; // ebx
  int v12; // edi
  void *v13; // eax
  _DWORD *v14; // edi
  _DWORD *v15; // ecx
  int v16; // [esp-8h] [ebp-10h]
  int v17; // [esp-4h] [ebp-Ch]
  int v18; // [esp+10h] [ebp+8h]

  if ( !this[236] )
  {
    v3 = sub_1041CB40(this[244]);
    this[236] = 0;
    sub_100F89E0(this + 233, 0, v3, 0);
    v4 = (_DWORD *)this[6];
    if ( v4 )
    {
      *v4 |= 0x101u;
      *(_WORD *)(sub_10153460(v4) + 2) = 0;
    }
  }
  if ( a2 < 0 || a2 >= this[236] )
  {
    v17 = this[236];
    v6 = sub_1041CB40(this[244]);
    v7 = (const char *)sub_1041CAF0(this[244], v6);
    DevWarning("Scene %s has %d actors, but scene entity only has %d actors\n", v7, v16, v17);
    return 0;
  }
  v9 = *(_DWORD *)(this[233] + 4 * a2);
  v18 = 4 * a2;
  if ( v9 == -1 || off_1061BE18[4 * (v9 & 0xFFF) + 2] != v9 >> 12 )
    v10 = 0;
  else
    v10 = off_1061BE18[4 * (v9 & 0xFFF) + 1];
  v11 = v10;
  if ( !v10 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v10 + 264))(v10) )
  {
    result = (void *)sub_1041CC10(a2);
    if ( !result )
      return result;
    v12 = *this;
    v13 = sub_10018D60(result);
    v11 = (*(int (__thiscall **)(int *, void *))(v12 + 888))(this, v13);
    if ( v11 )
    {
      v14 = (_DWORD *)(v18 + this[233]);
      *v14 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v11 + 8))(v11);
      v15 = (_DWORD *)this[6];
      if ( v15 )
      {
        *v15 |= 0x101u;
        *(_WORD *)(sub_10153460(v15) + 2) = 0;
      }
    }
  }
  return (void *)v11;
}
