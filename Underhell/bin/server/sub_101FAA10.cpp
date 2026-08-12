void __thiscall sub_101FAA10(char *this, int a2)
{
  char *v2; // edi
  int v3; // eax
  float *v4; // esi
  _DWORD *v5; // eax
  _DWORD *v6; // ebx
  bool v7; // zf
  int (__thiscall *v8)(_DWORD *); // eax
  float *v9; // ecx
  float *v10; // eax
  double v11; // st7
  double v12; // st7
  double v13; // st7
  double v14; // st6
  double v15; // st5
  int v16; // eax
  int *v17; // ecx
  float *v18; // ebx
  int v19; // eax
  int v20; // edi
  int v21; // eax
  _DWORD *v22; // eax
  int v23; // eax
  _DWORD *v24; // eax
  int v25; // eax
  _DWORD *v26; // eax
  int v27; // eax
  _DWORD *v28; // eax
  _DWORD *v29; // edx
  int *v30; // ecx
  float v31[3]; // [esp+4h] [ebp-24h] BYREF
  int v32; // [esp+10h] [ebp-18h]
  char *v33; // [esp+14h] [ebp-14h]
  int v34; // [esp+18h] [ebp-10h]
  _DWORD *v35; // [esp+1Ch] [ebp-Ch]
  float v36; // [esp+20h] [ebp-8h]
  char v37; // [esp+27h] [ebp-1h]

  v2 = this;
  v33 = this;
  CVProfile::EnterScope(g_VProfCurrentProfile, "FinishLagCompensation", 0, "Networking", 0, 3);
  if ( v2[688] )
  {
    v3 = 1;
    v34 = 1;
    if ( *(int *)(dword_106B31C8 + 20) >= 1 )
    {
      v4 = (float *)(v2 + 5896);
      while ( 1 )
      {
        if ( ((1 << ((v3 - 1) & 0x1F)) & *(_DWORD *)&v2[4 * ((unsigned int)(v3 - 1) >> 5) + 684]) != 0 )
        {
          v5 = (_DWORD *)sub_1025FB50(v3);
          v6 = v5;
          v35 = v5;
          if ( v5 )
          {
            v7 = (*(_DWORD *)(v4 - 1301) & 0x400) == 0;
            v37 = 0;
            if ( !v7 )
            {
              v8 = *(int (__thiscall **)(_DWORD *))(v5[80] + 4);
              v37 = 1;
              v9 = (float *)v8(v6 + 80);
              if ( *v9 == *(v4 - 2) && v9[1] == *(v4 - 1) && v9[2] == *v4 )
              {
                v10 = (float *)(*(int (__thiscall **)(_DWORD *))(v6[80] + 8))(v6 + 80);
                if ( sub_10018CD0(v10, v4 + 1) )
                  sub_100D69D0(v6, (int)(v4 - 1294), (int)(v4 - 1291));
              }
            }
            if ( (*(_DWORD *)(v4 - 1301) & 0x200) != 0 )
            {
              v11 = *(v4 - 5);
              v37 = 1;
              if ( *((float *)v6 + 182) == v11 && *((float *)v6 + 183) == *(v4 - 4) && *((float *)v6 + 184) == *(v4 - 3) )
                sub_100E11A0((int)v6, v4 - 1297);
            }
            if ( (*(_DWORD *)(v4 - 1301) & 0x100) != 0 )
            {
              v12 = *((float *)v6 + 179);
              v37 = 1;
              v13 = v12 - *(v4 - 8);
              v14 = *((float *)v6 + 180) - *(v4 - 7);
              v15 = *((float *)v6 + 181) - *(v4 - 6);
              if ( v14 * v14 + v13 * v13 + v15 * v15 < 4096.0 )
              {
                v31[0] = v13 + *(v4 - 1300);
                v31[1] = v14 + *(v4 - 1299);
                v31[2] = v15 + *(v4 - 1298);
                sub_101F96A0((int)v6, v31);
                v6 = v35;
              }
            }
            if ( (*(_DWORD *)(v4 - 1301) & 0x800) != 0 )
            {
              sub_100C1170((int)v6, *((_DWORD *)v4 - 1227));
              v16 = v6[226];
              v36 = *(v4 - 1226);
              if ( v16 != LODWORD(v36) )
              {
                if ( *((_BYTE *)v6 + 84) )
                {
                  *((_BYTE *)v6 + 88) |= 1u;
                }
                else
                {
                  v17 = (int *)v6[6];
                  if ( v17 )
                    sub_100194B0(v17, 904);
                }
                *((float *)v6 + 226) = v36;
              }
              v32 = v6[283];
              v36 = 0.0;
              if ( v32 > 0 )
              {
                v18 = v4 - 1284;
                do
                {
                  v19 = sub_100C5020(v35, SLODWORD(v36));
                  v20 = v19;
                  if ( v19 )
                  {
                    if ( *(_DWORD *)(v19 + 12) != *((_DWORD *)v18 - 2) )
                    {
                      v21 = *(_DWORD *)(v19 + 72);
                      if ( v21 )
                      {
                        if ( *(_BYTE *)(v21 + 84) )
                        {
                          *(_BYTE *)(v21 + 88) |= 1u;
                        }
                        else
                        {
                          v22 = *(_DWORD **)(v21 + 24);
                          if ( v22 )
                          {
                            *v22 |= 0x101u;
                            *(_WORD *)(sub_10153460(v22) + 2) = 0;
                          }
                        }
                      }
                      *(float *)(v20 + 12) = *(v18 - 2);
                    }
                    if ( *(_DWORD *)(v20 + 60) != *(_DWORD *)v18 )
                    {
                      v23 = *(_DWORD *)(v20 + 72);
                      if ( v23 )
                      {
                        if ( *(_BYTE *)(v23 + 84) )
                        {
                          *(_BYTE *)(v23 + 88) |= 1u;
                        }
                        else
                        {
                          v24 = *(_DWORD **)(v23 + 24);
                          if ( v24 )
                          {
                            *v24 |= 0x101u;
                            *(_WORD *)(sub_10153460(v24) + 2) = 0;
                          }
                        }
                      }
                      *(float *)(v20 + 60) = *v18;
                    }
                    if ( *(_DWORD *)(v20 + 8) != *((_DWORD *)v18 - 3) )
                    {
                      v25 = *(_DWORD *)(v20 + 72);
                      if ( v25 )
                      {
                        if ( *(_BYTE *)(v25 + 84) )
                        {
                          *(_BYTE *)(v25 + 88) |= 1u;
                        }
                        else
                        {
                          v26 = *(_DWORD **)(v25 + 24);
                          if ( v26 )
                          {
                            *v26 |= 0x101u;
                            *(_WORD *)(sub_10153460(v26) + 2) = 0;
                          }
                        }
                      }
                      *(float *)(v20 + 8) = *(v18 - 3);
                    }
                    if ( *(_DWORD *)(v20 + 20) != *((_DWORD *)v18 - 1) )
                    {
                      v27 = *(_DWORD *)(v20 + 72);
                      if ( v27 )
                      {
                        if ( *(_BYTE *)(v27 + 84) )
                        {
                          *(_BYTE *)(v27 + 88) |= 1u;
                        }
                        else
                        {
                          v28 = *(_DWORD **)(v27 + 24);
                          if ( v28 )
                          {
                            *v28 |= 0x101u;
                            *(_WORD *)(sub_10153460(v28) + 2) = 0;
                          }
                        }
                      }
                      *(float *)(v20 + 20) = *(v18 - 1);
                    }
                  }
                  v18 += 4;
                  ++LODWORD(v36);
                }
                while ( SLODWORD(v36) < v32 );
                v6 = v35;
              }
            }
            else if ( !v37 )
            {
              goto LABEL_68;
            }
            v29 = (_DWORD *)v6[32];
            v35 = *((_DWORD **)v4 - 1288);
            if ( v29 != v35 )
            {
              if ( *((_BYTE *)v6 + 84) )
              {
                *((_BYTE *)v6 + 88) |= 1u;
              }
              else
              {
                v30 = (int *)v6[6];
                if ( v30 )
                  sub_100194B0(v30, 128);
              }
              *((float *)v6 + 32) = *(float *)&v35;
            }
          }
        }
LABEL_68:
        v3 = v34 + 1;
        v4 += 76;
        v34 = v3;
        if ( v3 > *(_DWORD *)(dword_106B31C8 + 20) )
          break;
        v2 = v33;
      }
    }
  }
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
