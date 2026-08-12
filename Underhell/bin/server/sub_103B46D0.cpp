char __thiscall sub_103B46D0(_DWORD *this)
{
  bool v1; // zf
  _DWORD *v2; // ebx
  char *v3; // eax
  char *v4; // eax
  int v5; // esi
  int v6; // edi
  int v7; // eax
  int v8; // ecx
  float *v9; // eax
  _DWORD *v10; // ecx
  int v11; // eax
  _DWORD *v12; // ecx
  int v13; // ebx
  int v14; // eax
  double v15; // st7
  char v16; // bl
  double v17; // st7
  int v18; // esi
  _DWORD *v19; // ecx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // ecx
  double v24; // st7
  double v25; // st6
  double v26; // st5
  double v27; // st5
  int v28; // ecx
  int v29; // eax
  int v30; // ecx
  int v31; // ebx
  int v32; // eax
  float *v33; // ebx
  int v34; // eax
  float *v35; // eax
  double v36; // st3
  double v37; // st1
  double v38; // st5
  double v39; // st1
  double v40; // st7
  float v41; // ecx
  char *v42; // eax
  int v43; // eax
  char *v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  char *v48; // eax
  float *v49; // eax
  char *v51; // eax
  char *v52; // eax
  int v53; // [esp-14h] [ebp-15Ch]
  char Buffer[256]; // [esp+4h] [ebp-144h] BYREF
  int v55[2]; // [esp+104h] [ebp-44h] BYREF
  float v56; // [esp+10Ch] [ebp-3Ch] BYREF
  float v57; // [esp+110h] [ebp-38h]
  float v58; // [esp+114h] [ebp-34h]
  float i; // [esp+118h] [ebp-30h]
  int v60; // [esp+11Ch] [ebp-2Ch]
  int v61; // [esp+120h] [ebp-28h]
  float v62; // [esp+124h] [ebp-24h] BYREF
  float v63; // [esp+128h] [ebp-20h]
  float v64; // [esp+12Ch] [ebp-1Ch]
  float v65; // [esp+130h] [ebp-18h]
  float v66; // [esp+134h] [ebp-14h] BYREF
  float v67; // [esp+138h] [ebp-10h]
  float v68; // [esp+13Ch] [ebp-Ch]
  char v69; // [esp+143h] [ebp-5h]
  _DWORD *v70; // [esp+144h] [ebp-4h]

  v1 = *(_DWORD *)(dword_106934A4 + 48) == 0;
  v2 = this;
  v70 = this;
  if ( !v1 )
  {
    v3 = sub_1001E280(Buffer, "[Nav] %s", "Strider overriding DoFindPathToPos\n");
    sub_10029660((_DWORD *)v2[1], (int)v3);
  }
  if ( sub_10080A30((int)v2) )
  {
    if ( *(_DWORD *)(dword_106934A4 + 48) )
    {
      v4 = sub_1001E280(Buffer, "[Nav] %s", "Strider base pathfind worked\n");
      sub_10029660((_DWORD *)v2[1], (int)v4);
    }
    v55[0] = *(_DWORD *)v2[9];
    v5 = v55[0];
    v6 = sub_100B99B0(v55);
    v7 = *(_DWORD *)(v5 + 40);
    if ( v7 )
    {
      v8 = *(_DWORD *)(v7 + 36);
      if ( *(_DWORD *)(v5 + 36) == v8 && (*(_BYTE *)(v5 + 32) & 0x2A) == 0 && *(_DWORD *)(v7 + 16) != -1 && v8 == v2[3] )
      {
        v9 = (float *)sub_10019640((_DWORD *)v2[1]);
        v66 = *v9;
        v67 = v9[1];
        v53 = *(_DWORD *)(v5 + 40);
        v68 = v9[2];
        sub_10424670(&v66, v5, v53, &v56, 0);
        v10 = (_DWORD *)v2[9];
        v65 = *(float *)v2[1];
        v11 = sub_1007E430(v10);
        (*(void (__thiscall **)(_DWORD, int, float *))(LODWORD(v65) + 2040))(v2[1], v11, &v56);
        v12 = (_DWORD *)v2[9];
        v13 = *(_DWORD *)v2[1];
        v14 = sub_1007E430(v12);
        (*(void (__thiscall **)(_DWORD, int, float *))(v13 + 2040))(v70[1], v14, &v66);
        v62 = *(float *)v5 - v56;
        v63 = *(float *)(v5 + 4) - v57;
        v15 = *(float *)(v5 + 8) - v58;
        v64 = v15;
        sub_100D7A40(&v62);
        if ( v15 <= 0.1 )
        {
          v69 = 0;
          v16 = 0;
        }
        else
        {
          v16 = 1;
        }
        v62 = v66 - v56;
        v63 = v67 - v57;
        v17 = v68 - v58;
        v64 = v17;
        sub_100D7A40(&v62);
        v65 = v17;
        sub_10050F10(v70);
        if ( v16 && v17 * 0.5 > v65 )
          sub_100A6890((_DWORD *)v70[9]);
        v2 = v70;
      }
    }
    if ( *(_DWORD *)(v6 + 16) == -1 )
    {
      v18 = *(_DWORD *)(v6 + 44);
      if ( v18 )
      {
        if ( *(_DWORD *)(v18 + 16) == -1 )
        {
          v19 = *(_DWORD **)(v18 + 44);
          if ( v19 )
          {
            sub_1007DC70(v19, v6);
            v20 = *(_DWORD *)(v18 + 40);
            if ( v20 )
              *(_DWORD *)(v20 + 44) = *(_DWORD *)(v18 + 44);
            v21 = *(_DWORD *)(v18 + 44);
            if ( v21 )
              *(_DWORD *)(v21 + 40) = *(_DWORD *)(v18 + 40);
            sub_1042FBE0(v18);
            v18 = *(_DWORD *)(v6 + 44);
          }
        }
        if ( v18 )
        {
          v22 = *(_DWORD *)(v18 + 16);
          if ( v22 != -1 )
          {
            v23 = v2[8];
            if ( v22 < 0 || v22 >= *(_DWORD *)(v23 + 4) )
            {
              ++dword_10691DE0;
              v61 = 0;
            }
            else
            {
              v61 = *(_DWORD *)(*(_DWORD *)(v23 + 8) + 4 * v22);
            }
            v24 = *(float *)v6 - *(float *)v18;
            v25 = *(float *)(v6 + 4) - *(float *)(v18 + 4);
            v66 = flt_10689730;
            v26 = *(float *)(v6 + 8);
            v67 = flt_10689734;
            v27 = v26 - *(float *)(v18 + 8);
            v28 = v61;
            v29 = 0;
            v68 = flt_10689738;
            v65 = NAN;
            v60 = 0;
            for ( i = v24 * v24 + v25 * v25 + v27 * v27; v29 < *(_DWORD *)(v61 + 84); v60 = v29 )
            {
              v30 = *(_DWORD *)(*(_DWORD *)(v28 + 72) + 4 * v29);
              if ( (*(_BYTE *)(v30 + 14) & 2) == 0 && (*(_BYTE *)(*(_DWORD *)(v2[1] + 1676) + v30 + 4) & 4) != 0 )
              {
                v31 = v2[8];
                v32 = sub_10074630((__int16 *)v30, *(_DWORD *)(v18 + 16));
                if ( v32 < 0 || v32 >= *(_DWORD *)(v31 + 4) )
                {
                  ++dword_10691DE0;
                  v55[1] = 0;
                  v33 = 0;
                }
                else
                {
                  v33 = *(float **)(*(_DWORD *)(v31 + 8) + 4 * v32);
                }
                v34 = *((_DWORD *)v33 + 24);
                if ( v34 )
                {
                  if ( *(_WORD *)(v34 + 816) == 904 )
                  {
                    v35 = sub_1008D160((int)v33, &v56, *(_DWORD *)(v70[1] + 1676));
                    sub_10424670(v6, v18, v35, &v62, 0);
                    v36 = *(float *)(v6 + 8) - v64;
                    v37 = *(float *)(v6 + 4) - v63;
                    v38 = v37 * v37;
                    v39 = *(float *)v6 - v62;
                    v40 = v39 * v39 + v38 + v36 * v36;
                    if ( i > v40 )
                    {
                      v41 = *v33;
                      i = v40;
                      v65 = v41;
                      v66 = v62;
                      v67 = v63;
                      v68 = v64;
                    }
                  }
                }
                v2 = v70;
              }
              v28 = v61;
              v29 = v60 + 1;
            }
            if ( v66 == flt_10689730 && v67 == flt_10689734 && v68 == flt_10689738 )
            {
              if ( *(_DWORD *)(dword_106934A4 + 48) )
              {
                v42 = sub_1001E280(Buffer, "[Nav] %s", "Strider resetting goal to last node waypoint\n");
                sub_10029660((_DWORD *)v2[1], (int)v42);
              }
            }
            else
            {
              v43 = *(_DWORD *)(v18 + 44);
              if ( !v43 || *(_DWORD *)(v43 + 16) != LODWORD(v65) )
              {
                if ( *(_DWORD *)(dword_106934A4 + 48) )
                {
                  v48 = sub_1001E280(Buffer, "[Nav] %s", "Strider resetting goal to nearest point on graph\n");
                  sub_10029660((_DWORD *)v2[1], (int)v48);
                }
                *(float *)v6 = v66;
                *(float *)(v6 + 4) = v67;
                *(float *)(v6 + 8) = v68;
                goto LABEL_66;
              }
              if ( *(_DWORD *)(dword_106934A4 + 48) )
              {
                v44 = sub_1001E280(Buffer, "[Nav] %s", "Strider resetting goal to nearest point on graph, on node\n");
                sub_10029660((_DWORD *)v2[1], (int)v44);
              }
              *(float *)v18 = v66;
              *(float *)(v18 + 4) = v67;
              *(float *)(v18 + 8) = v68;
            }
            v45 = *(_DWORD *)(v18 + 40);
            if ( v45 )
              *(_DWORD *)(v45 + 44) = 0;
            *(_DWORD *)(v18 + 32) |= 8u;
            *(_DWORD *)(v18 + 40) = 0;
            v46 = *(_DWORD *)(v6 + 40);
            if ( v46 )
              *(_DWORD *)(v46 + 44) = *(_DWORD *)(v6 + 44);
            v47 = *(_DWORD *)(v6 + 44);
            if ( v47 )
              *(_DWORD *)(v47 + 40) = *(_DWORD *)(v6 + 40);
            sub_1042FBE0(v6);
LABEL_66:
            v49 = (float *)sub_100B99B0((int *)v2[9]);
            sub_100A60D0(v2[9], v49);
            return 1;
          }
        }
      }
    }
    else if ( *(_DWORD *)(dword_106934A4 + 48) )
    {
      v51 = sub_1001E280(Buffer, "[Nav] %s", "Goal ended on node\n");
      sub_10029660((_DWORD *)v2[1], (int)v51);
    }
    return 1;
  }
  else
  {
    if ( *(_DWORD *)(dword_106934A4 + 48) )
    {
      v52 = sub_1001E280(Buffer, "[Nav] %s", "Strider base pathfind failed\n");
      sub_10029660((_DWORD *)v2[1], (int)v52);
    }
    return 0;
  }
}
