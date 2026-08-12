void __thiscall sub_101FAF10(int this, int a2, int a3)
{
  double v5; // st7
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  double v9; // st7
  double v10; // st7
  double v11; // st6
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  int v15; // edi
  float v16; // [esp+30h] [ebp-18h]
  int i; // [esp+44h] [ebp-4h]
  int v19; // [esp+50h] [ebp+8h]

  if ( this != -684 )
    *(_DWORD *)(this + 684) = 0;
  *(_BYTE *)(this + 688) = 0;
  *(_DWORD *)(this + 11028) = a2;
  if ( *(_BYTE *)(a2 + 3360)
    && *(int *)(dword_106B31C8 + 20) > 1
    && *(_DWORD *)(dword_106BD064 + 48)
    && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 1612))(a2)
    && (*(_DWORD *)(a2 + 3416) & 8) == 0 )
  {
    CVProfile::EnterScope(g_VProfCurrentProfile, "StartLagCompensation", 0, "Networking", 0, 4);
    memset((void *)(this + 692), 0, 0x1430u);
    memset((void *)(this + 5860), 0, 0x1430u);
    v5 = 0.0;
    v6 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(a2 + 24));
    v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 80))(dword_106B31D0, v6);
    if ( v7 )
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 36))(v7, 0);
    else
      v5 = (float)0.0;
    v8 = (int)(*(float *)(a2 + 3356) / *(float *)(dword_106B31C8 + 28) + 0.5);
    v9 = v5 + (double)v8 * *(float *)(dword_106B31C8 + 28);
    if ( *(float *)(dword_106BD0AC + 44) >= v9 )
    {
      if ( v9 < 0.0 )
        v9 = 0.0;
      v11 = v9;
      v10 = 0.5;
    }
    else
    {
      v10 = 0.5;
      v11 = *(float *)(dword_106BD0AC + 44);
    }
    v19 = *(_DWORD *)(a3 + 8) - v8;
    if ( fabs(v11 - (double)(*(_DWORD *)(dword_106B31C8 + 24) - v19) * *(float *)(dword_106B31C8 + 28)) > 0.2 )
      v19 = *(_DWORD *)(dword_106B31C8 + 24) - (int)(v10 + v11 / *(float *)(dword_106B31C8 + 28));
    v12 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(a2 + 24));
    v13 = 1;
    for ( i = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 316))(dword_106B31D0, v12 - 1);
          v13 <= *(_DWORD *)(dword_106B31C8 + 20);
          ++v13 )
    {
      v14 = sub_1025FB50(v13);
      v15 = v14;
      if ( v14 && a2 != v14 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int, int, int, int))(*(_DWORD *)a2 + 1156))(a2, v14, a3, i) )
        {
          v16 = (double)v19 * *(float *)(dword_106B31C8 + 28);
          sub_101FA020((_DWORD *)(this - 12), v15, v16);
        }
      }
    }
    CVProfile::ExitScope(g_VProfCurrentProfile);
  }
}
