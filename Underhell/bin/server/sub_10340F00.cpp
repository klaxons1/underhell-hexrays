int __usercall sub_10340F00@<eax>(int *a1@<ecx>, int a2@<edi>, double a3@<st0>)
{
  int result; // eax
  int v5; // eax
  int v6; // eax
  bool v7; // zf
  unsigned int v8; // ebx
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  unsigned int *v14; // edi
  int v15; // eax
  _DWORD *v16; // eax
  _DWORD *v17; // ebx
  int v18; // eax
  unsigned int v19; // ebx
  _DWORD *v20; // eax
  int v21; // esi
  _DWORD *v22; // eax
  int v23; // ebx
  _DWORD *v24; // eax
  unsigned int *v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  float *v29; // edi
  int v30; // eax
  float *v31; // eax
  int v32; // [esp+20h] [ebp-14h] BYREF
  float v33; // [esp+24h] [ebp-10h]
  float v34; // [esp+28h] [ebp-Ch]
  unsigned int v35; // [esp+2Ch] [ebp-8h]
  const char *v36; // [esp+30h] [ebp-4h]
  int savedregs; // [esp+34h] [ebp+0h] BYREF

  if ( (*(unsigned __int8 (__thiscall **)(int *))(*a1 + 2032))(a1) && sub_1032ECA0(a1) )
    return sub_10092C60((int)a1, a3);
  if ( sub_10023D10(a1, 78) )
    return 115;
  result = sub_100444C0((int)a1);
  if ( !result )
  {
    if ( a1[1052] != -1
      && off_1061BE18[4 * (a1[1052] & 0xFFF) + 2] == (unsigned int)a1[1052] >> 12
      && off_1061BE18[4 * (a1[1052] & 0xFFF) + 1] )
    {
      a3 = *(float *)(dword_106B31C8 + 12);
      if ( a3 > *((float *)a1 + 1054) )
      {
        v5 = sub_1026A890((unsigned int *)a1 + 1052);
        v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 576))(v5);
        v7 = *((_BYTE *)a1 + 4960) == 0;
        v32 = *(int *)v6;
        v33 = *(float *)(v6 + 4);
        v34 = *(float *)(v6 + 8);
        if ( v7 )
        {
          if ( sub_1033FB50((float *)a1, (int)&savedregs, a2, (int)a1, &v32) )
          {
            a1[1052] = -1;
            return 118;
          }
        }
        else
        {
          v8 = *a1;
          v9 = sub_1026A890((unsigned int *)a1 + 1052);
          if ( (*(unsigned __int8 (__thiscall **)(int *, int, int, _DWORD))(v8 + 548))(a1, v9, 16449, 0) )
          {
            a1[1241] = v32;
            result = 116;
            *((float *)a1 + 1242) = v33;
            *((float *)a1 + 1243) = v34;
            a1[1052] = -1;
            return result;
          }
        }
      }
      v10 = *a1;
      v11 = sub_1026A890((unsigned int *)a1 + 1052);
      if ( !(*(unsigned __int8 (__thiscall **)(int *, int, int, _DWORD))(v10 + 548))(a1, v11, 16449, 0) )
        return 119;
    }
    if ( a1[581] != 4 )
    {
      if ( sub_10023D10(a1, 76) )
      {
        if ( *((_BYTE *)a1 + 4788) == 1 )
          sub_1029CCC0((int)(a1 + 1191));
        sub_10023E00((char *)a1, 76);
        return 110;
      }
      if ( sub_10023D10(a1, 58) )
        return 68;
      v12 = a1[581];
      if ( v12 != 7 && v12 != 6 )
      {
        if ( sub_10023D10(a1, 57) )
          return 80;
        if ( sub_10023D10(a1, 50) )
        {
          v13 = (*(int (__thiscall **)(int *, int))(*a1 + 1460))(a1, 1048351);
          v14 = (unsigned int *)v13;
          if ( v13 )
          {
            if ( (*(_BYTE *)(v13 + 16) & 8) != 0 )
            {
              if ( !*((_BYTE *)a1 + 4173) )
              {
                v7 = *((_BYTE *)a1 + 4976) == 0;
                v36 = "COMBINEPRISONGUARD_DANGER";
                if ( v7 )
                  v36 = "COMBINE_DANGER";
                v15 = sub_1026A890((unsigned int *)v13);
                if ( v15 )
                {
                  v16 = (_DWORD *)__RTDynamicCast(
                                    v15,
                                    0,
                                    (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                                    (int)&CBaseGrenade `RTTI Type Descriptor',
                                    0);
                  v17 = v16;
                  if ( v16 )
                  {
                    if ( sub_100F4030(v16) )
                    {
                      v35 = *a1;
                      v18 = sub_100F4030(v17);
                      if ( (*(int (__thiscall **)(int *, int))(v35 + 1080))(a1, v18) != 3 )
                      {
                        v7 = *((_BYTE *)a1 + 4976) == 0;
                        v36 = "COMBINEPRISONGUARD_GREN";
                        if ( v7 )
                          v36 = "COMBINE_GREN";
                      }
                    }
                  }
                }
                sub_100AC410((int)(a1 + 1061), v36, 0, 1);
              }
              if ( (*(int (__thiscall **)(int *))(*a1 + 368))(a1) )
                return 28;
              if ( (v14[4] & 0x8000000) == 0 )
                return 28;
              if ( !sub_1026A890(v14) )
                return 28;
              v19 = *a1;
              v20 = sub_1023CC80(v14);
              if ( (*(unsigned __int8 (__thiscall **)(int *, _DWORD *))(v19 + 872))(a1, v20) )
                return 28;
              v21 = a1[651];
              v22 = sub_1023CC80(v14);
              sub_10078690(v21, (int)v22, 0.0, 0.0);
              return 120;
            }
            if ( !sub_10023D10(a1, 10) && (v14[4] & 5) != 0 )
            {
              a3 = 0.0;
              v23 = a1[651];
              v24 = sub_1023CC80(v14);
              sub_10078690(v23, (int)v24, 0.0, 0.0);
            }
          }
        }
      }
      if ( sub_1032ECA0(a1) )
        return sub_10092C60((int)a1, a3);
    }
    if ( sub_10023D10(a1, 60) && a1[581] != 3 )
    {
      v25 = (unsigned int *)(*(int (__thiscall **)(int *, int))(*a1 + 1460))(a1, 1048351);
      if ( v25 )
      {
        if ( (v25[4] & 0x20000) != 0 )
        {
          v26 = sub_1026A890(v25);
          sub_100218B0(a1, v26);
          return 117;
        }
      }
    }
    if ( a1[581] == 1 )
    {
      if ( *((_BYTE *)a1 + 4212) )
        return 109;
    }
    else if ( a1[581] != 2 )
    {
      if ( a1[581] == 3 )
      {
        result = sub_1033ED40((int)a1, a3);
        if ( result )
          return result;
      }
      return sub_10092C60((int)a1, a3);
    }
    if ( sub_10023D10(a1, 17) || sub_10023D10(a1, 18) )
    {
      v27 = (*(int (__thiscall **)(int *))(*a1 + 1868))(a1);
      v28 = sub_10077420(v27);
      if ( v28 )
      {
        v29 = (float *)(v28 + 4);
        if ( (*(unsigned __int8 (__thiscall **)(int *, int))(*a1 + 872))(a1, v28 + 4) )
        {
          if ( !sub_100DA7A0((int)a1, (int)&savedregs, (int)v29, (int)a1, v29, 16449, 0) )
            return 30;
        }
      }
    }
    if ( sub_10023D10(a1, 53) )
    {
      v30 = (*(int (__thiscall **)(int *, int))(*a1 + 1460))(a1, 1048351);
      if ( v30 )
      {
        if ( (*(_BYTE *)(v30 + 16) & 1) != 0 )
        {
          if ( a1[699] )
          {
            v31 = (float *)sub_1023CC80((_DWORD *)v30);
            if ( (int *)sub_100B1370((_DWORD *)a1[699], v31) == a1 )
            {
              if ( sub_1004AFF0(a1, 2) )
                return 11;
            }
          }
        }
      }
    }
    if ( a1[1075] || !*((_BYTE *)a1 + 4212) && !sub_10023D10(a1, 75) )
      return sub_10092C60((int)a1, a3);
    return 109;
  }
  return result;
}
