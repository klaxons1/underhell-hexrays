void __thiscall sub_1006B090(int *this, int a2, float *a3)
{
  int v4; // edx
  float v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // esi
  char *v9; // ebx
  char *v10; // eax
  char *v11; // eax
  int v12; // eax
  int v13; // edx
  char *v14; // eax
  char *v15; // eax
  char *v16; // eax
  char *v17; // eax
  char *v18; // eax
  const char *v19; // eax
  int *v20; // esi
  int v21; // eax
  int v22; // eax
  int v23; // [esp+4h] [ebp-24h] BYREF
  float v24; // [esp+8h] [ebp-20h]
  int v25; // [esp+Ch] [ebp-1Ch]
  int v26; // [esp+10h] [ebp-18h]
  int v27; // [esp+14h] [ebp-14h]
  int v28; // [esp+18h] [ebp-10h]
  _DWORD v29[2]; // [esp+1Ch] [ebp-Ch] BYREF
  int *v30; // [esp+24h] [ebp-4h]
  int v31; // [esp+34h] [ebp+Ch]

  v4 = *((_DWORD *)a3 + 2);
  v5 = *a3;
  v30 = this;
  v24 = a3[1];
  v26 = *((_DWORD *)a3 + 3);
  v6 = *((_DWORD *)a3 + 5);
  v25 = v4;
  v7 = *((_DWORD *)a3 + 4);
  v28 = v6;
  v27 = v7;
  LOBYTE(v28) = 0;
  v23 = LODWORD(v5) + 1;
  if ( LODWORD(v5) + 1 > 8 )
  {
    DevMsg("Error!  Soundscape recursion overrun!\n");
    return;
  }
  v8 = sub_10229C90(a2);
  v9 = 0;
  v31 = 0;
  if ( v8 )
  {
    while ( 1 )
    {
      v10 = (char *)sub_10229A00(v8);
      if ( sub_10227C40(v10, "volume") )
      {
        v14 = (char *)sub_10229A00(v8);
        if ( sub_10227C40(v14, "position") )
        {
          v15 = (char *)sub_10229A00(v8);
          if ( sub_10227C40(v15, "positionoverride") )
          {
            v16 = (char *)sub_10229A00(v8);
            if ( sub_10227C40(v16, "ambientpositionoverride") )
            {
              v17 = (char *)sub_10229A00(v8);
              if ( !sub_10227C40(v17, "name") )
              {
                v31 = sub_1022B4C0(0, (int)Locale);
LABEL_21:
                v9 = (char *)v31;
                goto LABEL_22;
              }
              v18 = (char *)sub_10229A00(v8);
              if ( sub_10227C40(v18, "soundlevel") )
              {
                if ( !v9 )
                  v9 = (char *)sub_10229A00(a2);
                v19 = (const char *)sub_10229A00(v8);
                DevMsg(1, "Playsoundscape %s:Unknown command %s\n", v9, v19);
                goto LABEL_21;
              }
              DevMsg(1, "soundlevel not supported on sub-soundscapes\n");
            }
            else if ( *((int *)a3 + 4) < 0 )
            {
              goto LABEL_13;
            }
          }
          else if ( *((int *)a3 + 3) < 0 )
          {
            v26 = *((_DWORD *)a3 + 2) + sub_1022A800(0, 0);
LABEL_13:
            v27 = *((_DWORD *)a3 + 2) + sub_1022A800(0, 0);
          }
        }
        else
        {
          v25 = *((_DWORD *)a3 + 2) + sub_1022A800(0, 0);
        }
      }
      else
      {
        v11 = (char *)sub_1022B4C0(0, (int)Locale);
        v12 = sub_100DA340(v11);
        v29[1] = v13;
        v29[0] = v12;
        v24 = sub_100DA430(v29) * a3[1];
      }
LABEL_22:
      v8 = sub_1021F0F0(v8);
      if ( !v8 )
      {
        if ( v9 )
        {
          v20 = v30;
          v21 = sub_100695D0(v30, v9);
          if ( v21 >= 0 && v21 < v20[10] && (v22 = *(_DWORD *)(v20[7] + 4 * v21)) != 0 )
            sub_1006AEB0(v20, v22, (int)&v23);
          else
            DevMsg(1, "Trying to play unknown soundscape %s\n", v9);
        }
        return;
      }
    }
  }
}
