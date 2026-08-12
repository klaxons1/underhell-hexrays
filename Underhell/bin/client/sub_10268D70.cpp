void __thiscall sub_10268D70(_DWORD *this, wint_t C)
{
  unsigned __int16 v2; // di
  int v4; // ecx
  int v5; // eax
  _DWORD *v6; // edx
  int v7; // ebx
  int i; // edi
  const char *v9; // eax
  const char *v10; // eax
  _WORD v11[2]; // [esp+8h] [ebp-4h] BYREF

  v2 = C;
  if ( iswcntrl(C) )
  {
    sub_10236D90(this, v2);
    return;
  }
  v11[1] = 0;
  v11[0] = v2;
  (*(void (__thiscall **)(int, _WORD *, wint_t *, int))(*(_DWORD *)dword_1047CA78 + 16))(dword_1047CA78, v11, &C, 2);
  v4 = this[65];
  v5 = 0;
  if ( v4 <= 0 )
  {
LABEL_6:
    v7 = -1;
LABEL_7:
    for ( i = 0; i < this[65]; ++i )
    {
      if ( i == v7 )
        break;
      v9 = (const char *)sub_1022B4C0(
                           *(_DWORD **)(*(_DWORD *)(this[53] + 12 * *(_DWORD *)(this[62] + 4 * i)) + 312),
                           "text",
                           (int)Locale);
      if ( !_strnicmp(v9, (const char *)&C, 1u) )
        goto LABEL_18;
    }
    return;
  }
  v6 = (_DWORD *)this[62];
  while ( *v6 != this[77] )
  {
    ++v5;
    ++v6;
    if ( v5 >= v4 )
      goto LABEL_6;
  }
  v7 = v5;
  if ( v5 < 0 )
    goto LABEL_7;
  if ( v5 >= v4 )
    goto LABEL_7;
  v7 = v5 + 1;
  i = v5 + 1;
  if ( v5 + 1 == v4 )
    goto LABEL_7;
  while ( 1 )
  {
    v10 = (const char *)sub_1022B4C0(
                          *(_DWORD **)(*(_DWORD *)(this[53] + 12 * *(_DWORD *)(this[62] + 4 * i)) + 312),
                          "text",
                          (int)Locale);
    if ( !_strnicmp(v10, (const char *)&C, 1u) )
      break;
    if ( ++i == this[65] )
      goto LABEL_7;
  }
LABEL_18:
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 840))(this, *(_DWORD *)(this[62] + 4 * i));
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 804))(this, *(_DWORD *)(this[62] + 4 * i));
}
