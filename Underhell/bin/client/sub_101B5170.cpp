int __usercall sub_101B5170@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  int result; // eax
  int v5; // ebx
  int v6; // edi
  int v7; // edi
  double v8; // st7
  bool v9; // zf
  double v10; // st7
  const unsigned __int16 *v11; // eax
  int v12; // edi
  const char *v13; // [esp-Ch] [ebp-2Ch]
  unsigned int v15; // [esp-8h] [ebp-28h]
  int v17; // [esp+8h] [ebp-18h]
  int v18; // [esp+8h] [ebp-18h]
  int v19; // [esp+Ch] [ebp-14h]
  int v20; // [esp+10h] [ebp-10h]
  int v21; // [esp+10h] [ebp-10h]
  int v22; // [esp+14h] [ebp-Ch]
  float v23; // [esp+14h] [ebp-Ch]
  float v24; // [esp+14h] [ebp-Ch]
  int v25; // [esp+18h] [ebp-8h]
  float v26; // [esp+1Ch] [ebp-4h]
  int v27; // [esp+1Ch] [ebp-4h]
  float v28; // [esp+1Ch] [ebp-4h]
  const unsigned __int16 *v29; // [esp+1Ch] [ebp-4h]
  const unsigned __int16 *v30; // [esp+1Ch] [ebp-4h]
  const unsigned __int16 *v31; // [esp+1Ch] [ebp-4h]

  result = sub_100422D0();
  v19 = result;
  if ( result )
  {
    v20 = (int)(*(float *)(a1 + 240) / (*(float *)(a1 + 256) + *(float *)(a1 + 264)));
    v5 = (int)(*(float *)(a1 + 316) * 0.0099999998 * (double)v20 + 0.5);
    v6 = v5 <= v20 / 4;
    if ( *(_DWORD *)(a1 + 320) != v6 && (*(_DWORD *)(a1 + 324) || *(float *)(a1 + 316) < 100.0) )
    {
      if ( v5 > v20 / 4 )
        v13 = "SuitAuxPowerIncreasedAbove25";
      else
        v13 = "SuitAuxPowerDecreasedBelow25";
      (*(void (**)(void))(*(_DWORD *)dword_1044CC48 + 36))();
      sub_10248C80(v13);
      *(_DWORD *)(a1 + 320) = v6;
    }
    (*(void (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)dword_1047CA6C + 40))(
      dword_1047CA6C,
      *(_DWORD *)(a1 + 208),
      a3,
      a2);
    v7 = (int)*(float *)(a1 + 224);
    v22 = v7;
    v25 = (int)*(float *)(a1 + 232);
    if ( v5 > 0 )
    {
      v17 = v5;
      do
      {
        v8 = (double)v22;
        v23 = v8;
        v26 = (float)v25;
        (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 48))(
          dword_1047CA6C,
          v7,
          v25,
          (int)(v8 + *(float *)(a1 + 256)),
          (int)(*(float *)(a1 + 248) + v26));
        v9 = v17-- == 1;
        v7 = (int)(*(float *)(a1 + 256) + *(float *)(a1 + 264) + v23);
        v22 = v7;
      }
      while ( !v9 );
    }
    LOWORD(v27) = *(_WORD *)(a1 + 208);
    BYTE2(v27) = *(_BYTE *)(a1 + 210);
    HIBYTE(v27) = *(_BYTE *)(a1 + 216);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 40))(dword_1047CA6C, v27);
    if ( v5 < v20 )
    {
      v18 = v20 - v5;
      do
      {
        v10 = (double)v22;
        v24 = v10;
        v28 = (float)v25;
        (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 48))(
          dword_1047CA6C,
          v7,
          v25,
          (int)(v10 + *(float *)(a1 + 256)),
          (int)(*(float *)(a1 + 248) + v28));
        v9 = v18-- == 1;
        v7 = (int)(*(float *)(a1 + 256) + *(float *)(a1 + 264) + v24);
        v22 = v7;
      }
      while ( !v9 );
    }
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 68))(dword_1047CA6C, *(_DWORD *)(a1 + 272));
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 72))(dword_1047CA6C, *(_DWORD *)(a1 + 208));
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA6C + 80))(
      dword_1047CA6C,
      (int)*(float *)(a1 + 280),
      (int)*(float *)(a1 + 288));
    v11 = (const unsigned __int16 *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_1047CA78 + 8))(
                                      dword_1047CA78,
                                      "#Valve_Hud_AUX_POWER");
    if ( v11 )
    {
      v15 = wcslen(v11);
      result = (*(int (__stdcall **)(const unsigned __int16 *))(*(_DWORD *)dword_1047CA6C + 88))(v11);
    }
    else
    {
      v15 = 9;
      result = (*(int (__stdcall **)(const wchar_t *))(*(_DWORD *)dword_1047CA6C + 88))(L"AUX POWER");
    }
    if ( *(_DWORD *)(a1 + 324) )
    {
      v12 = (int)*(float *)(a1 + 304);
      v21 = v12;
      if ( (*(_DWORD *)(v19 + 5176) & 4) != 0 )
      {
        v29 = (const unsigned __int16 *)(*(int (__thiscall **)(int, const char *, unsigned int, _DWORD))(*(_DWORD *)dword_1047CA78 + 8))(
                                          dword_1047CA78,
                                          "#Valve_Hud_OXYGEN",
                                          v15,
                                          0);
        (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA6C + 80))(
          dword_1047CA6C,
          (int)*(float *)(a1 + 296),
          v12);
        if ( v29 )
        {
          v15 = wcslen(v29);
          (*(void (__stdcall **)(const unsigned __int16 *))(*(_DWORD *)dword_1047CA6C + 88))(v29);
        }
        else
        {
          v15 = 6;
          (*(void (__stdcall **)(const wchar_t *))(*(_DWORD *)dword_1047CA6C + 88))(L"OXYGEN");
        }
        v12 = (int)((double)v12 + *(float *)(a1 + 312));
        v21 = v12;
      }
      if ( (*(_DWORD *)(v19 + 5176) & 2) != 0 )
      {
        v30 = (const unsigned __int16 *)(*(int (__thiscall **)(int, const char *, unsigned int, _DWORD))(*(_DWORD *)dword_1047CA78 + 8))(
                                          dword_1047CA78,
                                          "#Valve_Hud_FLASHLIGHT",
                                          v15,
                                          0);
        (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA6C + 80))(
          dword_1047CA6C,
          (int)*(float *)(a1 + 296),
          v12);
        if ( v30 )
        {
          v15 = wcslen(v30);
          (*(void (__stdcall **)(const unsigned __int16 *))(*(_DWORD *)dword_1047CA6C + 88))(v30);
        }
        else
        {
          v15 = 10;
          (*(void (__stdcall **)(const wchar_t *))(*(_DWORD *)dword_1047CA6C + 88))(L"FLASHLIGHT");
        }
        v12 = (int)((double)v21 + *(float *)(a1 + 312));
      }
      result = v19;
      if ( *(_BYTE *)(v19 + 5284) )
      {
        v31 = (const unsigned __int16 *)(*(int (__thiscall **)(int, const char *, unsigned int, _DWORD))(*(_DWORD *)dword_1047CA78 + 8))(
                                          dword_1047CA78,
                                          "#Valve_Hud_SPRINT",
                                          v15,
                                          0);
        (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA6C + 80))(
          dword_1047CA6C,
          (int)*(float *)(a1 + 296),
          v12);
        if ( v31 )
        {
          wcslen(v31);
          return (*(int (__thiscall **)(int, const unsigned __int16 *))(*(_DWORD *)dword_1047CA6C + 88))(
                   dword_1047CA6C,
                   v31);
        }
        else
        {
          return (*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)dword_1047CA6C + 88))(
                   dword_1047CA6C,
                   L"SPRINT");
        }
      }
    }
  }
  return result;
}
