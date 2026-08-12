void __userpurge sub_10041810(int a1@<ecx>, int a2@<ebx>, int a3@<esi>, int a4)
{
  int v5; // ebx
  int *v6; // esi
  int v7; // ecx
  int v8; // ecx
  int v9; // ebx
  float *v10; // edx
  int v11; // eax
  int v12; // ecx
  double v13; // st7
  int v14; // eax
  int v15; // eax
  float *v16; // ecx
  long double v17; // st6
  long double v18; // st6
  int v19; // ecx
  float v20; // eax
  float v21; // edx
  int v22; // ecx
  int v23; // edi
  int v24; // ecx
  int v25; // ebx
  int v26; // ecx
  int v27; // edi
  int v28; // eax
  double v29; // st7
  double v30; // st6
  int v31; // eax
  int v32; // edx
  int v33; // edi
  int v34; // ecx
  double v35; // st7
  int v36; // ecx
  float v37; // [esp+24h] [ebp-34h]
  float v38; // [esp+24h] [ebp-34h]
  float v41; // [esp+44h] [ebp-14h] BYREF
  float v42; // [esp+48h] [ebp-10h]
  float v43; // [esp+4Ch] [ebp-Ch]
  float v44; // [esp+50h] [ebp-8h]
  float v45; // [esp+54h] [ebp-4h]

  if ( (unsigned __int8)sub_101BC880() )
  {
    v5 = 0;
    CVProfile::EnterScope(g_VProfCurrentProfile, "C_BaseFlex::GetToolRecordingState", 0, "Tools", 0, 4);
    sub_1002A520((_DWORD *)a1, a4);
    if ( !*(_DWORD *)(a1 + 1940) && (*(int (__thiscall **)(int))(*(_DWORD *)(a1 + 4) + 36))(a1 + 4) )
      sub_10026520(a1);
    v6 = *(int **)(a1 + 1940);
    if ( v6 )
    {
      if ( *v6 )
      {
        memset(flt_10405E78, 0, sizeof(flt_10405E78));
        if ( *(_DWORD *)(*v6 + 268) )
        {
          (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)a1 + 760))(a1, 1, a3, a2);
          v7 = *v6;
          if ( *(_DWORD *)(*(_DWORD *)(*v6 + 272) + *v6 + 8) == -1 )
          {
            v45 = 0.0;
            if ( *(int *)(v7 + 268) > 0 )
            {
              do
              {
                *(_DWORD *)(v5 + *(_DWORD *)(*v6 + 272) + *v6 + 8) = sub_1003E4D0((char *)(v7
                                                                                         + v5
                                                                                         + *(_DWORD *)(v7 + 272)
                                                                                         + *(_DWORD *)(v7 + v5 + *(_DWORD *)(v7 + 272) + 4)));
                v7 = *v6;
                v5 += 20;
                ++LODWORD(v45);
              }
              while ( SLODWORD(v45) < *(_DWORD *)(v7 + 268) );
            }
          }
          v8 = *v6;
          v9 = 0;
          v45 = 0.0;
          if ( *(int *)(v8 + 268) > 0 )
          {
            v10 = (float *)(a1 + 2120);
            do
            {
              v11 = v8 + v9 + *(_DWORD *)(v8 + 272);
              flt_10405E78[*(_DWORD *)(v11 + 8)] = *v10;
              v12 = *(_DWORD *)(v11 + 8);
              ++v10;
              v9 += 20;
              v13 = (*(float *)(v11 + 16) - *(float *)(v11 + 12)) * flt_10405E78[v12] + *(float *)(v11 + 12);
              v14 = ++LODWORD(v45);
              flt_10405E78[v12] = v13;
              v8 = *v6;
            }
            while ( v14 < *(_DWORD *)(*v6 + 268) );
          }
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 760))(a1, 0);
          v15 = *(_DWORD *)(a1 + 2548);
          if ( v15 != *(_DWORD *)(a1 + 2624) )
          {
            *(_DWORD *)(a1 + 2624) = v15;
            *(float *)(a1 + 2620) = *(float *)(dword_10406F6C + 44) + *((float *)off_103DC81C + 3);
          }
          if ( *(_DWORD *)(a1 + 2628) == -1 )
            *(_DWORD *)(a1 + 2628) = sub_1003E4D0("blink");
          v16 = (float *)off_103DC81C;
          flt_10405E78[*(_DWORD *)(a1 + 2628)] = 0.0;
          v17 = (*(float *)(a1 + 2620) - v16[3]) * 3.141592653589793 * 0.5 * (1.0 / *(float *)(dword_10406F6C + 44));
          if ( v17 > 0.0 )
          {
            v18 = cos(v17);
            if ( v18 > 0.0 )
            {
              flt_10405E78[*(_DWORD *)(a1 + 2628)] = sqrt(v18) * 2.0;
              v19 = *(_DWORD *)(a1 + 2628);
              if ( flt_10405E78[v19] > 1.0 )
                flt_10405E78[v19] = 2.0 - flt_10405E78[v19];
            }
          }
          sub_100416F0((__int16 *)a1, a1 + 2652);
          (*(void (__thiscall **)(int, float *, int *))(*(_DWORD *)a1 + 752))(a1, &v41, v6);
          v20 = *(float *)(a1 + 2064);
          v21 = *(float *)(a1 + 2072);
          v42 = *(float *)(a1 + 2068);
          v22 = *(_DWORD *)(a1 + 2632);
          v41 = v20;
          v43 = v21;
          if ( v22 != -1 )
          {
            v23 = *(_DWORD *)(a1 + 2636);
            if ( v23 != -1 )
            {
              v24 = *(_DWORD *)(*v6 + 272) + 20 * v22;
              v25 = *(_DWORD *)(v24 + *v6 + 8);
              v26 = *v6 + v24;
              v27 = *v6 + *(_DWORD *)(*v6 + 272) + 20 * v23;
              if ( v25 != -1 )
              {
                v28 = *(_DWORD *)(v27 + 8);
                if ( v28 != -1 )
                {
                  v29 = flt_10405E78[v25];
                  v45 = flt_10405E78[v25];
                  v30 = flt_10405E78[v28];
                  v44 = flt_10405E78[v28];
                  if ( *(float *)(v26 + 16) != *(float *)(v26 + 12) )
                  {
                    v37 = v29;
                    v29 = sub_100145F0(v37, *(float *)(v26 + 12), *(float *)(v26 + 16), 0.0, 1.0);
                    v45 = v29;
                    v30 = v44;
                  }
                  if ( *(float *)(v27 + 16) != *(float *)(v27 + 12) )
                  {
                    v38 = v30;
                    v30 = sub_100145F0(v38, *(float *)(v27 + 12), *(float *)(v27 + 16), 0.0, 1.0);
                    v29 = v45;
                  }
                  flt_10405E78[v25] = v29;
                  flt_10405E78[*(_DWORD *)(v27 + 8)] = v30;
                }
              }
            }
          }
          v31 = *v6;
          v32 = 0;
          if ( *(int *)(*v6 + 268) > 0 )
          {
            v33 = 0;
            do
            {
              v34 = v33 + *(_DWORD *)(v31 + 272);
              v35 = *(float *)(v34 + v31 + 16);
              v36 = v31 + v34;
              if ( *(float *)(v36 + 12) != v35 )
                flt_10405E78[*(_DWORD *)(v36 + 8)] = (flt_10405E78[*(_DWORD *)(v36 + 8)] - *(float *)(v36 + 12))
                                                   / (*(float *)(v36 + 16) - *(float *)(v36 + 12));
              v31 = *v6;
              ++v32;
              v33 += 20;
            }
            while ( v32 < *(_DWORD *)(*v6 + 268) );
          }
          if ( (dword_10407380 & 1) == 0 )
            dword_10407380 |= 1u;
          flt_10407374 = v41;
          flt_10407378 = v42;
          dword_1040736C = 96;
          dword_10407370 = (int)flt_10405E78;
          flt_1040737C = v43;
          sub_1022ACE0("baseflex", (int)&dword_1040736C);
        }
      }
    }
    CVProfile::ExitScope(g_VProfCurrentProfile);
  }
}
