void __thiscall sub_10224820(int this, float a2, int a3, Concurrency::details::SchedulerProxy *a4)
{
  const char *v6; // eax
  const char *v7; // esi
  int v8; // ebx
  const char *v9; // esi
  const char *v10; // eax
  int v11; // eax
  int v12; // eax
  const char *v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  const char *v21; // eax
  int v22; // ebx
  int v23; // eax
  int v24; // ebx
  int v25; // eax
  __int64 v26; // [esp+0h] [ebp-40h]
  __int64 v27; // [esp+0h] [ebp-40h]
  __int64 v28; // [esp+0h] [ebp-40h]
  __int64 v29; // [esp+0h] [ebp-40h]
  __int64 v30; // [esp+0h] [ebp-40h]
  __int64 v31; // [esp+0h] [ebp-40h]
  __int64 v32; // [esp+0h] [ebp-40h]
  __int64 v33; // [esp+0h] [ebp-40h]
  __int64 v34; // [esp+0h] [ebp-40h]
  __int64 v35; // [esp+0h] [ebp-40h]
  __int64 v36; // [esp+0h] [ebp-40h]
  __int64 v37; // [esp+0h] [ebp-40h]
  __int64 v38; // [esp+0h] [ebp-40h]
  __int64 v39; // [esp+0h] [ebp-40h]
  __int64 v40; // [esp+0h] [ebp-40h]
  __int64 v41; // [esp+0h] [ebp-40h]
  float v42; // [esp+8h] [ebp-38h]
  int v43; // [esp+8h] [ebp-38h]
  float v44[10]; // [esp+18h] [ebp-28h] BYREF
  int v45; // [esp+48h] [ebp+8h]
  int v46; // [esp+48h] [ebp+8h]
  Concurrency::details::SchedulerProxy *NumExternalThreads; // [esp+50h] [ebp+10h]
  Concurrency::details::SchedulerProxy *v48; // [esp+50h] [ebp+10h]
  Concurrency::details::SchedulerProxy *v49; // [esp+50h] [ebp+10h]
  Concurrency::details::SchedulerProxy *v50; // [esp+50h] [ebp+10h]
  Concurrency::details::SchedulerProxy *v51; // [esp+50h] [ebp+10h]
  Concurrency::details::SchedulerProxy *v52; // [esp+50h] [ebp+10h]

  v6 = (const char *)sub_104183B0(a4);
  if ( !_stricmp(v6, "NULL") )
  {
    v7 = *(const char **)(this + 4);
    if ( !v7 )
      v7 = String;
    sub_10418BD0(a4);
    sub_1022F660("%s : %8.2f:  ignored %s\n", (char)v7);
  }
  else
  {
    v8 = 0;
    NumExternalThreads = (Concurrency::details::SchedulerProxy *)Concurrency::details::SchedulerProxy::GetNumExternalThreads(a4);
    if ( !NumExternalThreads
      || (v8 = (*(int (__thiscall **)(int, Concurrency::details::SchedulerProxy *))(*(_DWORD *)(this - 800) + 892))(
                 this - 800,
                 NumExternalThreads)) != 0 )
    {
      v48 = *(Concurrency::details::SchedulerProxy **)(this + 4);
      if ( !v48 )
        v48 = (Concurrency::details::SchedulerProxy *)String;
      sub_10418BD0(a4);
      sub_1022F660("%s : %8.2f:  start %s\n", (char)v48);
      switch ( sub_10418360(a4) )
      {
        case 1:
          if ( !*(_BYTE *)(this + 86) )
          {
            v22 = *(_DWORD *)(this - 800);
            v23 = sub_104183D0(a4);
            (*(void (__thiscall **)(int, int, int))(v22 + 872))(this - 800, a3, v23);
          }
          break;
        case 2:
          if ( v8 && !*(_BYTE *)(this + 86) )
            (*(void (__thiscall **)(int, int, int, Concurrency::details::SchedulerProxy *))(*(_DWORD *)(this - 800) + 776))(
              this - 800,
              a3,
              v8,
              a4);
          break;
        case 3:
          if ( v8 && !*(_BYTE *)(this + 86) )
          {
            v49 = *(Concurrency::details::SchedulerProxy **)(this - 800);
            v11 = sub_104183D0(a4);
            v12 = (*((int (__thiscall **)(int, int, int, _DWORD, _DWORD))v49 + 225))(this - 800, v11, v8, 0, 0);
            if ( !v12 )
              goto LABEL_45;
            (*(void (__thiscall **)(int, int, int, int, Concurrency::details::SchedulerProxy *))(*(_DWORD *)(this - 800)
                                                                                               + 800))(
              this - 800,
              a3,
              v8,
              v12,
              a4);
          }
          break;
        case 4:
          if ( !(unsigned __int8)sub_10418530(a4) )
          {
            v42 = sub_10418510(a4) + 1.0;
            sub_1041A670(v42);
          }
          if ( v8 && !*(_BYTE *)(this + 86) )
          {
            if ( sub_104184D0(a4) && strlen((const char *)sub_104184D0(a4)) )
            {
              v50 = *(Concurrency::details::SchedulerProxy **)(this - 800);
              v46 = this - 800;
              v43 = sub_104184D0(a4);
              v14 = sub_104183D0(a4);
              v15 = (*((int (__thiscall **)(int, int, int, _DWORD, int, int))v50 + 226))(this - 800, v14, v8, 0, 1, v43);
            }
            else
            {
              v51 = *(Concurrency::details::SchedulerProxy **)(this - 800);
              v46 = this - 800;
              v16 = sub_104183D0(a4);
              v15 = (*((int (__thiscall **)(int, int, int, _DWORD, int))v51 + 225))(this - 800, v16, v8, 0, 1);
            }
            if ( !v15 )
              goto LABEL_45;
            (*(void (__thiscall **)(int, int, int, int, Concurrency::details::SchedulerProxy *))(*(_DWORD *)v46 + 808))(
              v46,
              a3,
              v8,
              v15,
              a4);
          }
          break;
        case 5:
          if ( v8 )
          {
            v45 = 80;
            if ( sub_10418450(a4) )
            {
              v13 = (const char *)sub_10418450(a4);
              v45 = atoi(v13);
              if ( !v45 )
                v45 = 80;
            }
            (*(void (__thiscall **)(int, int, int, Concurrency::details::SchedulerProxy *, int))(*(_DWORD *)(this - 800)
                                                                                               + 816))(
              this - 800,
              a3,
              v8,
              a4,
              v45);
          }
          break;
        case 6:
          if ( v8 )
            (*(void (__thiscall **)(int, int, int, Concurrency::details::SchedulerProxy *))(*(_DWORD *)(this - 800) + 792))(
              this - 800,
              a3,
              v8,
              a4);
          break;
        case 7:
          if ( v8 )
            (*(void (__thiscall **)(int, int, int, Concurrency::details::SchedulerProxy *))(*(_DWORD *)(this - 800) + 832))(
              this - 800,
              a3,
              v8,
              a4);
          break;
        case 8:
          if ( v8 && !*(_BYTE *)(this + 86) )
          {
            v52 = *(Concurrency::details::SchedulerProxy **)(this - 800);
            v17 = sub_104183D0(a4);
            v18 = (*((int (__thiscall **)(int, int, int, _DWORD, _DWORD))v52 + 225))(this - 800, v17, v8, 0, 0);
            if ( !v18 )
            {
LABEL_45:
              v9 = *(const char **)(this - 540);
              if ( !v9 )
                v9 = String;
              v10 = (const char *)sub_104183D0(a4);
              goto LABEL_48;
            }
            (*(void (__thiscall **)(int, int, int, int, Concurrency::details::SchedulerProxy *))(*(_DWORD *)(this - 800)
                                                                                               + 824))(
              this - 800,
              a3,
              v8,
              v18,
              a4);
          }
          break;
        case 9:
          if ( !*(_BYTE *)(this + 86) && !*(_BYTE *)(this + 700) )
          {
            if ( !v8 )
              v8 = this - 800;
            v21 = (const char *)sub_104183D0(a4);
            switch ( atoi(v21) )
            {
              case 1:
                HIDWORD(v26) = this - 800;
                LODWORD(v26) = v8;
                sub_1010DD80((_DWORD *)(this + 260), v26, 0.0);
                break;
              case 2:
                HIDWORD(v27) = this - 800;
                LODWORD(v27) = v8;
                sub_1010DD80((_DWORD *)(this + 284), v27, 0.0);
                break;
              case 3:
                HIDWORD(v28) = this - 800;
                LODWORD(v28) = v8;
                sub_1010DD80((_DWORD *)(this + 308), v28, 0.0);
                break;
              case 4:
                HIDWORD(v29) = this - 800;
                LODWORD(v29) = v8;
                sub_1010DD80((_DWORD *)(this + 332), v29, 0.0);
                break;
              case 5:
                HIDWORD(v30) = this - 800;
                LODWORD(v30) = v8;
                sub_1010DD80((_DWORD *)(this + 356), v30, 0.0);
                break;
              case 6:
                HIDWORD(v31) = this - 800;
                LODWORD(v31) = v8;
                sub_1010DD80((_DWORD *)(this + 380), v31, 0.0);
                break;
              case 7:
                HIDWORD(v32) = this - 800;
                LODWORD(v32) = v8;
                sub_1010DD80((_DWORD *)(this + 404), v32, 0.0);
                break;
              case 8:
                HIDWORD(v33) = this - 800;
                LODWORD(v33) = v8;
                sub_1010DD80((_DWORD *)(this + 428), v33, 0.0);
                break;
              case 9:
                HIDWORD(v34) = this - 800;
                LODWORD(v34) = v8;
                sub_1010DD80((_DWORD *)(this + 452), v34, 0.0);
                break;
              case 10:
                HIDWORD(v35) = this - 800;
                LODWORD(v35) = v8;
                sub_1010DD80((_DWORD *)(this + 476), v35, 0.0);
                break;
              case 11:
                HIDWORD(v36) = this - 800;
                LODWORD(v36) = v8;
                sub_1010DD80((_DWORD *)(this + 500), v36, 0.0);
                break;
              case 12:
                HIDWORD(v37) = this - 800;
                LODWORD(v37) = v8;
                sub_1010DD80((_DWORD *)(this + 524), v37, 0.0);
                break;
              case 13:
                HIDWORD(v38) = this - 800;
                LODWORD(v38) = v8;
                sub_1010DD80((_DWORD *)(this + 548), v38, 0.0);
                break;
              case 14:
                HIDWORD(v39) = this - 800;
                LODWORD(v39) = v8;
                sub_1010DD80((_DWORD *)(this + 572), v39, 0.0);
                break;
              case 15:
                HIDWORD(v40) = this - 800;
                LODWORD(v40) = v8;
                sub_1010DD80((_DWORD *)(this + 596), v40, 0.0);
                break;
              case 16:
                HIDWORD(v41) = this - 800;
                LODWORD(v41) = v8;
                sub_1010DD80((_DWORD *)(this + 620), v41, 0.0);
                break;
              default:
                return;
            }
          }
          break;
        case 10:
          if ( v8 && !*(_BYTE *)(this + 86) )
            (*(void (__thiscall **)(int, int, int, Concurrency::details::SchedulerProxy *))(*(_DWORD *)(this - 800) + 784))(
              this - 800,
              a3,
              v8,
              a4);
          break;
        case 11:
          if ( v8 && !*(_BYTE *)(this + 86) )
            (*(void (__thiscall **)(int, int, int, Concurrency::details::SchedulerProxy *))(*(_DWORD *)(this - 800) + 840))(
              this - 800,
              a3,
              v8,
              a4);
          break;
        case 12:
          (*(void (__thiscall **)(int, int, Concurrency::details::SchedulerProxy *))(*(_DWORD *)(this - 800) + 868))(
            this - 800,
            a3,
            a4);
          break;
        case 13:
          if ( !*(_BYTE *)(this + 86) )
            (*(void (__thiscall **)(int, int, Concurrency::details::SchedulerProxy *))(*(_DWORD *)(this - 800) + 844))(
              this - 800,
              a3,
              a4);
          break;
        case 14:
          if ( !*(_BYTE *)(this + 86) )
          {
            v24 = *(_DWORD *)(this - 800);
            v25 = sub_104183D0(a4);
            (*(void (__thiscall **)(int, int, int))(v24 + 876))(this - 800, a3, v25);
          }
          break;
        case 15:
          if ( !*(_BYTE *)(this + 86) )
            (*(void (__thiscall **)(int, int, int, Concurrency::details::SchedulerProxy *))(*(_DWORD *)(this - 800) + 860))(
              this - 800,
              a3,
              v8,
              a4);
          break;
        case 16:
          if ( !sub_104183D0(a4) || (v19 = sub_104183D0(a4), sub_104291C0(v19, "debugtext", 9)) )
          {
            if ( v8 )
              (*(void (__thiscall **)(int, int, int, Concurrency::details::SchedulerProxy *))(*(_DWORD *)(this - 800)
                                                                                            + 852))(
                this - 800,
                a3,
                v8,
                a4);
          }
          else
          {
            v20 = sub_104183D0(a4);
            v44[0] = -1.0;
            v44[1] = 0.64999998;
            v44[5] = 0.0;
            v44[2] = 0.0;
            v44[6] = 0.0;
            v44[3] = -1.7102905e38;
            v44[4] = -1.7102905e38;
            v44[7] = 3.0999999;
            LODWORD(v44[9]) = 1;
            v44[8] = 0.0;
            sub_1025F150(v44, v20 + 10);
          }
          break;
        default:
          return;
      }
    }
    else
    {
      v9 = *(const char **)(this - 540);
      if ( !v9 )
        v9 = String;
      v10 = (const char *)sub_10018D60(NumExternalThreads);
LABEL_48:
      Warning("CSceneEntity %s unable to find actor named \"%s\"\n", v9, v10);
    }
  }
}
