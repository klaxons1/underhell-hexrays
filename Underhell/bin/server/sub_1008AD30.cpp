void __usercall sub_1008AD30(int a1@<ecx>, int a2@<esi>)
{
  int v3; // edi
  bool v4; // zf
  int v5; // kr00_4
  int v6; // ecx
  char *v7; // esi
  char *v8; // eax
  int v9; // eax
  int v10; // esi
  double v11; // st7
  double v12; // st7
  double v13; // st7
  double v14; // st7
  int v15; // ebx
  __int16 v16; // bx
  _WORD *v17; // eax
  int v18; // ebx
  _WORD *v19; // eax
  int v20; // ecx
  __int16 **v21; // eax
  float v22; // edx
  float v23; // esi
  int v24; // eax
  int v25; // ecx
  int v26; // edi
  float v27; // ecx
  unsigned __int16 *v28; // esi
  unsigned __int16 v29; // bx
  _WORD *v30; // eax
  __int16 v31; // bx
  _WORD *v32; // eax
  int v33; // eax
  int v34; // edi
  int v35; // ebx
  int v36; // esi
  int v37; // ecx
  int v38; // eax
  int v39; // esi
  _DWORD *v40; // esi
  int v41; // esi
  float v42; // eax
  float *v43; // eax
  int v44; // eax
  int v45; // esi
  int v46; // [esp+8h] [ebp-290h]
  double ArgList; // [esp+Ch] [ebp-28Ch]
  double ArgLista; // [esp+Ch] [ebp-28Ch]
  double ArgListb; // [esp+Ch] [ebp-28Ch]
  double ArgListc; // [esp+Ch] [ebp-28Ch]
  int ArgList_4a; // [esp+10h] [ebp-288h]
  int ArgList_4b; // [esp+10h] [ebp-288h]
  char Buffer[260]; // [esp+1Ch] [ebp-27Ch] BYREF
  char Destination[260]; // [esp+120h] [ebp-178h] BYREF
  int v57; // [esp+224h] [ebp-74h] BYREF
  int v58; // [esp+22Ch] [ebp-6Ch] BYREF
  int v59; // [esp+230h] [ebp-68h]
  int (__cdecl *v60)(int, int); // [esp+234h] [ebp-64h] BYREF
  int v61; // [esp+238h] [ebp-60h]
  int v62; // [esp+23Ch] [ebp-5Ch]
  int v63; // [esp+240h] [ebp-58h]
  int v64; // [esp+244h] [ebp-54h]
  int v65; // [esp+248h] [ebp-50h]
  int v66; // [esp+24Ch] [ebp-4Ch]
  char v67; // [esp+253h] [ebp-45h] BYREF
  int v68; // [esp+254h] [ebp-44h]
  char v69; // [esp+25Bh] [ebp-3Dh]
  int v70[4]; // [esp+25Ch] [ebp-3Ch] BYREF
  int v71; // [esp+26Ch] [ebp-2Ch]
  char v72; // [esp+271h] [ebp-27h]
  int v73; // [esp+27Ch] [ebp-1Ch]
  char v74[4]; // [esp+288h] [ebp-10h] BYREF
  int v75; // [esp+28Ch] [ebp-Ch] BYREF
  char v76[4]; // [esp+290h] [ebp-8h] BYREF
  float Src; // [esp+294h] [ebp-4h] BYREF

  v3 = 0;
  v4 = *(_BYTE *)(a1 + 813) == 0;
  v68 = a1;
  if ( v4
    && *(_BYTE *)(a1 + 800)
    && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 452))(dword_106B3CDC) )
  {
    sub_104299C0(Destination, "maps/graphs", 0x104u);
    sub_10429A00(Buffer, 0x104u, "%s/%s", (char)Destination);
    v5 = strlen(Buffer);
    v6 = 0;
    if ( v5 > 0 )
    {
      v7 = &Buffer[v5 - 1];
      while ( *v7 != 47 && *v7 != 92 )
      {
        ++v6;
        --v7;
        if ( v6 >= v5 )
          goto LABEL_11;
      }
      Buffer[v5 - v6 - 1] = 0;
    }
LABEL_11:
    (*(void (__thiscall **)(int, char *, const char *, int))(*(_DWORD *)dword_106B31D8 + 68))(
      dword_106B31D8,
      Buffer,
      "DEFAULT_WRITE_PATH",
      a2);
    sub_10429750((int)Destination, "/", 260, -1);
    v8 = *(char **)(dword_106B31C8 + 60);
    if ( !v8 )
      v8 = (char *)String;
    sub_10429750((int)Destination, v8, 260, -1);
    sub_10429750((int)Destination, ".ain", 260, -1);
    sub_1042DE40(0, 0, 0);
    if ( (v72 & 1) != 0 )
    {
      sub_1042E0C0((int)v70, "%d", 37);
    }
    else
    {
      *(_DWORD *)v76 = 37;
      if ( (unsigned __int8)sub_1042D470(4) )
      {
        if ( (v74[0] & 1) != 0 )
          sub_100868D0(v74, (int *)(v70[0] + v71 - v73), v76, 1);
        else
          *(_DWORD *)(v71 - v73 + v70[0]) = 37;
        v71 += 4;
        sub_1042D4C0(v70);
      }
    }
    ArgList_4a = *(_DWORD *)(dword_106B31C8 + 64);
    if ( (v72 & 1) != 0 )
      sub_1042E0C0((int)v70, "%d", ArgList_4a);
    else
      sub_10087980(v70, ArgList_4a);
    ArgList_4b = *(_DWORD *)(*(_DWORD *)(a1 + 808) + 4);
    if ( (v72 & 1) != 0 )
      sub_1042E0C0((int)v70, "%d", ArgList_4b);
    else
      sub_10087980(v70, ArgList_4b);
    v9 = *(_DWORD *)(a1 + 808);
    *(float *)v76 = 0.0;
    if ( *(int *)(v9 + 4) > 0 )
    {
      do
      {
        if ( v3 < 0 || v3 >= *(_DWORD *)(v9 + 4) )
        {
          ++dword_10691DE0;
          v10 = 0;
        }
        else
        {
          v10 = *(_DWORD *)(*(_DWORD *)(v9 + 8) + 4 * v3);
        }
        v11 = *(float *)(v10 + 4);
        v75 = *(int *)(v10 + 4);
        if ( (v72 & 1) != 0 )
        {
          ArgList = v11;
          sub_1042E0C0((int)v70, "%f", SLOBYTE(ArgList));
        }
        else
        {
          Src = v11;
          if ( (unsigned __int8)sub_1042D470(4) )
          {
            if ( (v74[0] & 1) != 0 )
              sub_100867E0(v74, (int *)(v70[0] + v71 - v73), (char *)&Src, 1);
            else
              *(float *)(v71 - v73 + v70[0]) = *(float *)&v75;
            v71 += 4;
            sub_1042D4C0(v70);
          }
        }
        v12 = *(float *)(v10 + 8);
        v75 = *(int *)(v10 + 8);
        if ( (v72 & 1) != 0 )
        {
          ArgLista = v12;
          sub_1042E0C0((int)v70, "%f", SLOBYTE(ArgLista));
        }
        else
        {
          Src = v12;
          if ( (unsigned __int8)sub_1042D470(4) )
          {
            if ( (v74[0] & 1) != 0 )
              sub_100867E0(v74, (int *)(v70[0] + v71 - v73), (char *)&Src, 1);
            else
              *(float *)(v71 - v73 + v70[0]) = *(float *)&v75;
            v71 += 4;
            sub_1042D4C0(v70);
          }
        }
        v13 = *(float *)(v10 + 12);
        v75 = *(int *)(v10 + 12);
        if ( (v72 & 1) != 0 )
        {
          ArgListb = v13;
          sub_1042E0C0((int)v70, "%f", SLOBYTE(ArgListb));
        }
        else
        {
          Src = v13;
          if ( (unsigned __int8)sub_1042D470(4) )
          {
            if ( (v74[0] & 1) != 0 )
              sub_100867E0(v74, (int *)(v70[0] + v71 - v73), (char *)&Src, 1);
            else
              *(float *)(v71 - v73 + v70[0]) = *(float *)&v75;
            v71 += 4;
            sub_1042D4C0(v70);
          }
        }
        v14 = *(float *)(v10 + 56);
        v75 = *(int *)(v10 + 56);
        if ( (v72 & 1) != 0 )
        {
          ArgListc = v14;
          sub_1042E0C0((int)v70, "%f", SLOBYTE(ArgListc));
        }
        else
        {
          Src = v14;
          if ( (unsigned __int8)sub_1042D470(4) )
          {
            if ( (v74[0] & 1) != 0 )
              sub_100867E0(v74, (int *)(v70[0] + v71 - v73), (char *)&Src, 1);
            else
              *(float *)(v71 - v73 + v70[0]) = *(float *)&v75;
            v71 += 4;
            sub_1042D4C0(v70);
          }
        }
        sub_1042DD00((void *)(v10 + 16), 0x28u);
        v15 = *(_DWORD *)(v10 + 60);
        if ( (v72 & 1) != 0 && v71 && *(_BYTE *)(v71 - v73 + v70[0] - 1) == 10 )
          sub_10088130(v70);
        if ( (unsigned __int8)sub_1042D470(1) )
        {
          *(_BYTE *)(v71 - v73 + v70[0]) = v15;
          ++v71;
          sub_1042D4C0(v70);
        }
        v16 = *(_WORD *)(v10 + 64);
        if ( (v72 & 1) != 0 )
        {
          sub_1042E0C0((int)v70, "%u", *(_WORD *)(v10 + 64));
        }
        else
        {
          LODWORD(Src) = *(unsigned __int16 *)(v10 + 64);
          if ( !(unsigned __int8)sub_1042D470(2) )
            goto LABEL_76;
          if ( (v74[0] & 1) == 0 )
          {
            *(_WORD *)(v71 - v73 + v70[0]) = v16;
LABEL_74:
            v71 += 2;
            sub_1042D4C0(v70);
            goto LABEL_76;
          }
          v17 = (_WORD *)(v70[0] + v71 - v73);
          if ( !v17 )
            goto LABEL_74;
          if ( (v74[0] & 1) != 0 )
          {
            HIWORD(Src) = 0;
            LOBYTE(Src) = HIBYTE(v16);
            BYTE1(Src) = v16;
          }
          *v17 = LOWORD(Src);
          v71 += 2;
          sub_1042D4C0(v70);
        }
LABEL_76:
        v18 = *(_DWORD *)(v10 + 68);
        if ( (v72 & 1) != 0 )
        {
          sub_1042E0C0((int)v70, "%d", v18);
        }
        else
        {
          LODWORD(Src) = (unsigned __int16)v18;
          if ( (unsigned __int8)sub_1042D470(2) )
          {
            if ( (v74[0] & 1) != 0 )
            {
              v19 = (_WORD *)(v70[0] + v71 - v73);
              if ( v19 )
              {
                if ( (v74[0] & 1) != 0 )
                {
                  HIWORD(Src) = 0;
                  LOBYTE(Src) = BYTE1(v18);
                  BYTE1(Src) = v18;
                }
                *v19 = LOWORD(Src);
                v71 += 2;
                sub_1042D4C0(v70);
                goto LABEL_87;
              }
            }
            else
            {
              *(_WORD *)(v71 - v73 + v70[0]) = v18;
            }
            v71 += 2;
            sub_1042D4C0(v70);
          }
        }
LABEL_87:
        v20 = *(_DWORD *)(v10 + 84);
        if ( v20 > 0 )
        {
          v21 = *(__int16 ***)(v10 + 72);
          v22 = *(float *)v76;
          do
          {
            if ( v3 == **v21 )
              ++LODWORD(v22);
            ++v21;
            --v20;
          }
          while ( v20 );
          *(float *)v76 = v22;
        }
        v9 = *(_DWORD *)(v68 + 808);
        ++v3;
      }
      while ( v3 < *(_DWORD *)(v9 + 4) );
    }
    if ( (v72 & 1) != 0 )
    {
      sub_1042E0C0((int)v70, "%d", v76[0]);
    }
    else
    {
      v23 = *(float *)v76;
      if ( (unsigned __int8)sub_1042D470(4) )
      {
        if ( (v74[0] & 1) != 0 )
          sub_100868D0(v74, (int *)(v70[0] + v71 - v73), v76, 1);
        else
          *(float *)(v71 - v73 + v70[0]) = v23;
        v71 += 4;
        sub_1042D4C0(v70);
      }
    }
    v24 = *(_DWORD *)(v68 + 808);
    v25 = 0;
    *(float *)&v75 = 0.0;
    if ( *(int *)(v24 + 4) > 0 )
    {
      while ( 1 )
      {
        if ( v25 < 0 || v25 >= *(_DWORD *)(v24 + 4) )
        {
          ++dword_10691DE0;
          v26 = 0;
        }
        else
        {
          v26 = *(_DWORD *)(*(_DWORD *)(v24 + 8) + 4 * v75);
        }
        v27 = 0.0;
        Src = 0.0;
        if ( *(int *)(v26 + 84) > 0 )
          break;
LABEL_134:
        v24 = *(_DWORD *)(v68 + 808);
        if ( ++v75 >= *(_DWORD *)(v24 + 4) )
          goto LABEL_135;
        v25 = v75;
      }
      while ( 1 )
      {
        v28 = *(unsigned __int16 **)(*(_DWORD *)(v26 + 72) + 4 * LODWORD(v27));
        if ( v75 == (__int16)*v28 )
          break;
LABEL_133:
        ++LODWORD(v27);
        Src = v27;
        if ( SLODWORD(v27) >= *(_DWORD *)(v26 + 84) )
          goto LABEL_134;
      }
      v29 = *v28;
      if ( (v72 & 1) == 0 )
      {
        *(_DWORD *)v76 = *v28;
        if ( !(unsigned __int8)sub_1042D470(2) )
          goto LABEL_121;
        if ( (v74[0] & 1) != 0 )
        {
          v30 = (_WORD *)(v70[0] + v71 - v73);
          if ( v30 )
          {
            if ( (v74[0] & 1) != 0 )
            {
              *(_WORD *)&v76[2] = 0;
              v76[0] = HIBYTE(v29);
              v76[1] = v29;
            }
            *v30 = *(_WORD *)v76;
            v71 += 2;
            sub_1042D4C0(v70);
LABEL_121:
            v31 = v28[1];
            if ( (v72 & 1) != 0 )
            {
              sub_1042E0C0((int)v70, "%d", v31);
            }
            else
            {
              *(_DWORD *)v76 = v28[1];
              if ( (unsigned __int8)sub_1042D470(2) )
              {
                if ( (v74[0] & 1) != 0 )
                {
                  v32 = (_WORD *)(v70[0] + v71 - v73);
                  if ( v32 )
                  {
                    if ( (v74[0] & 1) != 0 )
                    {
                      *(_WORD *)&v76[2] = 0;
                      v76[0] = HIBYTE(v31);
                      v76[1] = v31;
                    }
                    *v32 = *(_WORD *)v76;
                    v71 += 2;
                    sub_1042D4C0(v70);
                    goto LABEL_132;
                  }
                }
                else
                {
                  *(_WORD *)(v71 - v73 + v70[0]) = v31;
                }
                v71 += 2;
                sub_1042D4C0(v70);
              }
            }
LABEL_132:
            sub_1042DD00(v28 + 2, 0xAu);
            v27 = Src;
            goto LABEL_133;
          }
        }
        else
        {
          *(_WORD *)(v71 - v73 + v70[0]) = v29;
        }
        v71 += 2;
        sub_1042D4C0(v70);
        goto LABEL_121;
      }
      sub_1042E0C0((int)v70, "%d", *v28);
      goto LABEL_121;
    }
LABEL_135:
    v33 = *(_DWORD *)(v68 + 808);
    v34 = 0;
    v35 = 0;
    v61 = 0;
    v62 = 0;
    v63 = 0;
    v64 = 0xFFFF;
    v65 = -1;
    v66 = 0;
    v60 = sub_1016BE90;
    v69 = 0;
    if ( *(int *)(v33 + 4) > 0 )
    {
      do
      {
        v57 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v68 + 804) + 12) + 4 * v35);
        v36 = (unsigned __int16)sub_100891E0(&v60, (int)&v57);
        if ( v36 == 0xFFFF )
        {
          v58 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v68 + 804) + 12) + 4 * v35);
          v59 = v35;
          sub_10087AA0(&v60, (int)&v58, (unsigned __int16 *)&v75, &v67);
          v37 = (unsigned __int16)sub_10243CD0(&v60);
          v38 = v61;
          v39 = 2 * v37;
          *(_WORD *)(v61 + 8 * v39 + 4) = v75;
          *(_WORD *)(v38 + 8 * v39 + 2) = -1;
          *(_WORD *)(v38 + 8 * v39) = -1;
          *(_WORD *)(v38 + 8 * v39 + 6) = 0;
          if ( (_WORD)v75 == 0xFFFF )
          {
            LOWORD(v64) = v37;
          }
          else if ( v67 )
          {
            *(_WORD *)(v38 + 16 * (unsigned __int16)v75) = v37;
          }
          else
          {
            *(_WORD *)(v38 + 16 * (unsigned __int16)v75 + 2) = v37;
          }
          sub_10089560((int)&v60, v37);
          v34 = v61;
          ++HIWORD(v64);
          v40 = (_DWORD *)(v61 + 8 * v39 + 8);
          if ( v40 )
          {
            *v40 = v58;
            v40[1] = v59;
          }
        }
        else
        {
          if ( !v69 )
          {
            DevWarning("******* MAP CONTAINS DUPLICATE HAMMER NODE IDS! CHECK FOR PROBLEMS IN HAMMER TO CORRECT *******\n");
            v69 = 1;
          }
          v46 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v68 + 804) + 12) + 4 * v35);
          DevWarning(
            "   AI node %d is associated with Hammer node %d, but %d is already bound to node %d\n",
            v35,
            v46,
            v46,
            *(_DWORD *)(v34 + 16 * v36 + 12));
        }
        v41 = v68;
        v42 = *(float *)(*(_DWORD *)(*(_DWORD *)(v68 + 804) + 12) + 4 * v35);
        *(float *)v76 = v42;
        if ( (v72 & 1) != 0 )
        {
          sub_1042E0C0((int)v70, "%d", SLOBYTE(v42));
        }
        else if ( (unsigned __int8)sub_1042D470(4) )
        {
          if ( (v74[0] & 1) != 0 )
          {
            v43 = (float *)(v70[0] + v71 - v73);
            if ( v43 )
            {
              if ( (v74[0] & 1) != 0 )
              {
                BYTE1(Src) = v76[2];
                BYTE2(Src) = v76[1];
                HIBYTE(Src) = v76[0];
                LOBYTE(Src) = v76[3];
                *v43 = Src;
              }
              else
              {
                *v43 = *(float *)v76;
              }
            }
          }
          else
          {
            *(float *)(v71 - v73 + v70[0]) = *(float *)v76;
          }
          v71 += 4;
          sub_1042D4C0(v70);
        }
        ++v35;
      }
      while ( v35 < *(_DWORD *)(*(_DWORD *)(v41 + 808) + 4) );
    }
    v44 = (*(int (__thiscall **)(int, char *, const char *))(*(_DWORD *)(dword_106B31D8 + 4) + 8))(
            dword_106B31D8 + 4,
            Destination,
            "wb");
    v45 = v44;
    if ( v44 )
    {
      (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)(dword_106B31D8 + 4) + 4))(
        dword_106B31D8 + 4,
        v70[0],
        v71,
        v44);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)(dword_106B31D8 + 4) + 12))(dword_106B31D8 + 4, v45);
    }
    else
    {
      DevWarning(2, "Couldn't create %s!\n", Destination);
    }
    sub_100893E0((int)&v60);
    if ( v63 >= 0 && v61 )
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v61);
    if ( v70[2] >= 0 )
    {
      if ( v70[0] )
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v70[0]);
    }
  }
}
