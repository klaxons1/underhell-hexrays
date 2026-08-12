int __thiscall sub_100F2A50(_DWORD *this, _WORD *a2, char *String2, char a4)
{
  int v5; // edi
  int v6; // ebx
  int v8; // ebx
  int v9; // eax
  int v10; // edi
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  _DWORD *v14; // edi
  int v15; // [esp+Ch] [ebp-4h] BYREF

  v5 = 0;
  if ( (int)this[6] <= 0 )
  {
LABEL_5:
    if ( !a4 )
      return 0;
    v15 = 0;
    v8 = *(_DWORD *)dword_106B31D8;
    v9 = sub_1025F440("expressions/%s.vfe", (char)String2);
    if ( !(*(int (__thiscall **)(int, int, const char *, int *, _DWORD, int, _DWORD, _DWORD, _DWORD))(v8 + 276))(
            dword_106B31D8,
            v9,
            "GAME",
            &v15,
            0,
            1,
            0,
            0,
            0) )
      return 0;
    v6 = sub_10184390(132);
    sub_104299C0((char *)v6, String2, 0x80u);
    *(_DWORD *)(v6 + 128) = v15;
    v10 = this[6];
    v11 = this[4];
    if ( v10 + 1 > v11 )
      sub_102ABFC0(v10 - v11 + 1);
    ++this[6];
    v12 = this[3];
    v13 = this[6] - v10 - 1;
    this[7] = v12;
    if ( v13 > 0 )
      memcpy((void *)(v12 + 4 * v10 + 4), (const void *)(v12 + 4 * v10), 4 * v13);
    v14 = (_DWORD *)(this[3] + 4 * v10);
    if ( v14 )
      *v14 = v6;
  }
  else
  {
    while ( 1 )
    {
      v6 = *(_DWORD *)(this[3] + 4 * v5);
      if ( v6 )
      {
        if ( !_stricmp((const char *)v6, String2) )
          break;
      }
      if ( ++v5 >= this[6] )
        goto LABEL_5;
    }
  }
  if ( a2 )
    sub_100F2580(a2, *(_DWORD *)(v6 + 128));
  return *(_DWORD *)(v6 + 128);
}
