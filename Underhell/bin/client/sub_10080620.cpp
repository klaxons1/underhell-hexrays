void __thiscall sub_10080620(int this)
{
  int v2; // eax
  int v3; // esi
  int v4; // ebx
  int v5; // esi
  _DWORD *v6; // eax
  char v7; // cl
  int i; // ebx
  int v9; // esi
  void *v10; // esp
  _DWORD *v11; // esi
  int v12; // eax
  _DWORD **v13; // ebx
  int v14; // eax
  int *v15; // ebx
  int v16; // esi
  int v17; // eax
  int v18; // ecx
  int v19; // esi
  int v20; // eax
  __int16 v21; // ax
  bool v22; // sf
  _BYTE v23[12]; // [esp+0h] [ebp-248h] BYREF
  _BYTE v24[516]; // [esp+Ch] [ebp-23Ch] BYREF
  int v25; // [esp+210h] [ebp-38h]
  _DWORD v26[8]; // [esp+214h] [ebp-34h] BYREF
  __int32 v27[2]; // [esp+234h] [ebp-14h] BYREF
  int v28; // [esp+23Ch] [ebp-Ch]
  int v29; // [esp+240h] [ebp-8h]
  int v30; // [esp+244h] [ebp-4h]

  CVProfile::EnterScope(g_VProfCurrentProfile, "CClientLeafSystem::PreRender", 0, "PreRender", 0, 4);
  v2 = 0;
  if ( *(_DWORD *)(this + 352) )
  {
    while ( 1 )
    {
      v28 = v2 + 1;
      if ( v2 + 1 > 10 )
        break;
      v3 = *(_DWORD *)(this + 352);
      v4 = v3 - 1;
      v30 = v3;
      if ( v3 - 1 >= 0 )
      {
        do
        {
          v5 = *(unsigned __int16 *)(*(_DWORD *)(this + 340) + 2 * v4);
          sub_1007F490(this + 100, v5);
          sub_1007F790(this + 260, v5);
          v6 = (_DWORD *)(*(_DWORD *)(this + 28) + 36 * v5);
          v7 = *((_BYTE *)v6 + 24);
          if ( (v7 & 4) != 0 )
          {
            (*(void (__thiscall **)(void *, _DWORD, _DWORD))(*(_DWORD *)off_103DD080 + 100))(off_103DD080, *v6, 0);
          }
          else if ( (v7 & 8) != 0 )
          {
            (*(void (__thiscall **)(void *, _DWORD, int))(*(_DWORD *)off_103DD080 + 100))(off_103DD080, *v6, 2);
          }
          --v4;
        }
        while ( v4 >= 0 );
        v3 = v30;
      }
      if ( v3 > 5
        && *(_DWORD *)(dword_1042BAB4 + 48)
        && (*(int (__thiscall **)(_DWORD))(*g_pThreadPool + 28))(g_pThreadPool) )
      {
        v9 = 2 * v3;
        v10 = alloca(v9);
        memcpy_0(v23, *(const void **)(this + 340), v9);
        v27[0] = 0;
        v27[1] = 0;
        _InterlockedExchange(v27, 0);
        v26[0] = this - 4;
        v26[2] = sub_1007E060;
        v26[3] = 0;
        v26[4] = sub_1007CE40;
        v26[6] = sub_1007CE20;
        v26[7] = 0;
        v26[5] = 0;
        sub_1007F8F0((int)v26, (__int32)v23, v30, 0x7FFFFFFF, 0);
        v3 = v30;
      }
      else
      {
        for ( i = v3 - 1; i >= 0; --i )
          sub_1007E060((int *)(this - 4), (_WORD *)(*(_DWORD *)(this + 340) + 2 * i));
      }
      if ( *(_WORD *)(this + 392) )
      {
        while ( 1 )
        {
          v11 = *(_DWORD **)(this + 388);
          v12 = *(_DWORD *)(this + 392);
          v13 = (_DWORD **)(this + 388);
          if ( !v11 )
            break;
          while ( !(unsigned __int8)ThreadInterlockedAssignIf64(this + 388, *v11, v12 - 1, v11, v12) )
          {
            _mm_pause();
            v11 = *v13;
            v12 = *(_DWORD *)(this + 392);
            if ( !*v13 )
              goto LABEL_23;
          }
          if ( !v11 )
            break;
          v15 = (int *)v11[1];
          v25 = v11[2];
          sub_10034930((int)v11);
          ++*(_DWORD *)(this + 384);
          while ( v15 )
          {
            v16 = (int)v15;
            v17 = *v15;
            v15 = (int *)v15[1];
            sub_10080420(this - 4, v17, v25);
            sub_10034930(v16);
          }
        }
LABEL_23:
        v3 = v30;
      }
      v14 = v3 - 1;
      v29 = v3 - 1;
      if ( v3 - 1 >= 0 )
      {
        while ( 1 )
        {
          v18 = *(unsigned __int16 *)(*(_DWORD *)(this + 340) + 2 * v14);
          v19 = 36 * v18;
          *(_BYTE *)(*(_DWORD *)(this + 28) + 36 * v18 + 24) &= ~0x10u;
          v20 = (*(int (__thiscall **)(int, int, _BYTE *))(*(_DWORD *)(this - 4) + 96))(this - 4, v18, v24);
          v21 = v20 == -1
              ? 0
              : (*(int (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)dword_1041315C + 224))(dword_1041315C, v24, v20);
          v22 = --v29 < 0;
          *(_WORD *)(*(_DWORD *)(this + 28) + v19 + 28) = v21;
          if ( v22 )
            break;
          v14 = v29;
        }
        v3 = v30;
      }
      if ( *(_DWORD *)(this + 352) - v3 > 0 && v3 > 0 )
        memcpy(
          *(void **)(this + 340),
          (const void *)(*(_DWORD *)(this + 340) + 2 * v3),
          2 * (*(_DWORD *)(this + 352) - v3));
      *(_DWORD *)(this + 352) -= v3;
      if ( !*(_DWORD *)(this + 352) )
        goto LABEL_42;
      v2 = v28;
    }
    Warning("Too many dirty renderables!\n");
  }
LABEL_42:
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
