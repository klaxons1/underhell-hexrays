void __thiscall sub_1006AB60(int *this, int a2, int a3)
{
  int v3; // ebx
  int v4; // edi
  int v5; // esi
  char *v6; // eax
  char *v7; // eax
  int v8; // edx
  char *v9; // eax
  char *v10; // eax
  int v11; // eax
  int v12; // edx
  char *v13; // eax
  char *v14; // eax
  char *v15; // eax
  char *v16; // eax
  int v17; // edx
  bool v18; // c3
  double v19; // st7
  char *v20; // eax
  int v21; // eax
  int v22; // edx
  char *v23; // eax
  int v24; // eax
  char *v25; // eax
  char *v26; // eax
  int v27; // edx
  char *v28; // eax
  int v29; // eax
  const char *v30; // eax
  const char *v31; // [esp+Ch] [ebp-4Ch]
  _DWORD v32[2]; // [esp+1Ch] [ebp-3Ch] BYREF
  _DWORD v33[2]; // [esp+24h] [ebp-34h] BYREF
  _DWORD v34[2]; // [esp+2Ch] [ebp-2Ch] BYREF
  _DWORD v35[2]; // [esp+34h] [ebp-24h] BYREF
  _DWORD v36[2]; // [esp+3Ch] [ebp-1Ch] BYREF
  int *v37; // [esp+44h] [ebp-14h]
  char *String1; // [esp+48h] [ebp-10h]
  float v39; // [esp+4Ch] [ebp-Ch]
  int v40; // [esp+50h] [ebp-8h]
  bool v41; // [esp+57h] [ebp-1h]

  v39 = 0.0;
  v37 = this;
  v3 = 74;
  String1 = 0;
  v40 = 100;
  v4 = -1;
  v41 = 0;
  v5 = sub_10229C90(a2);
  if ( !v5 )
    goto LABEL_23;
  do
  {
    v6 = (char *)sub_10229A00(v5);
    if ( sub_10227C40(v6, "volume") )
    {
      v9 = (char *)sub_10229A00(v5);
      if ( sub_10227C40(v9, "pitch") )
      {
        v13 = (char *)sub_10229A00(v5);
        if ( sub_10227C40(v13, "wave") )
        {
          v14 = (char *)sub_10229A00(v5);
          if ( sub_10227C40(v14, "position") )
          {
            v15 = (char *)sub_10229A00(v5);
            if ( sub_10227C40(v15, "attenuation") )
            {
              v23 = (char *)sub_10229A00(v5);
              if ( sub_10227C40(v23, "soundlevel") )
              {
                v28 = (char *)sub_10229A00(v5);
                if ( sub_10227C40(v28, "suppress_on_restore") )
                {
                  v31 = (const char *)sub_10229A00(v5);
                  v30 = (const char *)sub_10229A00(a2);
                  DevMsg(1, "Ambient %s:Unknown command %s\n", v30, v31);
                }
                else
                {
                  v29 = sub_1022B4C0(0, (int)Locale);
                  v41 = sub_10227CC0(v29) != 0;
                }
              }
              else
              {
                v24 = sub_1022B4C0(0, (int)Locale);
                if ( sub_10227BC0(v24, "SNDLVL_", 7) )
                {
                  v26 = (char *)sub_1022B4C0(0, (int)Locale);
                  v32[0] = sub_100DA340(v26);
                  v32[1] = v27;
                  v3 = (int)sub_100DA430(v32);
                }
                else
                {
                  v25 = (char *)sub_1022B4C0(0, (int)Locale);
                  v3 = sub_10123670(v25);
                }
              }
            }
            else
            {
              v16 = (char *)sub_1022B4C0(0, (int)Locale);
              v34[0] = sub_100DA340(v16);
              v34[1] = v17;
              v18 = 0.0 == sub_100DA430(v34);
              v19 = 0.0;
              if ( !v18 )
              {
                v20 = (char *)sub_1022B4C0(0, (int)Locale);
                v21 = sub_100DA340(v20);
                v33[1] = v22;
                v33[0] = v21;
                v19 = 20.0 / sub_100DA430(v33) + 50.0;
              }
              v3 = (int)v19;
            }
          }
          else
          {
            v4 = *(_DWORD *)(a3 + 8) + sub_1022A800(0, 0);
          }
        }
        else
        {
          String1 = (char *)sub_1022B4C0(0, (int)Locale);
        }
      }
      else
      {
        v10 = (char *)sub_1022B4C0(0, (int)Locale);
        v11 = sub_100DA340(v10);
        v35[1] = v12;
        v35[0] = v11;
        v40 = (int)sub_100DA430(v35);
      }
    }
    else
    {
      v7 = (char *)sub_1022B4C0(0, (int)Locale);
      v36[0] = sub_100DA340(v7);
      v36[1] = v8;
      v39 = sub_100DA430(v36) * *(float *)(a3 + 4);
    }
    v5 = sub_1021F0F0(v5);
  }
  while ( v5 );
  if ( v4 >= 0 )
  {
    if ( *(int *)(a3 + 12) >= 0 )
      v4 = *(_DWORD *)(a3 + 12);
  }
  else
  {
LABEL_23:
    v4 = *(_DWORD *)(a3 + 16);
  }
  if ( (*((_DWORD *)off_103DC81C + 1) != v37[1] || !v41) && 0.0 != v39 && String1 )
  {
    if ( v4 >= 0 )
    {
      if ( v4 <= 31 && ((1 << v4) & v37[38]) != 0 )
        sub_1006A990(v37, String1, 0, v39, v3, v40, (float *)&v37[3 * v4 + 13]);
    }
    else
    {
      sub_1006A990(v37, String1, 1, v39, 75, v40, &flt_10459240);
    }
  }
}
