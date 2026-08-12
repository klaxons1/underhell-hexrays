char *__userpurge sub_101E8A20@<eax>(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4, int a5)
{
  char v6; // bl
  char *v7; // eax
  char *v8; // edi
  int v9; // edx
  char *v10; // eax
  char v11; // al
  void *v12; // eax
  const char *v13; // eax
  const char *v14; // eax
  const char *v15; // eax
  bool v16; // zf
  int v17; // eax
  void (__stdcall *v18)(_DWORD); // edx
  const char *v19; // eax
  const char *v20; // eax
  const char *v21; // eax
  int v22; // eax
  const char *v23; // eax
  const char *v24; // eax
  const char *v25; // eax
  const char *v26; // eax
  int v27; // eax
  void *v28; // eax
  const char *v29; // eax
  int v30; // eax
  char *v31; // eax
  const char *v32; // eax
  int v33; // eax
  char *v34; // eax
  const char *v35; // eax
  int v36; // eax
  const char *v37; // eax
  int v38; // eax
  const char *v39; // eax
  int v40; // eax
  const char *v41; // eax
  int v42; // eax
  const char *v43; // eax
  int v44; // eax
  const char *v45; // eax
  int v46; // eax
  const char *v47; // eax
  const char *v48; // eax
  const char *v49; // eax
  const char *v50; // eax
  int v51; // eax
  const char *v52; // eax
  const char *v53; // eax
  const char *v54; // eax
  const char *v55; // eax
  int v56; // eax
  int v57; // ecx
  const char *v58; // eax
  int v59; // eax
  const char *v60; // eax
  const char *v61; // eax
  int v62; // eax
  int v63; // ecx
  const char *v64; // eax
  const char *v65; // eax
  char *v66; // eax
  const char *v67; // eax
  const char *v68; // eax
  int v69; // eax
  const char *v70; // eax
  const char *v71; // eax
  int v72; // eax
  char *v73; // eax
  int v74; // ebp
  const char *v75; // eax
  const char *v76; // eax
  char *v77; // eax
  const char *v78; // eax
  const char *v79; // eax
  int v80; // eax
  const char *v81; // eax
  const char *v82; // eax
  char *v83; // eax
  const char *v84; // eax
  const char *v85; // eax
  const char *v86; // eax
  int v87; // eax
  int v88; // ecx
  char *v89; // eax
  char *v90; // eax
  const char *v91; // eax
  int v92; // eax
  _DWORD **v93; // ecx
  const char *v94; // eax
  int v95; // eax
  _DWORD **v96; // ecx
  const char *v97; // eax
  int v98; // eax
  int v99; // edx
  char *v100; // eax
  char v101; // al
  const char *v102; // eax
  int v103; // eax
  int v104; // edx
  void *v105; // eax
  const char *v106; // eax
  const char *v107; // eax
  const char *v108; // eax
  const char *v109; // eax
  double v110; // st7
  double (__thiscall *v111)(char *); // eax
  double v112; // st7
  float v114; // [esp+20h] [ebp-130h]
  float v116; // [esp+28h] [ebp-128h]
  float v117; // [esp+28h] [ebp-128h]
  float v118; // [esp+28h] [ebp-128h]
  float v119; // [esp+28h] [ebp-128h]
  int v121; // [esp+2Ch] [ebp-124h]
  float v122; // [esp+3Ch] [ebp-114h] BYREF
  float v123; // [esp+40h] [ebp-110h]
  float v124; // [esp+44h] [ebp-10Ch]
  float v125; // [esp+48h] [ebp-108h]
  float v126; // [esp+4Ch] [ebp-104h]
  int v127; // [esp+50h] [ebp-100h]
  char Destination[128]; // [esp+54h] [ebp-FCh] BYREF
  char Src[124]; // [esp+D4h] [ebp-7Ch] BYREF

  v125 = 1.0;
  v124 = 1.0;
  v123 = 1.0;
  v6 = 0;
  v7 = (char *)sub_100DDA40(380);
  if ( v7 )
    v8 = sub_101E5C40(v7, a1);
  else
    v8 = 0;
  v9 = *(_DWORD *)(a1 + 16);
  v122 = *(float *)&v8;
  sub_10258C50(v9, &v122);
  (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(a1 + 164) + 4))(*(_DWORD *)(a1 + 164), 0, a3);
  v10 = (char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
  v11 = (unsigned __int8)sub_101E1DC0(v10);
  sub_101E1B30(v8, v11);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 164) + 4))(*(_DWORD *)(a1 + 164), 0);
  v12 = (void *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
  sub_101E1B60(v12);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 164) + 4))(*(_DWORD *)(a1 + 164), 1);
  v13 = (const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
  if ( _stricmp(v13, "{") )
    (*(void (__cdecl **)(_DWORD, const char *))(**(_DWORD **)(a1 + 164) + 12))(*(_DWORD *)(a1 + 164), "expecting {\n");
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 164) + 4))(*(_DWORD *)(a1 + 164), 1);
  v14 = (const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
  if ( _stricmp(v14, "}") )
  {
    do
    {
      if ( !strlen((const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164))) )
      {
        (*(void (__cdecl **)(_DWORD, const char *))(**(_DWORD **)(a1 + 164) + 12))(
          *(_DWORD *)(a1 + 164),
          "expecting more tokens!");
        break;
      }
      v15 = (const char *)(***(int (__thiscall ****)(_DWORD, int))(a1 + 164))(*(_DWORD *)(a1 + 164), a2);
      v16 = _stricmp(v15, "time") == 0;
      v17 = **(_DWORD **)(a1 + 164);
      if ( v16 )
      {
        v18 = *(void (__stdcall **)(_DWORD))(v17 + 4);
        v123 = 1.0;
        v18(0);
        v19 = (const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
        v122 = atof(v19);
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 164) + 8))(*(_DWORD *)(a1 + 164)) )
        {
          (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 164) + 4))(*(_DWORD *)(a1 + 164), 0);
          v20 = (const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
          v123 = atof(v20);
        }
        sub_101E1C90((float *)v8, v122);
        sub_101E3DE0((int)v8, v123);
        goto LABEL_86;
      }
      v21 = (const char *)(*(int (**)(void))v17)();
      v16 = _stricmp(v21, "ramp") == 0;
      v22 = **(_DWORD **)(a1 + 164);
      if ( v16 )
      {
        v6 = 1;
        (*(void (__stdcall **)(_DWORD))(v22 + 4))(0);
        v23 = (const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
        v126 = atof(v23);
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 164) + 8))(*(_DWORD *)(a1 + 164)) )
        {
          (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 164) + 4))(*(_DWORD *)(a1 + 164), 0);
          v24 = (const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
          v125 = atof(v24);
        }
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 164) + 8))(*(_DWORD *)(a1 + 164)) )
        {
          (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 164) + 4))(*(_DWORD *)(a1 + 164), 0);
          v25 = (const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
          v124 = atof(v25);
        }
        goto LABEL_86;
      }
      v26 = (const char *)(*(int (**)(void))v22)();
      v16 = _stricmp(v26, "param") == 0;
      v27 = **(_DWORD **)(a1 + 164);
      if ( v16 )
      {
        (*(void (__stdcall **)(_DWORD))(v27 + 4))(0);
        v28 = (void *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
        sub_101E1B80(v28);
      }
      else
      {
        v29 = (const char *)(*(int (**)(void))v27)();
        v16 = _stricmp(v29, "param2") == 0;
        v30 = **(_DWORD **)(a1 + 164);
        if ( v16 )
        {
          (*(void (__stdcall **)(_DWORD))(v30 + 4))(0);
          v31 = (char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
          sub_101E1BA0(v31);
        }
        else
        {
          v32 = (const char *)(*(int (**)(void))v30)();
          v16 = _stricmp(v32, "param3") == 0;
          v33 = **(_DWORD **)(a1 + 164);
          if ( v16 )
          {
            (*(void (__stdcall **)(_DWORD))(v33 + 4))(0);
            v34 = (char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
            sub_101E1C20(v34);
          }
          else
          {
            v35 = (const char *)(*(int (**)(void))v33)();
            v16 = _stricmp(v35, "pitch") == 0;
            v36 = **(_DWORD **)(a1 + 164);
            if ( v16 )
            {
              (*(void (__stdcall **)(_DWORD))(v36 + 4))(0);
              v37 = (const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
              v38 = atoi(v37);
              sub_101E2150(v8, v38);
            }
            else
            {
              v39 = (const char *)(*(int (**)(void))v36)();
              v16 = _stricmp(v39, "yaw") == 0;
              v40 = **(_DWORD **)(a1 + 164);
              if ( v16 )
              {
                (*(void (__stdcall **)(_DWORD))(v40 + 4))(0);
                v41 = (const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
                v42 = atoi(v41);
                sub_1025AD80(v42);
              }
              else
              {
                v43 = (const char *)(*(int (**)(void))v40)();
                v16 = _stricmp(v43, "loopcount") == 0;
                v44 = **(_DWORD **)(a1 + 164);
                if ( v16 )
                {
                  (*(void (__stdcall **)(_DWORD))(v44 + 4))(0);
                  v45 = (const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
                  v46 = atoi(v45);
                  sub_101E2160(v8, v46);
                }
                else
                {
                  v47 = (const char *)(*(int (**)(void))v44)();
                  if ( !_stricmp(v47, "resumecondition") )
                  {
                    sub_101E1EB0(v8, 1);
                  }
                  else
                  {
                    v48 = (const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
                    if ( !_stricmp(v48, "fixedlength") )
                    {
                      sub_101E1E90(v8, 1);
                    }
                    else
                    {
                      v49 = (const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
                      if ( !_stricmp(v49, "lockbodyfacing") )
                      {
                        sub_101E1EE0(v8, 1);
                      }
                      else
                      {
                        v50 = (const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
                        v16 = _stricmp(v50, "distancetotarget") == 0;
                        v51 = **(_DWORD **)(a1 + 164);
                        if ( v16 )
                        {
                          (*(void (__stdcall **)(_DWORD))(v51 + 4))(0);
                          v52 = (const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
                          v116 = atof(v52);
                          sub_101E1F00((float *)v8, v116);
                        }
                        else
                        {
                          v53 = (const char *)(*(int (**)(void))v51)();
                          if ( !_stricmp(v53, "forceshortmovement") )
                          {
                            sub_101E1F10(v8, 1);
                          }
                          else
                          {
                            v54 = (const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
                            if ( !_stricmp(v54, "synctofollowinggesture") )
                            {
                              sub_101E1F30(v8, 1);
                            }
                            else
                            {
                              v55 = (const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
                              v56 = _stricmp(v55, "active");
                              v57 = *(_DWORD *)(a1 + 164);
                              if ( v56 )
                              {
                                v60 = (const char *)(**(int (__thiscall ***)(int))v57)(v57);
                                if ( !_stricmp(v60, "playoverscript") )
                                {
                                  sub_101E1F60(v8, 1);
                                }
                                else
                                {
                                  v61 = (const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
                                  v62 = _stricmp(v61, "tags");
                                  v63 = *(_DWORD *)(a1 + 164);
                                  if ( !v62 )
                                  {
                                    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v63 + 4))(v63, 1, v121);
                                    v64 = (const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
                                    if ( _stricmp(v64, "{") )
                                      (*(void (__cdecl **)(_DWORD, const char *))(**(_DWORD **)(a1 + 164) + 12))(
                                        *(_DWORD *)(a1 + 164),
                                        "expecting {\n");
                                    v121 = 1;
                                    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 164) + 4))(*(_DWORD *)(a1 + 164));
                                    while ( strlen((const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164))) )
                                    {
                                      v65 = (const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
                                      if ( !_stricmp(v65, "}") )
                                        goto LABEL_86;
                                      v66 = (char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
                                      sub_102282F0(Destination, v66, 0x80u);
                                      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 164) + 4))(
                                        *(_DWORD *)(a1 + 164),
                                        0);
                                      v67 = (const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
                                      v117 = atof(v67);
                                      sub_101E4A60((int *)v8, Destination, v117);
                                      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 164) + 4))(
                                        *(_DWORD *)(a1 + 164),
                                        1);
                                    }
LABEL_69:
                                    (*(void (__cdecl **)(_DWORD, const char *))(**(_DWORD **)(a1 + 164) + 12))(
                                      *(_DWORD *)(a1 + 164),
                                      "expecting relative tag\n");
                                    goto LABEL_86;
                                  }
                                  v68 = (const char *)(**(int (__thiscall ***)(int))v63)(v63);
                                  v16 = _stricmp(v68, "sequenceduration") == 0;
                                  v69 = **(_DWORD **)(a1 + 164);
                                  if ( !v16 )
                                  {
                                    v71 = (const char *)(*(int (**)(void))v69)();
                                    v16 = _stricmp(v71, "absolutetags") == 0;
                                    v72 = **(_DWORD **)(a1 + 164);
                                    if ( v16 )
                                    {
                                      (*(void (__stdcall **)(int, int))(v72 + 4))(1, v121);
                                      v73 = (char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
                                      v74 = sub_101E2100(v73);
                                      if ( v74 == -1 )
                                        (*(void (__cdecl **)(_DWORD, const char *))(**(_DWORD **)(a1 + 164) + 12))(
                                          *(_DWORD *)(a1 + 164),
                                          "expecting valid tag type!!!");
                                      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 164) + 4))(
                                        *(_DWORD *)(a1 + 164),
                                        1);
                                      v75 = (const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
                                      if ( _stricmp(v75, "{") )
                                        (*(void (__cdecl **)(_DWORD, const char *))(**(_DWORD **)(a1 + 164) + 12))(
                                          *(_DWORD *)(a1 + 164),
                                          "expecting {\n");
                                      v121 = 1;
                                      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 164) + 4))(*(_DWORD *)(a1 + 164));
                                      if ( strlen((const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164))) )
                                      {
                                        while ( 1 )
                                        {
                                          v76 = (const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
                                          if ( !_stricmp(v76, "}") )
                                            goto LABEL_86;
                                          v77 = (char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
                                          sub_102282F0(Destination, v77, 0x80u);
                                          (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 164) + 4))(
                                            *(_DWORD *)(a1 + 164),
                                            0);
                                          v78 = (const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
                                          v119 = atof(v78);
                                          sub_101E4C80(v8, v74, Destination, v119);
                                          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 164) + 4))(
                                            *(_DWORD *)(a1 + 164),
                                            1);
                                          if ( !strlen((const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164))) )
                                            goto LABEL_69;
                                        }
                                      }
                                    }
                                    else
                                    {
                                      v79 = (const char *)(*(int (**)(void))v72)();
                                      v16 = _stricmp(v79, "flextimingtags") == 0;
                                      v80 = **(_DWORD **)(a1 + 164);
                                      if ( !v16 )
                                      {
                                        v86 = (const char *)(*(int (**)(void))v80)();
                                        v87 = _stricmp(v86, "relativetag");
                                        v88 = *(_DWORD *)(a1 + 164);
                                        if ( v87 )
                                        {
                                          v91 = (const char *)(**(int (__thiscall ***)(int))v88)(v88);
                                          v92 = _stricmp(v91, "flexanimations");
                                          v93 = *(_DWORD ***)(a1 + 164);
                                          if ( v92 )
                                          {
                                            v94 = (const char *)((int (__thiscall *)(_DWORD **))**v93)(v93);
                                            v95 = _stricmp(v94, "event_ramp");
                                            v96 = *(_DWORD ***)(a1 + 164);
                                            if ( v95 )
                                            {
                                              v97 = (const char *)((int (__thiscall *)(_DWORD **))**v96)(v96);
                                              v98 = _stricmp(v97, "cctype");
                                              v99 = **(_DWORD **)(a1 + 164);
                                              if ( v98 )
                                              {
                                                v102 = (const char *)(*(int (**)(void))v99)();
                                                v103 = _stricmp(v102, "cctoken");
                                                v104 = **(_DWORD **)(a1 + 164);
                                                if ( v103 )
                                                {
                                                  v106 = (const char *)(*(int (**)(void))v104)();
                                                  if ( !_stricmp(v106, "cc_usingcombinedfile") )
                                                  {
                                                    sub_101E21F0(v8, 1);
                                                  }
                                                  else
                                                  {
                                                    v107 = (const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
                                                    if ( !_stricmp(v107, "cc_combinedusesgender") )
                                                    {
                                                      sub_101E2260(v8, 1);
                                                    }
                                                    else
                                                    {
                                                      v108 = (const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
                                                      if ( !_stricmp(v108, "cc_noattenuate") )
                                                        sub_101E2280(v8, 1);
                                                    }
                                                  }
                                                }
                                                else
                                                {
                                                  (*(void (__stdcall **)(_DWORD))(v104 + 4))(0);
                                                  v105 = (void *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
                                                  sub_101E21D0(v105);
                                                }
                                              }
                                              else
                                              {
                                                (*(void (__stdcall **)(_DWORD))(v99 + 4))(0);
                                                v100 = (char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
                                                v101 = (unsigned __int8)sub_101E1E50(v100);
                                                sub_101E21B0(v8, v101);
                                              }
                                            }
                                            else
                                            {
                                              sub_101E8A00(v96, (int)v8);
                                            }
                                          }
                                          else
                                          {
                                            sub_101E7DF0(v93, (float *)v8, 1);
                                          }
                                        }
                                        else
                                        {
                                          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v88 + 4))(v88, 0);
                                          v89 = (char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
                                          sub_102282F0(Src, v89, 0x80u);
                                          (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 164) + 4))(
                                            *(_DWORD *)(a1 + 164),
                                            0);
                                          v90 = (char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
                                          sub_102282F0(Destination, v90, 0x80u);
                                          sub_101E1FB0(v8, 1, Src, Destination);
                                        }
                                        goto LABEL_86;
                                      }
                                      (*(void (__stdcall **)(int, int))(v80 + 4))(1, v121);
                                      v81 = (const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
                                      if ( _stricmp(v81, "{") )
                                        (*(void (__cdecl **)(_DWORD, const char *))(**(_DWORD **)(a1 + 164) + 12))(
                                          *(_DWORD *)(a1 + 164),
                                          "expecting {\n");
                                      v121 = 1;
                                      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 164) + 4))(*(_DWORD *)(a1 + 164));
                                      if ( strlen((const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164))) )
                                      {
                                        while ( 1 )
                                        {
                                          v82 = (const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
                                          if ( !_stricmp(v82, "}") )
                                            goto LABEL_86;
                                          v83 = (char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
                                          sub_102282F0(Destination, v83, 0x80u);
                                          (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 164) + 4))(
                                            *(_DWORD *)(a1 + 164),
                                            0);
                                          v84 = (const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
                                          v122 = atof(v84);
                                          (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 164) + 4))(
                                            *(_DWORD *)(a1 + 164),
                                            0);
                                          v85 = (const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
                                          LOBYTE(v127) = atoi(v85) != 0;
                                          sub_101E4AD0((int *)v8, Destination, v122, v127);
                                          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 164) + 4))(
                                            *(_DWORD *)(a1 + 164),
                                            1);
                                          if ( !strlen((const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164))) )
                                            goto LABEL_69;
                                        }
                                      }
                                    }
                                    goto LABEL_69;
                                  }
                                  (*(void (__stdcall **)(_DWORD))(v69 + 4))(0);
                                  v70 = (const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
                                  v118 = atof(v70);
                                  sub_101E2140((float *)v8, v118);
                                }
                              }
                              else
                              {
                                (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v57 + 4))(v57, 0);
                                v58 = (const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
                                v59 = atoi(v58);
                                sub_101E22A0(v8, v59 != 0);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_86:
      a2 = 1;
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 164) + 4))(*(_DWORD *)(a1 + 164));
      v109 = (const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
    }
    while ( _stricmp(v109, "}") );
  }
  if ( a5 )
    sub_101EC9E0((char)v8);
  sub_101E1D30(v8, a4);
  sub_101E1D50(v8, a5);
  if ( v6 && !sub_100818B0((_DWORD *)v8 + 23) && (1.0 != v125 || 1.0 != v124 || 1.0 != v123) )
  {
    v110 = ((double (__thiscall *)(char *))**(_DWORD **)v8)(v8);
    v111 = **(double (__thiscall ***)(char *))v8;
    v122 = v110 * (1.0 - v125);
    v112 = v111(v8);
    v123 = v112 * v123;
    sub_101E3EC0((int *)v8 + 23, v122, v124, 0);
    v114 = (v123 + v122) * 0.5;
    sub_101E3EC0((int *)v8 + 23, v114, v124, 0);
    sub_101E3EC0((int *)v8 + 23, v123, v124, 0);
    sub_101E3B90((_DWORD *)v8 + 23, (double (__thiscall ***)(_DWORD))v8);
  }
  return v8;
}
