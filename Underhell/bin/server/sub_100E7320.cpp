int __thiscall sub_100E7320(int this, int a2)
{
  unsigned __int16 v3; // ax
  int v4; // ecx
  int v5; // eax
  _DWORD *v6; // esi
  int v7; // edx
  int v8; // ecx
  int v9; // eax
  int v10; // ebx
  char v11; // al
  int v13; // [esp+Ch] [ebp-4h]

  v3 = sub_100E6E10(this, a2);
  v4 = *(_DWORD *)(this + 8);
  v5 = 3 * v3;
  v6 = (_DWORD *)(v4 + 8 * v5 + 8);
  if ( *(_DWORD *)(v4 + 8 * v5 + 12) == -1 && *(_DWORD *)(this + 68) == 1 )
    *(_DWORD *)(v4 + 8 * v5 + 12) = 0;
  v13 = *(_DWORD *)(v4 + 8 * v5 + 12);
  if ( *(_DWORD *)(v4 + 8 * v5 + 16) == -2 )
  {
    if ( (*(_BYTE *)(this + 72) & 1) != 0 )
    {
      *(_DWORD *)(v4 + 8 * v5 + 16) = *(_DWORD *)(v4 + 8 * v5 + 12);
    }
    else
    {
      v7 = *(_DWORD *)(dword_10700A38 + 4);
      v8 = dword_10700A38 + 4;
      if ( *(_DWORD *)(this + 68) == 1 )
      {
        v9 = (*(int (__thiscall **)(int, int, const char *))(v7 + 24))(v8, a2, "GAME");
        v6[2] = v9;
        if ( v9 == -1 )
          v6[2] = 0;
      }
      else
      {
        v6[2] = (*(int (__thiscall **)(int, int, const char *))(v7 + 52))(v8, a2, "GAME");
      }
    }
  }
  v10 = *(_DWORD *)(*(_DWORD *)(this + 32) + 4 * v6[3]);
  if ( v13 != v6[2] )
  {
    v11 = *(_BYTE *)(this + 72);
    if ( (v11 & 2) == 0 )
    {
      *(_BYTE *)(this + 72) = v11 | 8;
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v10 + 8))(v10, a2);
    }
    v6[1] = v6[2];
  }
  return v10;
}
