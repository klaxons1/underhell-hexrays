void __usercall sub_103B61D0(int a1@<ecx>, double a2@<st0>)
{
  unsigned int v3; // eax
  int v4; // edi
  unsigned int v5; // eax
  int v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  float *v9; // eax
  int v10; // eax
  _DWORD *v11; // eax
  float *v12; // eax
  int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  int v16; // ecx
  float *v17; // eax
  int v18; // eax
  float *v19; // eax
  unsigned int v20; // eax
  int v21; // edi
  _DWORD *v22; // eax
  float *v23; // eax
  float *v24; // eax
  int (__thiscall *v25)(int); // edx
  _DWORD *v26; // eax
  unsigned int *i; // edi
  int v28; // ebx
  int v29; // eax
  int v30; // ebx
  int v31; // eax
  _DWORD *v32; // eax
  int v33; // ecx
  int v34; // eax
  int v35; // edx
  int v36; // eax
  int v37; // eax
  int v38; // edi
  int v39; // eax
  int *v40; // eax
  int v41; // edi
  int v42; // ebx
  float *v43; // eax
  float *v44; // eax
  float *v45; // eax
  unsigned int v46; // ecx
  int *v47; // eax
  unsigned int v48; // ecx
  int v49; // edi
  float *v50; // [esp-4h] [ebp-A0h]
  _DWORD *v51; // [esp+8h] [ebp-94h]
  int v52; // [esp+8h] [ebp-94h]
  float *v53; // [esp+Ch] [ebp-90h]
  int *v54; // [esp+Ch] [ebp-90h]
  float v55; // [esp+Ch] [ebp-90h]
  float v56; // [esp+Ch] [ebp-90h]
  int v57; // [esp+Ch] [ebp-90h]
  int *v58; // [esp+Ch] [ebp-90h]
  int v59[3]; // [esp+1Ch] [ebp-80h] BYREF
  int v60[18]; // [esp+28h] [ebp-74h] BYREF
  float v61[3]; // [esp+70h] [ebp-2Ch] BYREF
  _BYTE v62[12]; // [esp+7Ch] [ebp-20h] BYREF
  float v63[3]; // [esp+88h] [ebp-14h] BYREF
  int v64; // [esp+94h] [ebp-8h]
  float v65; // [esp+98h] [ebp-4h] BYREF
  int savedregs; // [esp+9Ch] [ebp+0h] BYREF

  if ( sub_100538F0(a1, *(const char **)(a1 + 3636)) )
  {
    a2 = *(float *)(dword_106EB444 + 44);
    sub_100B8F30(a1 + 3936, *(float *)(dword_106EB444 + 44), *(float *)(dword_106EB48C + 44));
  }
  else if ( sub_100B8E40((float *)(a1 + 3936))
         || *(_DWORD *)(*(_DWORD *)(a1 + 3640) + 8) != 1
         || ((v3 = *(_DWORD *)(a1 + 3944), v3 == -1)
          || off_1061BE18[4 * (*(_DWORD *)(a1 + 3944) & 0xFFF) + 2] != v3 >> 12
           ? (v4 = 0)
           : (v4 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3944) & 0xFFF) + 1]),
             (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1) != v4) )
  {
    sub_100B9150(a1 + 3936);
  }
  if ( *(_BYTE *)(a1 + 3912) && sub_100B8E40((float *)(a1 + 3936)) && *(_DWORD *)(*(_DWORD *)(a1 + 3640) + 8) != 1 )
    *(_BYTE *)(a1 + 3924) = 0;
  sub_100397D0((int *)a1);
  if ( *(_BYTE *)(a1 + 3912) )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1) )
    {
      if ( sub_10023D10((_DWORD *)a1, 10) )
      {
        a2 = *(float *)(dword_106B31C8 + 12) + 1.0;
        *(float *)(a1 + 3908) = a2;
      }
      else
      {
        a2 = *(float *)(a1 + 3908);
        if ( a2 <= *(float *)(dword_106B31C8 + 12) && *(_DWORD *)(*(_DWORD *)(a1 + 3640) + 8) != 1 )
          sub_103AEE70(a1);
      }
    }
    v5 = *(_DWORD *)(a1 + 3920);
    if ( v5 != -1 && off_1061BE18[4 * (*(_DWORD *)(a1 + 3920) & 0xFFF) + 2] == v5 >> 12 )
    {
      if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 3920) & 0xFFF) + 1] )
      {
        if ( *(_DWORD *)(*(_DWORD *)(a1 + 3640) + 8) != 1 )
        {
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1) )
          {
            v6 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
            if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 320))(v6) )
            {
              v7 = (_DWORD *)sub_1026A890((unsigned int *)(a1 + 3920));
              v53 = (float *)sub_10019640(v7);
              v8 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
              v9 = (float *)sub_10019640(v8);
              sub_1004BCD0(v9, v53);
              v65 = a2;
              v10 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 504))(a1);
              v11 = (_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 368))(a1, v10);
              v12 = (float *)sub_10019640(v11);
              sub_1004BCD0(v12, v63);
              if ( v65 - a2 < *(float *)(dword_106EB684 + 44)
                && *(float *)(dword_106B31C8 + 12) - *(float *)(a1 + 3916) < *(float *)(dword_106EB6CC + 44) )
              {
                v13 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
                sub_103B1710(*(_DWORD *)(a1 + 3640), a1 + 3620, v13, 0.5);
              }
            }
          }
        }
      }
    }
  }
  if ( *(_DWORD *)(*(_DWORD *)(a1 + 3640) + 8) == 1 )
    sub_10023CB0((char *)a1, 77);
  else
    sub_10023CB0((char *)a1, 78);
  v14 = *(_DWORD *)(a1 + 3800);
  if ( v14 != -1
    && off_1061BE18[4 * (*(_DWORD *)(a1 + 3800) & 0xFFF) + 2] == v14 >> 12
    && off_1061BE18[4 * (*(_DWORD *)(a1 + 3800) & 0xFFF) + 1] )
  {
    sub_10023CB0((char *)a1, 79);
    if ( *(_DWORD *)(dword_106EAF7C + 48) )
    {
      v15 = *(_DWORD *)(a1 + 3800);
      if ( v15 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3800) & 0xFFF) + 2] != v15 >> 12 )
        v16 = 0;
      else
        v16 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3800) & 0xFFF) + 1];
      v50 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v16 + 576))(v16);
      v17 = sub_103AF3E0(a1, v63);
      sub_1002A5F0((int)&savedregs, a1, v17, v50, 1174421507, a1, 0, (int)v59);
      sub_1011BC50((float *)v59, (float *)v60, 0, 255, 0, 0, 0.1);
      if ( 1.0 != *(float *)&v60[8] )
      {
        v18 = sub_103B0EE0((_DWORD *)a1);
        v19 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v18 + 576))(v18);
        sub_1011BC50((float *)v60, v19, 255, 0, 0, 0, 0.1);
      }
    }
  }
  else
  {
    sub_10023E00((char *)a1, 79);
  }
  sub_10023E00((char *)a1, 22);
  sub_10023E00((char *)a1, 81);
  if ( *(_BYTE *)(a1 + 3860) || *(_BYTE *)(a1 + 3862) )
  {
    v46 = *(_DWORD *)(a1 + 3800);
    if ( v46 != -1 )
    {
      v47 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 3800) & 0xFFF) + 1];
      v48 = v46 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 3800) & 0xFFF) + 2] == v48 )
      {
        if ( *v47 )
        {
          if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 3800) & 0xFFF) + 2] == v48 )
            v49 = *v47;
          else
            v49 = 0;
          if ( (*(_DWORD *)(v49 + 252) & 0x800) != 0 )
            sub_100DAE60(v49);
          if ( (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 2028))(a1, v49 + 580, 0) )
LABEL_90:
            sub_10023CB0((char *)a1, 22);
        }
      }
    }
  }
  else
  {
    v20 = *(_DWORD *)(a1 + 3800);
    if ( v20 != -1
      && off_1061BE18[4 * (*(_DWORD *)(a1 + 3800) & 0xFFF) + 2] == v20 >> 12
      && off_1061BE18[4 * (*(_DWORD *)(a1 + 3800) & 0xFFF) + 1] )
    {
      if ( !sub_100697A0((_DWORD *)a1, 90, 0) && !sub_100697A0((_DWORD *)a1, 91, 0) )
      {
        v21 = *(_DWORD *)a1;
        v22 = (_DWORD *)sub_1026A890((unsigned int *)(a1 + 3800));
        v51 = sub_10019640(v22);
        v23 = sub_103AFA80((float *)a1, v63);
        if ( !(*(unsigned __int8 (__thiscall **)(int, float *, _DWORD *, _DWORD))(v21 + 2024))(a1, v23, v51, 0) )
        {
          v54 = (int *)sub_1026A890((unsigned int *)(a1 + 3800));
          v24 = sub_103AFA80((float *)a1, v63);
          sub_103B4DD0((float *)a1, (int)v24, v54);
          goto LABEL_91;
        }
        goto LABEL_90;
      }
    }
    else if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1) )
    {
      if ( *(_DWORD *)(dword_106EAF34 + 48) && !*(_BYTE *)(a1 + 3912) )
      {
        v25 = *(int (__thiscall **)(int))(*(_DWORD *)a1 + 1868);
        *(_DWORD *)(a1 + 3852) = 0;
        v26 = (_DWORD *)v25(a1);
        for ( i = sub_10077AB0(v26, (unsigned __int8 *)&v65);
              i;
              i = (unsigned int *)sub_10077340(v32, (unsigned __int8 *)&v65) )
        {
          v28 = *(_DWORD *)a1;
          v29 = sub_1026A890(i);
          if ( (*(int (__thiscall **)(int, int))(v28 + 1080))(a1, v29) != 4 )
          {
            v30 = *(_DWORD *)a1;
            v31 = sub_1026A890(i);
            if ( (*(int (__thiscall **)(int, int))(v30 + 1080))(a1, v31) != 3
              && *(float *)(dword_106B31C8 + 12) == *((float *)i + 7) )
            {
              ++*(_DWORD *)(a1 + 3852);
            }
          }
          v32 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 1868))(a1);
        }
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1) )
        {
          v33 = *(_DWORD *)(a1 + 3640);
          if ( *(_DWORD *)(v33 + 8) == 1
            && *(float *)(dword_106B31C8 + 12) != *(float *)(a1 + 2416)
            && *(int *)(v33 + 92) >= 3 )
          {
            v34 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
            if ( *(char **)(v34 + 92) != "npc_bullseye" && !sub_100D6240((_DWORD *)v34, "npc_bullseye") )
            {
              v35 = *(_DWORD *)a1;
              v64 = *(_DWORD *)(a1 + 3852);
              if ( v64 <= 1 )
              {
                v37 = (*(int (__thiscall **)(int))(v35 + 368))(a1);
                if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v37 + 320))(v37) )
                {
                  v38 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
                  if ( v38 == sub_103AFAE0(*(_DWORD **)(a1 + 3640)) )
                  {
                    v56 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)(a1 + 3620) + 40))(a1 + 3620);
                    v39 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
                    sub_103B1710(*(_DWORD *)(a1 + 3640), a1 + 3620, v39, v56);
                  }
                }
              }
              else
              {
                v55 = *(float *)(dword_106B31C8 + 12) + (double)v64;
                v52 = (*(int (__thiscall **)(int))(v35 + 368))(a1);
                v36 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 1868))(a1);
                sub_10077890(v36, v52, v55);
                sub_100285C0((_DWORD *)a1, 0, 0);
                sub_1002F420(a1);
              }
            }
          }
        }
      }
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1) )
      {
        if ( !sub_100697A0((_DWORD *)a1, 90, 0) && !sub_100697A0((_DWORD *)a1, 91, 0) )
        {
          if ( !sub_10023D10((_DWORD *)a1, 10)
            || (v40 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1),
                v41 = *(_DWORD *)a1,
                v42 = *v40,
                v64 = (int)v40,
                v43 = sub_103AFA80((float *)a1, v63),
                v57 = (*(int (__thiscall **)(int, _BYTE *, float *, int, _DWORD))(v42 + 520))(v64, v62, v43, 1, 0),
                v44 = sub_103AFA80((float *)a1, v61),
                !(*(unsigned __int8 (__thiscall **)(int, float *, int))(v41 + 2024))(a1, v44, v57)) )
          {
            v58 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
            v45 = sub_103AFA80((float *)a1, v61);
            sub_103B4DD0((float *)a1, (int)v45, v58);
          }
        }
      }
    }
    else
    {
      sub_103AEED0((float *)a1, 490.0);
    }
  }
LABEL_91:
  if ( *(_BYTE *)(a1 + 3862) )
  {
    if ( sub_10023D10((_DWORD *)a1, 75) )
      Msg("TELL WEDGE I'M TRYING TO CROUCH!\n");
    sub_10023E00((char *)a1, 75);
  }
}
