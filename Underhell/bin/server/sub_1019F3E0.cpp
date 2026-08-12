unsigned int __thiscall sub_1019F3E0(_DWORD *this)
{
  unsigned int v1; // edi
  _DWORD *v2; // esi
  unsigned int result; // eax
  bool v4; // zf
  int v5; // ebx
  int v6; // eax
  char v7; // cl
  size_t v8; // esi
  char *v9; // ebx
  unsigned int v10; // esi
  int v11; // ecx
  char **v12; // eax
  char v13[2]; // [esp+6h] [ebp-CAh]
  char Source; // [esp+8h] [ebp-C8h] BYREF
  _BYTE v15[3]; // [esp+9h] [ebp-C7h] BYREF
  _DWORD v16[2]; // [esp+88h] [ebp-48h] BYREF
  int v17; // [esp+90h] [ebp-40h]
  char v18; // [esp+9Ch] [ebp-34h]
  int v19; // [esp+B8h] [ebp-18h]
  int v20; // [esp+BCh] [ebp-14h]
  int v21; // [esp+C0h] [ebp-10h]
  int v22; // [esp+C4h] [ebp-Ch]
  int v23; // [esp+C8h] [ebp-8h]
  _DWORD *v24; // [esp+CCh] [ebp-4h]

  v1 = 0;
  v2 = this;
  v24 = this;
  this[266] = 0;
  sub_1042DE40(0, 0, 1);
  result = (*(int (__thiscall **)(int, const char *, const char *, _DWORD *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)(dword_106B31D8 + 4) + 56))(
             dword_106B31D8 + 4,
             "NavPlace.db",
             "GAME",
             v16,
             0,
             0,
             0);
  if ( !v16[1] )
  {
    if ( v17 < 0 )
      return result;
    result = v16[0];
    v4 = v16[0] == 0;
    goto LABEL_25;
  }
  v5 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  sub_1042DC50(&Source, 128);
  if ( !v18 )
  {
    do
    {
      v6 = &v15[strlen(&Source)] - v15;
      if ( v6 >= 2 )
      {
        if ( v13[v6 + 1] == 10 )
          v13[v6 + 1] = v7;
        if ( v13[v6] == 13 )
          v13[v6] = 0;
        v8 = v6 + 1;
        v9 = (char *)sub_10184390(v6 + 1);
        sub_104299C0(v9, &Source, v8);
        v10 = v1;
        if ( (int)(v1 + 1) > v20 )
        {
          sub_102ABFC0(v1 - v20 + 1);
          v1 = v22;
        }
        v11 = v19;
        v22 = ++v1;
        v23 = v19;
        if ( (int)(v1 - v10 - 1) > 0 )
        {
          memcpy((void *)(v19 + 4 * v10 + 4), (const void *)(v19 + 4 * v10), 4 * (v1 - v10 - 1));
          v11 = v19;
        }
        v12 = (char **)(v11 + 4 * v10);
        v2 = v24;
        if ( v12 )
          *v12 = v9;
      }
      sub_1042DC50(&Source, 128);
    }
    while ( !v18 );
    v5 = v19;
  }
  v2[266] = v1;
  v2[265] = sub_10184390((unsigned __int64)v1 >> 30 != 0 ? -1 : 4 * v1);
  for ( result = 0; result < v2[266]; ++result )
    *(_DWORD *)(v2[265] + 4 * result) = *(_DWORD *)(v5 + 4 * result);
  if ( v21 >= 0 && v5 )
    result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v5);
  if ( v17 >= 0 )
  {
    result = v16[0];
    v4 = v16[0] == 0;
LABEL_25:
    if ( !v4 )
      return (*(int (__thiscall **)(_DWORD, unsigned int))(*g_pMemAlloc + 20))(g_pMemAlloc, result);
  }
  return result;
}
