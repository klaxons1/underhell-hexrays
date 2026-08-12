int __usercall sub_101314A0@<eax>(int result@<eax>, int a2@<ecx>)
{
  int v2; // edi
  double v4; // st7
  int v5; // ecx
  __int16 v6; // fps
  bool v7; // c0
  char v8; // c2
  bool v9; // c3
  double v10; // st5
  __int16 v11; // fps
  bool v12; // c0
  char v13; // c2
  bool v14; // c3
  double v15; // st7
  int v16; // eax
  int v17; // ebx
  int v18; // eax
  int v19; // ebx
  int v20; // eax
  int v21; // ebx
  float *v22; // eax
  int v23; // eax
  int v24; // ebx
  float *v25; // eax
  int v26; // ebx
  int v27; // eax
  int v28; // ebx
  int v29; // edi
  int v30; // eax
  int v31; // edi
  float *v32; // eax
  double v33; // st7
  double v34; // st6
  double v35; // st5
  int v36; // ebx
  int v37; // eax
  float v38; // [esp+18h] [ebp-34h]
  float v39; // [esp+28h] [ebp-24h]
  float v40; // [esp+2Ch] [ebp-20h]
  float v41; // [esp+30h] [ebp-1Ch]
  int v42; // [esp+40h] [ebp-Ch]
  int v43; // [esp+40h] [ebp-Ch]
  int v44; // [esp+40h] [ebp-Ch]
  float v45; // [esp+44h] [ebp-8h]
  unsigned __int8 v46; // [esp+48h] [ebp-4h] BYREF
  unsigned __int8 v47; // [esp+49h] [ebp-3h]
  unsigned __int8 v48; // [esp+4Ah] [ebp-2h]

  v2 = 0;
  if ( byte_1043585C )
  {
    result = sub_100EB220();
    if ( result )
      result = (*(int (**)(int, _DWORD, int, int, _DWORD, int, _DWORD, int, const char *, ...))(*(_DWORD *)dword_1047CA64
                                                                                              + 536))(
                 dword_1047CA64,
                 *(_DWORD *)(a2 + 208),
                 2,
                 42,
                 0,
                 255,
                 0,
                 255,
                 "Particle Performance Metric : %d",
                 (result + 50) / 100);
  }
  v4 = *(float *)off_103DC81C - *(float *)(a2 + 216);
  v5 = *(_DWORD *)(dword_10439584 + 48);
  v45 = v4;
  if ( v5 )
  {
    v7 = v4 > 0.0;
    v8 = 0;
    v9 = 0.0 == v4;
    LOWORD(result) = v6;
    if ( v4 > 0.0 )
    {
      v10 = *(float *)(a2 + 216);
      v12 = v10 > -1.0;
      v13 = 0;
      v14 = -1.0 == v10;
      LOWORD(result) = v11;
      if ( -1.0 != v10 )
      {
        v2 = 1;
        if ( v5 == 2 )
        {
          v15 = 1.0 / v4;
          if ( *(float *)(a2 + 212) >= 0.0 )
          {
            *(float *)(a2 + 212) = 0.1 * v15 + *(float *)(a2 + 212) * 0.89999998;
          }
          else
          {
            *(float *)(a2 + 212) = v15;
            *(_DWORD *)(a2 + 220) = (int)v15;
            *(_DWORD *)(a2 + 224) = (int)v15;
          }
          v16 = (int)v15;
          if ( (int)v15 < *(_DWORD *)(a2 + 224) )
            *(_DWORD *)(a2 + 224) = v16;
          if ( v16 > *(_DWORD *)(a2 + 220) )
            *(_DWORD *)(a2 + 220) = v16;
          v42 = (int)*(float *)(a2 + 212);
          sub_101312F0(v42, (int)&v46);
          v17 = *(_DWORD *)dword_1047CA64;
          v18 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 204))(dword_1041315C);
          result = (*(int (**)(int, _DWORD, int, int, _DWORD, _DWORD, _DWORD, int, const char *, ...))(v17 + 536))(
                     dword_1047CA64,
                     *(_DWORD *)(a2 + 208),
                     2,
                     2,
                     v46,
                     v47,
                     v48,
                     255,
                     "%3i fps (%3i, %3i) %.1f ms on %s",
                     v42,
                     *(_DWORD *)(a2 + 224),
                     *(_DWORD *)(a2 + 220),
                     v45 * 1000.0,
                     v18);
        }
        else
        {
          *(float *)(a2 + 212) = -1.0;
          v19 = (int)(1.0 / v4);
          sub_101312F0(v19, (int)&v46);
          v43 = *(_DWORD *)dword_1047CA64;
          v20 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 204))(dword_1041315C);
          result = (*(int (**)(int, _DWORD, int, int, _DWORD, _DWORD, _DWORD, int, const char *, ...))(v43 + 536))(
                     dword_1047CA64,
                     *(_DWORD *)(a2 + 208),
                     2,
                     2,
                     v46,
                     v47,
                     v48,
                     255,
                     "%3i fps on %s",
                     v19,
                     v20);
        }
      }
    }
  }
  *(float *)(a2 + 216) = *(float *)off_103DC81C;
  v21 = *(_DWORD *)(dword_104395CC + 48);
  if ( v21 > 0 )
  {
    sub_101356D0();
    v22 = (float *)sub_101356E0();
    v39 = *v22;
    v40 = v22[1];
    v41 = v22[2];
    if ( v21 == 2 )
    {
      v23 = sub_100422D0();
      v24 = v23;
      if ( v23 )
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)v23 + 36))(v23);
        v25 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v24 + 40))(v24);
        v39 = *v25;
        v40 = v25[1];
        v41 = v25[2];
      }
    }
    v26 = *(_DWORD *)dword_1047CA64;
    v27 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_1047CA6C + 268))(
            dword_1047CA6C,
            *(_DWORD *)(a2 + 208),
            255);
    (*(void (__cdecl **)(int, _DWORD, int, int))(v26 + 536))(
      dword_1047CA64,
      *(_DWORD *)(a2 + 208),
      2,
      v2 * (v27 + 2) + 2);
    v28 = *(_DWORD *)dword_1047CA64;
    v29 = v2 + 1;
    v30 = (*(int (__thiscall **)(int, _DWORD, int, int, int, int, const char *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_1047CA6C + 268))(
            dword_1047CA6C,
            *(_DWORD *)(a2 + 208),
            255,
            255,
            255,
            255,
            "ang:  %.02f %.02f %.02f",
            COERCE_UNSIGNED_INT64(v39),
            HIDWORD(COERCE_UNSIGNED_INT64(v39)),
            COERCE_UNSIGNED_INT64(v40),
            HIDWORD(COERCE_UNSIGNED_INT64(v40)),
            COERCE_UNSIGNED_INT64(v41),
            HIDWORD(COERCE_UNSIGNED_INT64(v41)));
    (*(void (__cdecl **)(int, _DWORD, int, int))(v28 + 536))(
      dword_1047CA64,
      *(_DWORD *)(a2 + 208),
      2,
      v29 * (v30 + 2) + 2);
    v31 = v29 + 1;
    v32 = (float *)sub_100422D0();
    if ( v32 )
    {
      v33 = v32[58];
      v34 = v32[59];
      v35 = v32[60];
    }
    else
    {
      v33 = (float)0.0;
      v34 = v33;
      v35 = v33;
    }
    v36 = dword_1047CA6C;
    v38 = v35 * v35 + v34 * v34 + v33 * v33;
    off_103EDFE0(v38);
    v44 = *(_DWORD *)dword_1047CA64;
    v37 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v36 + 268))(v36, *(_DWORD *)(a2 + 208));
    return (*(int (__cdecl **)(int, _DWORD, int, int))(v44 + 536))(
             dword_1047CA64,
             *(_DWORD *)(a2 + 208),
             2,
             v31 * (v37 + 2) + 2);
  }
  return result;
}
