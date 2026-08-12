_DWORD *__thiscall sub_102306B0(int this)
{
  char *v2; // eax
  _DWORD *v3; // esi
  _DWORD *v4; // eax
  _DWORD *v5; // edi
  char *v6; // eax
  _DWORD *v7; // esi
  char *v8; // eax
  _DWORD *v9; // esi
  _DWORD v11[514]; // [esp+14h] [ebp-808h] BYREF

  v2 = *(char **)(this + 804);
  if ( !v2 )
    v2 = (char *)String;
  v3 = sub_1012BF20(&dword_1069E3E0, 0, v2, 0, 0, 0, 0);
  if ( v3 )
  {
    while ( 1 )
    {
      v4 = (_DWORD *)sub_100D7680((int)v3);
      v5 = v4;
      if ( v4 )
      {
        if ( sub_10230620((_BYTE *)this, v4) )
          return v5;
      }
      v6 = *(char **)(this + 804);
      if ( !v6 )
        v6 = (char *)String;
      v3 = sub_1012BF20(&dword_1069E3E0, (int)v3, v6, 0, 0, 0, 0);
      if ( !v3 )
        goto LABEL_9;
    }
  }
  else
  {
LABEL_9:
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    sub_10261520(this + 580, *(float *)(this + 808), 0x2000);
    v7 = (_DWORD *)sub_1025EEE0(v11);
    if ( v7 )
    {
      while ( 1 )
      {
        v8 = *(char **)(this + 804);
        if ( !v8 )
          v8 = (char *)String;
        if ( (char *)v7[23] == v8 || sub_100D6240(v7, v8) )
        {
          v9 = (_DWORD *)sub_100D7680((int)v7);
          if ( sub_10230620((_BYTE *)this, v9) )
            break;
        }
        ++v11[0];
        v7 = (_DWORD *)sub_1025EEE0(v11);
        if ( !v7 )
          return 0;
      }
      return v9;
    }
    else
    {
      return 0;
    }
  }
}
