char *__thiscall sub_10229A30(_BYTE *this, int a2, _BYTE *a3, _BYTE *a4)
{
  char *v6; // eax
  char v7; // al
  int v8; // eax
  int v9; // ebx
  char *i; // esi
  char v11; // al
  char v12; // [esp+17h] [ebp+Bh]
  char v13; // [esp+1Bh] [ebp+Fh]

  *a3 = 0;
  *a4 = 0;
  if ( *(_BYTE *)(a2 + 20) )
    return 0;
  sub_1022E840(a2);
  if ( *(_BYTE *)(a2 + 20) )
    return 0;
  while ( (unsigned __int8)sub_1022EF90(a2) )
  {
    sub_1022E840(a2);
    if ( *(_BYTE *)(a2 + 20) )
      return 0;
  }
  v6 = (char *)sub_1022E450(1, 0);
  if ( !v6 )
    return 0;
  v7 = *v6;
  if ( v7 == 34 )
  {
    *a3 = 1;
    if ( this[17] )
      v8 = sub_1022E1D0();
    else
      v8 = sub_1022E1E0();
    sub_1022F190(v8, byte_10479878, 1024);
    return byte_10479878;
  }
  else if ( v7 == 123 || v7 == 125 )
  {
    byte_10479878[0] = v7;
    byte_10479879 = 0;
    sub_1022E490(1, 1);
    return byte_10479878;
  }
  else
  {
    v9 = 0;
    v12 = 0;
    v13 = 0;
    for ( i = (char *)sub_1022E450(1, 0); i; i = (char *)sub_1022E450(1, 0) )
    {
      v11 = *i;
      if ( !*i || v11 == 34 || v11 == 123 || v11 == 125 )
        break;
      if ( v11 == 91 )
        v13 = 1;
      if ( v11 == 93 && v13 )
        *a4 = 1;
      if ( isspace(*i) )
        break;
      if ( v9 >= 1023 )
      {
        if ( !v12 )
        {
          v12 = 1;
          sub_10229950((int)&dword_103FC1A0, " ReadToken overflow");
        }
      }
      else
      {
        byte_10479878[v9++] = *i;
      }
      sub_1022E490(1, 1);
    }
    byte_10479878[v9] = 0;
    return byte_10479878;
  }
}
