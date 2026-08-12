char __thiscall sub_1006A5B0(int *this, int a2, int a3)
{
  int v4; // edi
  int v5; // esi
  char *v6; // eax
  char *v7; // eax
  float v8; // edx
  char *v9; // eax
  char *v10; // eax
  float v11; // edx
  char *v12; // eax
  char *v13; // eax
  double v14; // st7
  float v15; // edx
  double v16; // st5
  double v17; // st5
  double v18; // st7
  char *v19; // eax
  int v20; // eax
  char *v21; // eax
  char *v22; // eax
  float v23; // edx
  char *v24; // eax
  char *v25; // eax
  float v26; // edx
  char *v27; // eax
  int v28; // eax
  char *v29; // eax
  char *v30; // eax
  char *v31; // eax
  int v32; // eax
  const char *v33; // eax
  int v34; // eax
  const char *v36; // [esp-4h] [ebp-64h]
  float v37[16]; // [esp+Ch] [ebp-54h] BYREF
  float v38; // [esp+4Ch] [ebp-14h]
  float v39; // [esp+50h] [ebp-10h]
  int *v40; // [esp+54h] [ebp-Ch]
  int v41; // [esp+58h] [ebp-8h]
  bool v42; // [esp+5Fh] [ebp-1h]
  char v43; // [esp+6Fh] [ebp+Fh]

  v40 = this;
  memset(v37, 0, sizeof(v37));
  v37[12] = *(float *)(a3 + 4);
  v4 = -1;
  v42 = 0;
  v43 = 0;
  v5 = sub_10229C90(a2);
  if ( !v5 )
    goto LABEL_32;
  do
  {
    v6 = (char *)sub_10229A00(v5);
    if ( sub_10227C40(v6, "volume") )
    {
      v9 = (char *)sub_10229A00(v5);
      if ( sub_10227C40(v9, "pitch") )
      {
        v12 = (char *)sub_10229A00(v5);
        if ( sub_10227C40(v12, "attenuation") )
        {
          v19 = (char *)sub_10229A00(v5);
          if ( sub_10227C40(v19, "soundlevel") )
          {
            v24 = (char *)sub_10229A00(v5);
            if ( sub_10227C40(v24, "time") )
            {
              v27 = (char *)sub_10229A00(v5);
              if ( sub_10227C40(v27, "rndwave") )
              {
                v29 = (char *)sub_10229A00(v5);
                if ( sub_10227C40(v29, "position") )
                {
                  v31 = (char *)sub_10229A00(v5);
                  if ( sub_10227C40(v31, "suppress_on_restore") )
                  {
                    v36 = (const char *)sub_10229A00(v5);
                    v33 = (const char *)sub_10229A00(a2);
                    DevMsg(1, "Random Sound %s:Unknown command %s\n", v33, v36);
                  }
                  else
                  {
                    v32 = sub_1022B4C0(0, (int)Locale);
                    v42 = sub_10227CC0(v32) != 0;
                  }
                }
                else
                {
                  v30 = (char *)sub_1022B4C0(0, (int)Locale);
                  if ( sub_10227C40(v30, "random") )
                    v4 = *(_DWORD *)(a3 + 8) + sub_1022A800(0, 0);
                  else
                    v43 = 1;
                }
              }
              else
              {
                v28 = sub_10229C90(v5);
                LODWORD(v37[15]) = v28;
                for ( v37[13] = 0.0; v28; v28 = sub_1021F0F0(v28) )
                  ++LODWORD(v37[13]);
              }
            }
            else
            {
              v25 = (char *)sub_1022B4C0(0, (int)Locale);
              LODWORD(v37[4]) = sub_100DA340(v25);
              v37[5] = v26;
            }
          }
          else
          {
            v20 = sub_1022B4C0(0, (int)Locale);
            if ( sub_10227BC0(v20, "SNDLVL_", 7) )
            {
              v22 = (char *)sub_1022B4C0(0, (int)Locale);
              LODWORD(v37[10]) = sub_100DA340(v22);
              v37[11] = v23;
            }
            else
            {
              v21 = (char *)sub_1022B4C0(0, (int)Locale);
              v41 = sub_10123670(v21);
              v37[10] = (float)v41;
              v37[11] = 0.0;
            }
          }
        }
        else
        {
          v13 = (char *)sub_1022B4C0(0, (int)Locale);
          v38 = COERCE_FLOAT(sub_100DA340(v13));
          v14 = v38;
          v39 = v15;
          if ( 0.0 == v38 )
            v16 = 0.0;
          else
            v16 = 20.0 / v14 + 50.0;
          v41 = (int)v16;
          v17 = (double)(int)v16;
          v37[10] = v17;
          v18 = v14 + v39;
          if ( 0.0 == v18 )
          {
            v41 = (int)0.0;
            v37[11] = (double)(int)0.0 - v17;
          }
          else
          {
            v41 = (int)(20.0 / v18 + 50.0);
            v37[11] = (double)v41 - v17;
          }
        }
      }
      else
      {
        v10 = (char *)sub_1022B4C0(0, (int)Locale);
        LODWORD(v37[8]) = sub_100DA340(v10);
        v37[9] = v11;
      }
    }
    else
    {
      v7 = (char *)sub_1022B4C0(0, (int)Locale);
      LODWORD(v37[6]) = sub_100DA340(v7);
      v37[7] = v8;
    }
    v5 = sub_1021F0F0(v5);
  }
  while ( v5 );
  if ( v4 < 0 )
  {
LABEL_32:
    v4 = *(_DWORD *)(a3 + 16);
LABEL_33:
    LOBYTE(v34) = v43;
    goto LABEL_34;
  }
  if ( *(int *)(a3 + 12) < 0 )
    goto LABEL_33;
  v4 = *(_DWORD *)(a3 + 12);
  LOBYTE(v34) = 0;
LABEL_34:
  if ( (*((_DWORD *)off_103DC81C + 1) != v40[1] || !v42) && LODWORD(v37[13]) )
  {
    if ( v4 >= 0 || (_BYTE)v34 )
    {
      LOBYTE(v37[14]) = 0;
      if ( (_BYTE)v34 )
      {
        BYTE1(v37[14]) = 1;
        LOBYTE(v34) = sub_1006A070(v40, (char *)v37);
      }
      else if ( v4 <= 31 )
      {
        v34 = 1 << v4;
        if ( ((1 << v4) & v40[38]) != 0 )
        {
          v37[0] = *(float *)&v40[3 * v4 + 13];
          v37[1] = *(float *)&v40[3 * v4 + 14];
          v37[2] = *(float *)&v40[3 * v4 + 15];
          LOBYTE(v34) = sub_1006A070(v40, (char *)v37);
        }
      }
    }
    else
    {
      LOBYTE(v37[14]) = 1;
      LOBYTE(v34) = sub_1006A070(v40, (char *)v37);
    }
  }
  return v34;
}
