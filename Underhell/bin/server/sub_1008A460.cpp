char __usercall sub_1008A460@<al>(int a1@<ecx>, int a2@<edi>)
{
  int v2; // ebx
  int (__thiscall *v3)(_DWORD); // edx
  int v4; // eax
  char *v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // eax
  int v9; // edi
  _DWORD *v10; // esi
  int v11; // eax
  int v12; // edi
  int v13; // esi
  __int16 v14; // ax
  float *v15; // eax
  int *v16; // eax
  int v17; // eax
  int v18; // eax
  int i; // esi
  int v20; // edi
  int v21; // edx
  int v22; // edi
  unsigned __int16 v23; // ax
  unsigned __int16 v24; // dx
  unsigned __int16 v25; // cx
  int v26; // esi
  int v27; // eax
  int v28; // esi
  int v29; // edx
  int v30; // eax
  unsigned __int16 v31; // ax
  unsigned __int16 v32; // dx
  unsigned __int16 v33; // cx
  int v34; // esi
  int v35; // eax
  int v36; // edx
  float *v37; // eax
  double v39; // [esp+28h] [ebp-1A4h]
  char Destination[260]; // [esp+38h] [ebp-194h] BYREF
  int v41[3]; // [esp+13Ch] [ebp-90h] BYREF
  int (__cdecl *v42)(int, int); // [esp+148h] [ebp-84h] BYREF
  int v43; // [esp+14Ch] [ebp-80h]
  int v44; // [esp+150h] [ebp-7Ch]
  int v45; // [esp+154h] [ebp-78h]
  int v46; // [esp+158h] [ebp-74h]
  int v47; // [esp+15Ch] [ebp-70h]
  int v48; // [esp+160h] [ebp-6Ch]
  int (__cdecl *v49)(int, int); // [esp+164h] [ebp-68h] BYREF
  int v50; // [esp+168h] [ebp-64h]
  int v51; // [esp+16Ch] [ebp-60h]
  int v52; // [esp+170h] [ebp-5Ch]
  int v53; // [esp+174h] [ebp-58h]
  int v54; // [esp+178h] [ebp-54h]
  int v55; // [esp+17Ch] [ebp-50h]
  int v56; // [esp+180h] [ebp-4Ch]
  const char *v57[3]; // [esp+184h] [ebp-48h] BYREF
  int v58; // [esp+190h] [ebp-3Ch]
  char v59; // [esp+199h] [ebp-33h]
  int v60; // [esp+1A4h] [ebp-28h]
  _BYTE v61[4]; // [esp+1B0h] [ebp-1Ch] BYREF
  float v62; // [esp+1B4h] [ebp-18h] BYREF
  char v63; // [esp+1BAh] [ebp-12h] BYREF
  char v64; // [esp+1BBh] [ebp-11h] BYREF
  float v65; // [esp+1BCh] [ebp-10h] BYREF
  float v66; // [esp+1C0h] [ebp-Ch] BYREF
  float Src; // [esp+1C4h] [ebp-8h] BYREF
  char v68; // [esp+1CBh] [ebp-1h]

  v2 = a1;
  v3 = *(int (__thiscall **)(_DWORD))(*(_DWORD *)dword_106B31D0 + 12);
  v56 = a1;
  v4 = v3(dword_106B31D0);
  if ( !v4 )
  {
    LOBYTE(v4) = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 452))(dword_106B3CDC);
    if ( (_BYTE)v4 )
    {
      sub_104299C0(Destination, "maps", 0x104u);
      (*(void (__thiscall **)(int, char *, const char *))(*(_DWORD *)dword_106B31D8 + 68))(
        dword_106B31D8,
        Destination,
        "DEFAULT_WRITE_PATH");
      sub_10429750((int)Destination, "/graphs", 260, -1);
      (*(void (__thiscall **)(int, char *, const char *))(*(_DWORD *)dword_106B31D8 + 68))(
        dword_106B31D8,
        Destination,
        "DEFAULT_WRITE_PATH");
      sub_10429750((int)Destination, "/", 260, -1);
      v5 = *(char **)(dword_106B31C8 + 60);
      if ( !v5 )
        v5 = (char *)String;
      sub_10429750((int)Destination, v5, 260, -1);
      sub_10429750((int)Destination, ".ain", 260, -1);
      sub_1042DE40(0, 0, 0);
      if ( !(*(unsigned __int8 (__thiscall **)(int, char *, const char *, const char **, _DWORD, _DWORD, _DWORD))(*(_DWORD *)(dword_106B31D8 + 4) + 56))(
              dword_106B31D8 + 4,
              Destination,
              "game",
              v57,
              0,
              0,
              0) )
      {
        DevWarning(2, "Couldn't read %s!\n", Destination);
        LOBYTE(v4) = sub_1002A150((int *)v57);
        return v4;
      }
      if ( sub_1008A100(v57) == 86 && sub_1008A100(v57) == 101 && sub_1008A100(v57) == 114
        || (sub_1042D280(0, 0), sub_1008A260(v57) != 37) )
      {
        DevMsg("AI node graph %s is out of date\n", Destination);
LABEL_11:
        LOBYTE(v4) = sub_1002A150((int *)v57);
        return v4;
      }
      if ( sub_1008A260(v57) != *(_DWORD *)(dword_106B31C8 + 64) && !*(_DWORD *)(dword_1069367C + 48) )
      {
        DevMsg("AI node graph %s is out of date (map version changed)\n", Destination);
        goto LABEL_11;
      }
      v6 = sub_1008A260(v57);
      if ( (unsigned int)v6 > 0x5DC )
      {
        Error("AI node graph %s is corrupt\n", Destination);
        DevMsg(v57[0]);
        DevMsg("\n");
        LOBYTE(v4) = sub_1002A150((int *)v57);
        return v4;
      }
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 12))(dword_106B31D0) && v6 <= 1024 )
      {
        v6 = 1024;
        v7 = 1024;
      }
      else if ( v6 <= 1 )
      {
        v7 = 1;
      }
      else
      {
        v7 = v6;
      }
      *(_DWORD *)(*(_DWORD *)(v2 + 808) + 8) = sub_10184390((unsigned __int64)(unsigned int)v7 >> 30 != 0 ? -1 : 4 * v7);
      v8 = v6;
      if ( v6 <= 1 )
        v8 = 1;
      HIDWORD(v39) = a2;
      memset(*(void **)(*(_DWORD *)(v2 + 808) + 8), 0, 4 * v8);
      if ( v6 > 0 )
      {
        v9 = v6;
        do
        {
          if ( (v59 & 1) != 0 )
          {
            LODWORD(v39) = &Src;
            Src = 0.0;
            sub_1042E720(v57, "%f", v39);
          }
          else if ( (unsigned __int8)sub_1042D170(4) )
          {
            Src = *(float *)&v57[0][v58 - v60];
            if ( (v61[0] & 1) != 0 )
              sub_100867E0(v61, (int *)&Src, (char *)&Src, 1);
            v58 += 4;
          }
          else
          {
            Src = 0.0;
          }
          *(float *)v41 = Src;
          if ( (v59 & 1) != 0 )
          {
            LODWORD(v39) = &v65;
            v65 = 0.0;
            sub_1042E720(v57, "%f", v39);
          }
          else if ( (unsigned __int8)sub_1042D170(4) )
          {
            v65 = *(float *)&v57[0][v58 - v60];
            if ( (v61[0] & 1) != 0 )
              sub_100867E0(v61, (int *)&v65, (char *)&v65, 1);
            v58 += 4;
          }
          else
          {
            v65 = 0.0;
          }
          *(float *)&v41[1] = v65;
          if ( (v59 & 1) != 0 )
          {
            LODWORD(v39) = &v66;
            v66 = 0.0;
            sub_1042E720(v57, "%f", v39);
          }
          else if ( (unsigned __int8)sub_1042D170(4) )
          {
            v66 = *(float *)&v57[0][v58 - v60];
            if ( (v61[0] & 1) != 0 )
              sub_100867E0(v61, (int *)&v66, (char *)&v66, 1);
            v58 += 4;
          }
          else
          {
            v66 = 0.0;
          }
          *(float *)&v41[2] = v66;
          if ( (v59 & 1) != 0 )
          {
            LODWORD(v39) = &v62;
            v62 = 0.0;
            sub_1042E720(v57, "%f", v39);
          }
          else if ( (unsigned __int8)sub_1042D170(4) )
          {
            v62 = *(float *)&v57[0][v58 - v60];
            if ( (v61[0] & 1) != 0 )
              sub_100867E0(v61, (int *)&v62, (char *)&v62, 1);
            v58 += 4;
          }
          else
          {
            v62 = 0.0;
          }
          v10 = (_DWORD *)sub_10085070(*(int **)(v2 + 808), (int)v41, v62);
          sub_1042D670(v10 + 4, 0x28u);
          v10[15] = sub_1008A100(v57);
          v10[16] = (unsigned __int16)sub_1008A1E0(v57);
          --v9;
          v10[17] = sub_1008A160(v57);
        }
        while ( v9 );
      }
      v11 = sub_1008A260(v57);
      if ( v11 > 0 )
      {
        v12 = v11;
        do
        {
          v13 = sub_1008A160(v57);
          v14 = sub_1008A160(v57);
          v15 = sub_10085280(v13, v14, 0);
          if ( v15 )
            v16 = (int *)(v15 + 1);
          else
            v16 = v41;
          sub_1042D670(v16, 0xAu);
          --v12;
        }
        while ( v12 );
      }
      sub_10184660(*(_DWORD *)(*(_DWORD *)(v2 + 804) + 12));
      v17 = *(_DWORD *)(*(_DWORD *)(v2 + 808) + 4);
      if ( v17 <= 1 )
        v17 = 1;
      *(_DWORD *)(*(_DWORD *)(v2 + 804) + 12) = sub_10184390((unsigned __int64)(unsigned int)v17 >> 30 != 0 ? -1 : 4 * v17);
      v18 = *(_DWORD *)(*(_DWORD *)(v2 + 808) + 4);
      if ( v18 <= 1 )
        v18 = 1;
      memset(*(void **)(*(_DWORD *)(v2 + 804) + 12), 0, 4 * v18);
      for ( i = 0; i < *(_DWORD *)(*(_DWORD *)(v2 + 808) + 4); ++i )
      {
        v20 = *(_DWORD *)(v2 + 804);
        *(_DWORD *)(*(_DWORD *)(v20 + 12) + 4 * i) = sub_1008A260(v57);
      }
      v21 = *(_DWORD *)(v2 + 808);
      v22 = 0;
      v43 = 0;
      v44 = 0;
      v45 = 0;
      v46 = 0xFFFF;
      v47 = -1;
      v48 = 0;
      v50 = 0;
      v51 = 0;
      v52 = 0;
      v53 = 0xFFFF;
      v54 = -1;
      v55 = 0;
      v42 = sub_1016BE90;
      v49 = sub_1016BE90;
      v68 = 0;
      if ( *(int *)(v21 + 4) > 0 )
      {
        while ( 1 )
        {
          Src = *(float *)(*(_DWORD *)(*(_DWORD *)(v2 + 804) + 12) + 4 * v22);
          if ( Src != NAN )
          {
            if ( sub_100892E0(&v42, (int)&Src) == -1 )
            {
              sub_10087C60(&v42, (int)&Src, (unsigned __int16 *)&v65, &v64);
              v31 = sub_10053540((int)&v42);
              v32 = LOWORD(v65);
              v33 = v31;
              v34 = 3 * v31;
              v35 = v43;
              v28 = 4 * v34;
              *(_WORD *)(v43 + v28 + 2) = -1;
              *(_WORD *)(v35 + v28) = -1;
              *(_WORD *)(v35 + v28 + 6) = 0;
              *(_WORD *)(v35 + v28 + 4) = v32;
              if ( v32 == 0xFFFF )
              {
                LOWORD(v46) = v33;
              }
              else
              {
                v36 = 3 * v32;
                if ( v64 )
                  *(_WORD *)(v35 + 4 * v36) = v33;
                else
                  *(_WORD *)(v35 + 4 * v36 + 2) = v33;
              }
              sub_10089B50((int)&v42, v33);
              ++HIWORD(v46);
              v30 = v43;
            }
            else
            {
              if ( !v68 )
              {
                Warning("** Duplicate Hammer Node IDs: ");
                v68 = 1;
              }
              if ( sub_100892E0(&v49, (int)&Src) != -1 )
                goto LABEL_89;
              DevMsg("%d, ", Src);
              sub_10087C60(&v49, (int)&Src, (unsigned __int16 *)&v66, &v63);
              v23 = sub_10053540((int)&v49);
              v24 = LOWORD(v66);
              v25 = v23;
              v26 = 3 * v23;
              v27 = v50;
              v28 = 4 * v26;
              *(_WORD *)(v50 + v28 + 2) = -1;
              *(_WORD *)(v27 + v28) = -1;
              *(_WORD *)(v27 + v28 + 6) = 0;
              *(_WORD *)(v27 + v28 + 4) = v24;
              if ( v24 == 0xFFFF )
              {
                LOWORD(v53) = v25;
              }
              else
              {
                v29 = 3 * v24;
                if ( v63 )
                  *(_WORD *)(v27 + 4 * v29) = v25;
                else
                  *(_WORD *)(v27 + 4 * v29 + 2) = v25;
              }
              sub_10089B50((int)&v49, v25);
              ++HIWORD(v53);
              v30 = v50;
            }
            v37 = (float *)(v30 + v28 + 8);
            if ( v37 )
              *v37 = Src;
            v2 = v56;
          }
LABEL_89:
          if ( ++v22 >= *(_DWORD *)(*(_DWORD *)(v2 + 808) + 4) )
          {
            if ( v68 )
              DevMsg("\n** Should run \"Check For Problems\" on the VMF then verify dynamic links\n");
            break;
          }
        }
      }
      byte_1069362C = 1;
      byte_10692E28 = 0;
      sub_100894A0((int)&v49);
      if ( v52 >= 0 && v50 )
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v50);
      LOBYTE(v4) = sub_100894A0((int)&v42);
      if ( v45 >= 0 )
      {
        LOBYTE(v4) = v43;
        if ( v43 )
        {
          (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v43);
          LOBYTE(v4) = 0;
        }
      }
      if ( (int)v57[2] >= 0 )
      {
        LOBYTE(v4) = v57[0];
        if ( v57[0] )
          LOBYTE(v4) = (*(int (__thiscall **)(_DWORD, const char *))(*g_pMemAlloc + 20))(g_pMemAlloc, v57[0]);
      }
    }
  }
  return v4;
}
