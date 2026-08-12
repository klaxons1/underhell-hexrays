char __thiscall sub_102296A0(_DWORD *this, const char *Src, void *a3)
{
  void *v4; // ebx
  int v6; // edi
  char *v7; // eax
  int v8; // edi
  int v9; // eax
  int v10; // ebx
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  _BYTE *v14; // edx
  int v15[3]; // [esp+8h] [ebp-38h] BYREF
  int v16; // [esp+14h] [ebp-2Ch]
  char v17; // [esp+1Ch] [ebp-24h]
  _BYTE *v18; // [esp+38h] [ebp-8h]
  int v19; // [esp+3Ch] [ebp-4h]
  char *Srca; // [esp+48h] [ebp+8h]

  v4 = this + 2;
  *this = 0;
  this[1] = 0;
  v18 = this + 2;
  *((_BYTE *)this + 8) = 0;
  if ( !Src )
    return 0;
  if ( !a3 )
    a3 = &unk_10479718;
  v6 = strlen(Src);
  if ( v6 < 511 )
  {
    memcpy_0(v4, Src, v6 + 1);
    sub_1022EE70(v4, v6, 9);
    v7 = 0;
    Srca = 0;
    if ( !v17 )
    {
      while ( (int)*this < 64 )
      {
        v8 = 512 - (_DWORD)v7;
        v19 = v16;
        v9 = sub_1022F800(a3, (char *)this + (_DWORD)v7 + 520, 512 - (_DWORD)v7, 1);
        v10 = v9;
        if ( v9 < 0 )
          break;
        if ( v8 == v9 )
        {
          v14 = v18;
          *this = 0;
          this[1] = 0;
          *v14 = 0;
          sub_10008580(v15);
          return 0;
        }
        v11 = *this;
        if ( *this == 1 )
        {
          v12 = v16;
          this[1] = v16;
          if ( *((_BYTE *)this + v12 + 7) == 34 )
            this[1] = v12 - 1;
          this[1] -= v10;
          v13 = this[1];
          if ( v13 > v19 && *((_BYTE *)this + v13 + 7) == 34 )
            this[1] = v13 - 1;
        }
        this[v11 + 258] = (char *)this + (_DWORD)Srca + 520;
        if ( (int)++*this >= 64 )
          Warning("CCommand::Tokenize: Encountered command which overflows the argument buffer.. Clamped!\n");
        Srca += v10 + 1;
        if ( v17 )
          break;
        v7 = Srca;
      }
    }
    if ( v15[2] >= 0 )
    {
      if ( v15[0] )
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v15[0]);
    }
    return 1;
  }
  else
  {
    Warning("CCommand::Tokenize: Encountered command which overflows the tokenizer buffer.. Skipping!\n");
    return 0;
  }
}
