int __thiscall sub_10041030(_DWORD *this, _WORD *a2, char *a3, int a4)
{
  char *v4; // eax
  char *v6; // edx
  char v7; // cl
  int v8; // esi
  int v9; // edi
  int v11; // esi
  int v12; // eax
  int v13; // esi
  int v14; // edi
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // esi
  _DWORD *v19; // edi
  char String2[260]; // [esp+Ch] [ebp-104h] BYREF

  v4 = a3;
  v6 = (char *)(String2 - a3);
  do
  {
    v7 = *v4;
    v4[(_DWORD)v6] = *v4;
    ++v4;
  }
  while ( v7 );
  sub_10228240(String2, 92);
  v8 = 0;
  if ( (int)this[6] <= 0 )
  {
LABEL_7:
    if ( (_BYTE)a4
      && (a3 = 0,
          v11 = *(_DWORD *)dword_10413188,
          v12 = sub_10076640("expressions/%s.vfe", (char)String2),
          (*(int (__thiscall **)(int, int, const char *, char **, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(v11 + 276))(
            dword_10413188,
            v12,
            "GAME",
            &a3,
            0,
            0,
            0,
            0,
            0)) )
    {
      v13 = sub_100DDA40(132);
      a4 = v13;
      sub_102282F0((char *)v13, String2, 0x80u);
      *(_DWORD *)(v13 + 128) = a3;
      v14 = this[6];
      v15 = this[4];
      if ( v14 + 1 > v15 )
        sub_1010AFF0(v14 - v15 + 1);
      ++this[6];
      v16 = this[3];
      v17 = this[6] - v14 - 1;
      this[7] = v16;
      if ( v17 > 0 )
        memcpy((void *)(v16 + 4 * v14 + 4), (const void *)(v16 + 4 * v14), 4 * v17);
      v18 = a4;
      v19 = (_DWORD *)(this[3] + 4 * v14);
      if ( v19 )
        *v19 = a4;
      if ( a2 )
        sub_10040D20(a2, *(_DWORD *)(v18 + 128));
      return *(_DWORD *)(v18 + 128);
    }
    else
    {
      return 0;
    }
  }
  else
  {
    while ( 1 )
    {
      v9 = *(_DWORD *)(this[3] + 4 * v8);
      if ( v9 )
      {
        if ( !_stricmp((const char *)v9, String2) )
          break;
      }
      if ( ++v8 >= this[6] )
        goto LABEL_7;
    }
    if ( a2 )
      sub_10040D20(a2, *(_DWORD *)(v9 + 128));
    return *(_DWORD *)(v9 + 128);
  }
}
