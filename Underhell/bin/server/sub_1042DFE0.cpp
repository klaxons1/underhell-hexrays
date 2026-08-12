void __thiscall sub_1042DFE0(int this, char *Str)
{
  char v3; // al
  char *v4; // esi
  int v5; // eax
  char *i; // edi
  size_t v7; // eax

  v3 = *(_BYTE *)(this + 21);
  if ( (v3 & 1) != 0 )
  {
    v4 = Str;
    if ( Str )
    {
      if ( (v3 & 0x10) == 0 && *(int *)(this + 24) > 0 )
      {
        v5 = *(_DWORD *)(this + 16);
        if ( v5 && *(_BYTE *)(v5 - *(_DWORD *)(this + 32) + *(_DWORD *)this - 1) == 10 )
          sub_10088130((_DWORD *)this);
        for ( i = strchr(Str, 10); i; i = strchr(i + 1, 10) )
        {
          sub_1042DD00(this, v4, i - v4 + 1);
          v4 = i + 1;
          if ( !i[1] )
            break;
          sub_10088130((_DWORD *)this);
        }
      }
      v7 = strlen(v4);
      if ( v7 )
        sub_1042DD00(this, v4, v7);
    }
  }
  else if ( Str )
  {
    sub_1042DD00(this, Str, strlen(Str) + 1);
  }
  else
  {
    sub_100877F0((_DWORD *)this, 0);
  }
}
