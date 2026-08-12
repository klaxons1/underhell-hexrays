char *__cdecl asctime(const struct tm *Tm)
{
  char *v1; // edi
  int v2; // eax
  int v3; // esi
  void *v4; // eax
  char *v5; // ecx
  char *result; // eax
  unsigned int tm_mon; // edi
  int tm_mday; // edx
  bool v9; // zf
  unsigned int v10; // edx
  unsigned int tm_wday; // eax
  int v12; // edx
  int i; // eax
  char v14; // dl
  char v15; // dl
  char v16; // dl
  char v17; // dl
  char v18; // dl
  int v19; // edx
  int v20; // [esp+Ch] [ebp-8h]
  char *v21; // [esp+10h] [ebp-4h]

  v1 = (char *)&unk_10481AF8;
  v21 = (char *)&unk_10481AF8;
  v2 = _getptd_noexit();
  v3 = v2;
  if ( v2 )
  {
    if ( *(_DWORD *)(v2 + 60) || (v4 = sub_100DD9C0(26, 1), (*(_DWORD *)(v3 + 60) = v4) != 0) )
    {
      v1 = *(char **)(v3 + 60);
      v21 = v1;
    }
  }
  v5 = v1;
  if ( !v1 )
    goto LABEL_6;
  *v1 = 0;
  if ( !Tm )
    goto LABEL_6;
  if ( Tm->tm_year < 0 )
    goto LABEL_6;
  tm_mon = Tm->tm_mon;
  if ( tm_mon >= 0xC )
    goto LABEL_6;
  if ( Tm->tm_hour >= 0x18u )
    goto LABEL_6;
  if ( Tm->tm_min >= 0x3Cu )
    goto LABEL_6;
  if ( Tm->tm_sec >= 0x3Cu )
    goto LABEL_6;
  tm_mday = Tm->tm_mday;
  if ( tm_mday < 1 )
    goto LABEL_6;
  if ( dword_103FE578[tm_mon] - dword_103FE574[tm_mon] < tm_mday )
  {
    v10 = (Tm->tm_year + 1900) & 0x80000003;
    v9 = v10 == 0;
    v20 = Tm->tm_year + 1900;
    if ( v20 < 0 )
      v9 = (((_BYTE)v10 - 1) | 0xFFFFFFFC) == -1;
    if ( (!v9 || !((Tm->tm_year + 1900) % 100)) && v20 % 400 || tm_mon != 1 || Tm->tm_mday > 29 )
      goto LABEL_6;
  }
  tm_wday = Tm->tm_wday;
  if ( tm_wday <= 6 )
  {
    v12 = 3 * tm_wday;
    for ( i = 0; i < 3; ++i )
    {
      *v5 = byte_103B3918[v12 + i];
      v21[i + 4] = byte_103B3930[3 * tm_mon + i];
      ++v5;
    }
    *v5 = 32;
    v5[4] = 32;
    v14 = Tm->tm_mday % 10;
    v5[5] = Tm->tm_mday / 10 + 48;
    v5[6] = v14 + 48;
    v5[7] = 32;
    v15 = Tm->tm_hour % 10;
    v5[8] = Tm->tm_hour / 10 + 48;
    v5[9] = v15 + 48;
    v5[10] = 58;
    v16 = Tm->tm_min % 10;
    v5[11] = Tm->tm_min / 10 + 48;
    v5[12] = v16 + 48;
    v5[13] = 58;
    v17 = Tm->tm_sec % 10;
    v5[14] = Tm->tm_sec / 10 + 48;
    v5[15] = v17 + 48;
    v5[16] = 32;
    v18 = (Tm->tm_year / 100 + 19) % 10;
    v5[17] = (Tm->tm_year / 100 + 19) / 10 + 48;
    v5[18] = v18 + 48;
    v19 = Tm->tm_year % 100;
    v5[19] = v19 / 10 + 48;
    result = v21;
    v5[20] = v19 % 10 + 48;
    *(_WORD *)(v5 + 21) = 10;
  }
  else
  {
LABEL_6:
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 0;
  }
  return result;
}
