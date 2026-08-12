void __thiscall sub_1008BA10(_DWORD *this, int a2)
{
  int v2; // esi
  bool v3; // zf
  unsigned int v4; // eax
  int v5; // eax
  int v6; // edi
  char v7; // bl
  unsigned int *v8; // edi
  _DWORD *v9; // eax
  int v10; // ebx
  int v11; // edi
  int v12; // eax
  int v13; // eax
  unsigned int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // esi
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  void **v24; // [esp+4h] [ebp-844h] BYREF
  int v25[4]; // [esp+8h] [ebp-840h] BYREF
  _BYTE v26[2048]; // [esp+18h] [ebp-830h] BYREF
  int v27; // [esp+818h] [ebp-30h]
  _BYTE *v28; // [esp+81Ch] [ebp-2Ch]
  _BYTE v29[12]; // [esp+820h] [ebp-28h] BYREF
  _BYTE v30[12]; // [esp+82Ch] [ebp-1Ch] BYREF
  unsigned int *v31; // [esp+838h] [ebp-10h]
  _DWORD *v32; // [esp+83Ch] [ebp-Ch]
  int v33; // [esp+840h] [ebp-8h]
  bool v34; // [esp+846h] [ebp-2h]
  bool v35; // [esp+847h] [ebp-1h]

  v2 = this[9] + 168 * (unsigned __int16)a2;
  v3 = *(_DWORD *)(dword_1042C0F4 + 48) == 0;
  v32 = this;
  if ( v3 )
  {
    CVProfile::EnterScope(g_VProfCurrentProfile, "CClientShadowMgr::BuildFlashlight", 0, "Flashlight Shadows", 0, 4);
    sub_101F26A0(v2 + 12, v29, v30);
    if ( (*(unsigned __int8 (__thiscall **)(int, _BYTE *, _BYTE *))(*(_DWORD *)dword_1041315C + 132))(
           dword_1041315C,
           v29,
           v30) )
    {
      CVProfile::ExitScope(g_VProfCurrentProfile);
    }
    else
    {
      v3 = *(_DWORD *)(dword_1042C064 + 48) == 0;
      v31 = (unsigned int *)(v2 + 160);
      v4 = *(_DWORD *)(v2 + 160);
      v35 = !v3;
      if ( v4 == -1 || *((_DWORD *)off_103DCD74 + 4 * (v4 & 0xFFF) + 2) != v4 >> 12 )
        v5 = 0;
      else
        v5 = *((_DWORD *)off_103DCD74 + 4 * (v4 & 0xFFF) + 1);
      v6 = 0;
      v7 = *(_BYTE *)(v2 + 9) & 1;
      v34 = v5 != 0;
      v33 = 0;
      v24 = &CShadowLeafEnum::`vftable';
      v25[0] = (int)v26;
      v25[1] = 512;
      v25[2] = -1;
      v25[3] = 0;
      v27 = 0;
      v28 = v26;
      if ( (v7 || v35 && !v5) && (sub_10083B40(v2 + 12, (int)&v24), v6 = v27, v33 = v25[0], v7) )
      {
        (*(void (__stdcall **)(_DWORD, int, int, int))(*(_DWORD *)dword_1041318C + 16))(
          *(unsigned __int16 *)(v2 + 4),
          v2 + 12,
          v27,
          v25[0]);
      }
      else
      {
        (*(void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)dword_1041318C + 56))(*(unsigned __int16 *)(v2 + 4), 0);
        (*(void (__stdcall **)(_DWORD, int))(*(_DWORD *)dword_1041318C + 56))(*(unsigned __int16 *)(v2 + 4), 1);
      }
      if ( v35 )
      {
        if ( v34 )
        {
          v8 = v31;
          v9 = (_DWORD *)sub_1006BE10(v31);
          v10 = sub_1000EFC0(v9);
          if ( v10 )
          {
            while ( 1 )
            {
              v11 = *(_DWORD *)dword_10413178;
              v12 = (*(int (__thiscall **)(int))(*(_DWORD *)(v10 + 4) + 36))(v10 + 4);
              v13 = (*(int (__thiscall **)(int, int))(v11 + 36))(dword_10413178, v12);
              if ( v13 == 1 )
              {
                (*(void (__thiscall **)(_DWORD *, int, int, _DWORD))(*v32 + 96))(v32, a2, v10 + 4, 0);
              }
              else if ( v13 == 3 )
              {
                (*(void (__thiscall **)(_DWORD *, int, int, int))(*v32 + 96))(v32, a2, v10 + 4, 2);
              }
              v14 = *(_DWORD *)(v10 + 332);
              if ( v14 == -1 || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v10 + 332) & 0xFFF) + 2) != v14 >> 12 )
                v15 = 0;
              else
                v15 = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v10 + 332) & 0xFFF) + 1);
              v33 = v15;
              if ( !v15 )
                break;
              v10 = v33;
            }
            v8 = v31;
          }
          v16 = sub_1006BE10(v8);
          v17 = *(_DWORD *)dword_10413178;
          v18 = (*(int (__thiscall **)(int))(*(_DWORD *)(v16 + 4) + 36))(v16 + 4);
          v19 = (*(int (__thiscall **)(int, int))(v17 + 36))(dword_10413178, v18);
          if ( v19 == 1 )
          {
            v20 = sub_1006BE10(v8);
            if ( v20 )
              v21 = v20 + 4;
            else
              v21 = 0;
            (*(void (__stdcall **)(int, int, _DWORD))(*v32 + 96))(a2, v21, 0);
          }
          else if ( v19 == 3 )
          {
            v22 = sub_1006BE10(v8);
            if ( v22 )
              v23 = v22 + 4;
            else
              v23 = 0;
            (*(void (__stdcall **)(int, int, int))(*v32 + 96))(a2, v23, 2);
          }
        }
        else
        {
          (*(void (__stdcall **)(_DWORD, int, int))(*(_DWORD *)off_103DCDDC + 88))(
            *(unsigned __int16 *)(v2 + 6),
            v6,
            v33);
        }
      }
      sub_100899E0(v25);
      CVProfile::ExitScope(g_VProfCurrentProfile);
    }
  }
  else
  {
    (*(void (__stdcall **)(_DWORD, int, _DWORD, _DWORD))(*(_DWORD *)dword_1041318C + 16))(
      *(unsigned __int16 *)(v2 + 4),
      v2 + 12,
      0,
      0);
  }
}
