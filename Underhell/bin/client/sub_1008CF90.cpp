void __userpurge sub_1008CF90(int a1@<ecx>, int a2@<esi>, int a3, int a4, int a5)
{
  int v5; // ebx
  bool v7; // al
  _DWORD *v8; // esi
  void (__thiscall *v9)(int); // eax
  int v10; // edx
  _DWORD *v11; // ecx
  int v12; // eax
  int v13; // esi
  int v14; // eax
  int v15; // edx
  int v16; // edi
  int v17; // eax
  int v18; // eax
  int v19; // eax
  __int32 v20; // ecx
  int v21; // eax
  __int32 v22; // ecx
  unsigned __int16 *v23; // eax
  int v24; // edi
  _DWORD v26[3]; // [esp+8Ch] [ebp-34h] BYREF
  __int32 v27[2]; // [esp+98h] [ebp-28h] BYREF
  _DWORD v28[3]; // [esp+A0h] [ebp-20h] BYREF
  __int32 v29[2]; // [esp+ACh] [ebp-14h] BYREF
  _DWORD *v30; // [esp+B4h] [ebp-Ch]
  int v31; // [esp+B8h] [ebp-8h]
  _DWORD *v32; // [esp+BCh] [ebp-4h]
  int v33; // [esp+C8h] [ebp+8h]
  int i; // [esp+CCh] [ebp+Ch]
  int v35; // [esp+D0h] [ebp+10h]

  v5 = 0;
  v32 = (_DWORD *)a1;
  CVProfile::EnterScope(g_VProfCurrentProfile, "CClientShadowMgr::ComputeShadowTextures", 0, "Shadow_Rendering", 0, 4);
  if ( *(_BYTE *)(a1 + 208) && *(_DWORD *)(dword_1042C40C + 48) && *(_DWORD *)(dword_1042C49C + 48) )
  {
    v7 = *(_DWORD *)(dword_1042C3C4 + 48) && (*(int (__thiscall **)(_DWORD))(*g_pThreadPool + 32))(g_pThreadPool);
    *(_BYTE *)(a1 + 211) = v7;
    v8 = (_DWORD *)dword_1047CA8C;
    v9 = *(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA8C + 100);
    v30 = (_DWORD *)dword_1047CA8C;
    v9(dword_1047CA8C);
    v35 = sub_1008A450(&dword_1042C60C, a3, a4, a5);
    if ( v35 )
    {
      v12 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C, a2);
      v13 = v12;
      if ( v12 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 8))(v12);
      (*(void (__thiscall **)(int, int, int, int, _DWORD))(*(_DWORD *)v13 + 292))(v13, 255, 255, 255, 0);
      v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 340))(v13);
      v15 = *(_DWORD *)v13;
      v31 = v14;
      (*(void (__thiscall **)(int, _DWORD))(v15 + 164))(v13, 0);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v13 + 80))(v13, 1);
      (*(void (__thiscall **)(int))(*(_DWORD *)v13 + 84))(v13);
      (*(void (__thiscall **)(int))(*(_DWORD *)v13 + 124))(v13);
      (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v13 + 148))(v13, 1.0, -1.0, 1.0);
      (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v13 + 128))(
        v13,
        COERCE_UNSIGNED_INT64(0.0),
        HIDWORD(COERCE_UNSIGNED_INT64(0.0)),
        COERCE_UNSIGNED_INT64(0.0),
        HIDWORD(COERCE_UNSIGNED_INT64(0.0)),
        COERCE_UNSIGNED_INT64(1.0),
        HIDWORD(COERCE_UNSIGNED_INT64(1.0)),
        COERCE_UNSIGNED_INT64(1.0),
        HIDWORD(COERCE_UNSIGNED_INT64(1.0)),
        COERCE_UNSIGNED_INT64(-9999.0),
        HIDWORD(COERCE_UNSIGNED_INT64(-9999.0)),
        COERCE_UNSIGNED_INT64(0.0),
        HIDWORD(COERCE_UNSIGNED_INT64(0.0)));
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v13 + 80))(v13, 0);
      (*(void (__thiscall **)(int))(*(_DWORD *)v13 + 84))(v13);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v13 + 428))(v13, *(_DWORD *)(a1 + 64));
      if ( *(_BYTE *)(a1 + 209) )
      {
        (*(void (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)v13 + 48))(v13, 1, 0, 0);
        *(_BYTE *)(a1 + 209) = 0;
      }
      v16 = 0;
      v33 = *(_DWORD *)(dword_1042C454 + 48);
      if ( *((_BYTE *)v32 + 211) && (*(int (__thiscall **)(_DWORD))(*g_pThreadPool + 32))(g_pThreadPool) )
      {
        v17 = 0;
        dword_1042C644 = 0;
        dword_1042C658 = 0;
        for ( i = 0; v17 < v35; i = v17 )
        {
          v18 = dword_1042C610 + 20 * *(_DWORD *)(dword_1042C624 + 4 * v17);
          if ( v16 < v33 && sub_1008AA10(v32, *(_WORD *)v18, *(float *)(v18 + 4)) )
            ++v16;
          v17 = i + 1;
        }
        v19 = dword_1042C644;
        v20 = dword_1042C638;
        v29[0] = 0;
        v29[1] = 0;
        _InterlockedExchange(v29, 0);
        v28[0] = sub_10083D00;
        v28[1] = 0;
        v28[2] = 0;
        sub_1002EF50((int)v28, v20, v19, 0x7FFFFFFF, 0);
        v21 = dword_1042C658;
        v22 = dword_1042C64C;
        v27[0] = 0;
        v27[1] = 0;
        _InterlockedExchange(v27, 0);
        v26[0] = sub_10083D00;
        v26[1] = 0;
        v26[2] = 0;
        sub_1002EF50((int)v26, v22, v21, 0x7FFFFFFF, 0);
        v16 = 0;
      }
      if ( v35 > 0 )
      {
        do
        {
          v23 = (unsigned __int16 *)(dword_1042C610 + 20 * *(_DWORD *)(dword_1042C624 + 4 * v5));
          if ( v16 >= v33 )
          {
            sub_10085AD0(v32, *v23);
          }
          else if ( sub_1008AAB0((int)v32, *v23, COERCE_INT(*((float *)v23 + 1))) )
          {
            ++v16;
          }
          ++v5;
        }
        while ( v5 < v35 );
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)v13 + 436))(v13);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v13 + 80))(v13, 1);
      (*(void (__thiscall **)(int))(*(_DWORD *)v13 + 88))(v13);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v13 + 80))(v13, 0);
      (*(void (__thiscall **)(int))(*(_DWORD *)v13 + 88))(v13);
      v24 = v31;
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v13 + 164))(v13, v31);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v13 + 164))(v13, v24);
      (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v13 + 288))(v13, 0, 0, 0);
      (*(void (__thiscall **)(int))(*(_DWORD *)v13 + 12))(v13);
      (*(void (__thiscall **)(int))(*(_DWORD *)v13 + 4))(v13);
      v11 = v30;
      v10 = *v30;
    }
    else
    {
      v10 = *v8;
      v11 = v8;
    }
    (*(void (__fastcall **)(_DWORD *))(v10 + 104))(v11);
    CVProfile::ExitScope(g_VProfCurrentProfile);
  }
  else
  {
    CVProfile::ExitScope(g_VProfCurrentProfile);
  }
}
