int __userpurge sub_10154520@<eax>(int a1@<ecx>, int a2@<esi>, int a3)
{
  int result; // eax
  int v4; // ecx
  int v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // edx
  int v9; // edx
  int v10; // eax
  double v11; // st7
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  double v17; // st7
  int v18; // eax
  int v19; // eax
  int v20; // edx
  int v21; // edx
  int v22; // ecx
  int v23; // edx
  int v24; // ecx
  double v25; // st7
  bool v26; // c0
  bool v27; // c3
  double v28; // st7
  double v29; // st7
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  bool v35; // zf
  int v36; // eax
  int v37; // eax
  int v38; // eax
  float v41; // [esp+0h] [ebp-4h]
  float v42; // [esp+Ch] [ebp+8h]

  result = a3;
  v4 = *(_DWORD *)(a3 + 12);
  if ( v4 )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 20))(v4);
    v5 = result;
    if ( result )
    {
      v6 = (*(int (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)dword_106B31D0 + 72))(
             dword_106B31D0,
             *(_DWORD *)(result + 24),
             a2,
             a1);
      v7 = (*(int (__thiscall **)(int, int, const char *))(*(_DWORD *)dword_106B31D0 + 220))(
             dword_106B31D0,
             v6,
             "cl_updaterate");
      *(_DWORD *)(v5 + 3352) = sub_10429310(v7);
      if ( (dword_106B35A8 & 1) == 0 )
      {
        v8 = *(_DWORD *)g_pCVar;
        dword_106B35A8 |= 1u;
        dword_106B35A4 = (*(int (__thiscall **)(int, const char *))(v8 + 52))(g_pCVar, "sv_minupdaterate");
      }
      if ( (dword_106B35A8 & 2) != 0 )
      {
        v10 = dword_106B35A0;
      }
      else
      {
        v9 = *(_DWORD *)g_pCVar;
        dword_106B35A8 |= 2u;
        v10 = (*(int (__thiscall **)(int, const char *))(v9 + 52))(g_pCVar, "sv_maxupdaterate");
        dword_106B35A0 = v10;
      }
      if ( dword_106B35A4 && v10 )
      {
        v11 = (double)*(int *)(v5 + 3352);
        v12 = *(_DWORD *)(v10 + 28);
        if ( v11 > *(float *)(v12 + 44) || (v12 = *(_DWORD *)(dword_106B35A4 + 28), v11 < *(float *)(v12 + 44)) )
          v11 = *(float *)(v12 + 44);
        *(_DWORD *)(v5 + 3352) = (int)v11;
      }
      v13 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(v5 + 24));
      v14 = (*(int (__thiscall **)(int, int, const char *))(*(_DWORD *)dword_106B31D0 + 220))(
              dword_106B31D0,
              v13,
              "cl_interpolate");
      if ( sub_10429310(v14) )
      {
        v15 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
                dword_106B31D0,
                *(_DWORD *)(v5 + 24));
        v16 = (*(int (__thiscall **)(int, int, const char *))(*(_DWORD *)dword_106B31D0 + 220))(
                dword_106B31D0,
                v15,
                "cl_interp_ratio");
        v17 = sub_104293C0(v16);
        v42 = v17;
        if ( 0.0 == v17 )
          v42 = 1.0;
        v18 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
                dword_106B31D0,
                *(_DWORD *)(v5 + 24));
        v19 = (*(int (__thiscall **)(int, int, const char *))(*(_DWORD *)dword_106B31D0 + 220))(
                dword_106B31D0,
                v18,
                "cl_interp");
        v41 = sub_104293C0(v19);
        if ( (dword_106B35A8 & 4) == 0 )
        {
          v20 = *(_DWORD *)g_pCVar;
          dword_106B35A8 |= 4u;
          dword_106B359C = (*(int (__thiscall **)(int, const char *))(v20 + 52))(g_pCVar, "sv_client_min_interp_ratio");
        }
        if ( (dword_106B35A8 & 8) != 0 )
        {
          v22 = dword_106B3598;
        }
        else
        {
          v21 = *(_DWORD *)g_pCVar;
          dword_106B35A8 |= 8u;
          v22 = (*(int (__thiscall **)(int, const char *))(v21 + 52))(g_pCVar, "sv_client_max_interp_ratio");
          dword_106B3598 = v22;
        }
        if ( dword_106B359C && v22 && (v23 = *(_DWORD *)(dword_106B359C + 28), -1.0 != *(float *)(v23 + 44)) )
        {
          v24 = *(_DWORD *)(v22 + 28);
          v25 = *(float *)(v24 + 44);
          v26 = v42 < v25;
          v27 = v42 == v25;
          v28 = v42;
          if ( v26 || v27 )
          {
            if ( v28 < *(float *)(v23 + 44) )
              v28 = *(float *)(v23 + 44);
          }
          else
          {
            v28 = *(float *)(v24 + 44);
          }
        }
        else
        {
          v28 = v42;
          if ( 0.0 == v42 )
            v28 = 1.0;
        }
        v29 = v28 / (double)*(int *)(v5 + 3352);
        if ( v41 > v29 )
          v29 = v41;
      }
      else
      {
        v29 = 0.0;
      }
      v30 = *(_DWORD *)(v5 + 24);
      *(float *)(v5 + 3356) = v29;
      v31 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v30);
      v32 = (*(int (__thiscall **)(int, int, const char *))(*(_DWORD *)dword_106B31D0 + 220))(
              dword_106B31D0,
              v31,
              "cl_predict");
      if ( sub_10429310(v32) )
      {
        v33 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
                dword_106B31D0,
                *(_DWORD *)(v5 + 24));
        v34 = (*(int (__thiscall **)(int, int, const char *))(*(_DWORD *)dword_106B31D0 + 220))(
                dword_106B31D0,
                v33,
                "cl_predictweapons");
        v35 = sub_10429310(v34) == 0;
        v36 = *(_DWORD *)(v5 + 24);
        *(_BYTE *)(v5 + 3361) = !v35;
        v37 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v36);
        v38 = (*(int (__thiscall **)(int, int, const char *))(*(_DWORD *)dword_106B31D0 + 220))(
                dword_106B31D0,
                v37,
                "cl_lagcompensation");
        *(_BYTE *)(v5 + 3360) = sub_10429310(v38) != 0;
      }
      else
      {
        *(_WORD *)(v5 + 3360) = 0;
      }
      return (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 292))(dword_106B3CDC);
    }
  }
  return result;
}
