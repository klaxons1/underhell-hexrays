int __cdecl sub_101DB6C0(int a1, int a2, const void *a3)
{
  int v3; // eax
  _DWORD *v4; // eax
  int v5; // ebx
  int v6; // esi
  int (__thiscall *v7)(int); // eax
  unsigned __int16 v8; // ax
  int v9; // ebx
  unsigned __int8 (__thiscall *v10)(int); // edx
  const char *v11; // esi
  int v12; // eax
  int v13; // esi
  int v14; // edi
  unsigned __int16 v15; // ax
  bool v16; // zf
  void (__fastcall *v17)(int); // eax
  int v18; // eax
  int v19; // edx
  _DWORD *v20; // edx
  int v21; // eax
  int v22; // esi
  int v23; // edi
  unsigned __int16 v24; // ax
  int v26; // [esp-10h] [ebp-AC4h]
  _BYTE v27[512]; // [esp+Ch] [ebp-AA8h] BYREF
  int v28[388]; // [esp+20Ch] [ebp-8A8h] BYREF
  _DWORD v29[11]; // [esp+81Ch] [ebp-298h] BYREF
  int v30; // [esp+848h] [ebp-26Ch] BYREF
  char v31[512]; // [esp+84Ch] [ebp-268h] BYREF
  char v32[40]; // [esp+A4Ch] [ebp-68h] BYREF
  int v33; // [esp+A74h] [ebp-40h]
  _DWORD v34[11]; // [esp+A80h] [ebp-34h] BYREF
  int v35; // [esp+AACh] [ebp-8h]
  char v36; // [esp+AB3h] [ebp-1h]

  v3 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_106BAFF8 + 12))(dword_106BAFF8, "default");
  qmemcpy(v34, a3, sizeof(v34));
  v34[7] = a1;
  v26 = v3;
  v4 = *(_DWORD **)(a2 + 4);
  v34[6] = "world";
  v5 = (*(int (__thiscall **)(int, _DWORD, int, float *, float *, _DWORD *))(*(_DWORD *)dword_106BAFF4 + 32))(
         dword_106BAFF4,
         *v4,
         v26,
         &flt_106F1CA8,
         &flt_106F1CB4,
         v34);
  v6 = *(_DWORD *)v5;
  v7 = *(int (__thiscall **)(int))(*(_DWORD *)v5 + 92);
  v35 = v5;
  v8 = v7(v5);
  (*(void (__thiscall **)(int, int))(v6 + 88))(v5, v8 | 0x200);
  v9 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF0 + 152))(dword_106BAFF0, *(_DWORD *)(a2 + 8));
  v10 = *(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v9 + 8);
  v36 = 0;
  if ( !v10(v9) )
  {
    do
    {
      v11 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v9 + 4))(v9);
      if ( !_stricmp(v11, "solid") || !_stricmp(v11, "staticsolid") )
      {
        qmemcpy(v29, a3, sizeof(v29));
        (*(void (__thiscall **)(int, int *, int (__stdcall ***)(int, char *, char *)))(*(_DWORD *)v9 + 12))(
          v9,
          v28,
          &off_1063AFBC);
        v29[7] = a1;
        LOBYTE(v29[10]) = 1;
        v29[6] = "world";
        v18 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_106BAFF8 + 12))(dword_106BAFF8, "default");
        if ( v28[0] )
        {
          v19 = *(_DWORD *)(a2 + 4);
          v16 = *(_DWORD *)(v19 + 4 * v28[0]) == 0;
          v20 = (_DWORD *)(v19 + 4 * v28[0]);
          if ( v16 )
          {
            v36 = 1;
          }
          else
          {
            v21 = (*(int (__thiscall **)(int, _DWORD, int, float *, float *, _DWORD *))(*(_DWORD *)dword_106BAFF4 + 32))(
                    dword_106BAFF4,
                    *v20,
                    v18,
                    &flt_106F1CA8,
                    &flt_106F1CB4,
                    v29);
            v22 = v21;
            if ( v21 )
            {
              v23 = *(_DWORD *)v21;
              v24 = (*(int (__thiscall **)(int))(*(_DWORD *)v21 + 92))(v21);
              (*(void (__thiscall **)(int, int))(v23 + 88))(v22, v24 | 0x200);
              (*(void (__thiscall **)(int, int))(*(_DWORD *)v22 + 164))(v22, dword_1063AFC0);
              if ( !v35 )
                v35 = v22;
            }
          }
        }
      }
      else if ( !_stricmp(v11, "fluid") )
      {
        (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v9 + 16))(v9, &v30, 0);
        if ( v30 > 0 )
        {
          qmemcpy(v29, a3, sizeof(v29));
          v29[7] = a1;
          v33 = a1;
          LOBYTE(v29[10]) = 1;
          v29[6] = "fluid";
          v12 = (*(int (__thiscall **)(int, char *))(*(_DWORD *)dword_106BAFF8 + 12))(dword_106BAFF8, v31);
          v13 = (*(int (__thiscall **)(int, _DWORD, int, float *, float *, _DWORD *))(*(_DWORD *)dword_106BAFF4 + 32))(
                  dword_106BAFF4,
                  *(_DWORD *)(*(_DWORD *)(a2 + 4) + 4 * v30),
                  v12,
                  &flt_106F1CA8,
                  &flt_106F1CB4,
                  v29);
          v14 = *(_DWORD *)v13;
          v15 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 92))(v13);
          (*(void (__thiscall **)(int, int))(v14 + 88))(v13, v15 | 0x200);
          (*(void (__thiscall **)(int, int, char *))(*(_DWORD *)dword_106BAFF4 + 44))(dword_106BAFF4, v13, v32);
        }
      }
      else if ( !_stricmp(v11, "materialtable") )
      {
        memset(v27, 0, sizeof(v27));
        (*(void (__thiscall **)(int, _BYTE *, _DWORD))(*(_DWORD *)v9 + 24))(v9, v27, 0);
        (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)dword_106BAFF8 + 32))(dword_106BAFF8, v27, 128);
      }
      else
      {
        v16 = _stricmp(v11, "virtualterrain") == 0;
        v17 = *(void (__fastcall **)(int))(*(_DWORD *)v9 + 36);
        if ( v16 )
          v36 = 1;
        v17(v9);
      }
    }
    while ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v9 + 8))(v9) );
  }
  (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_106BAFF0 + 156))(dword_106BAFF0, v9);
  if ( v36 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106BAFF0 + 188))(dword_106BAFF0) )
    sub_101DB5F0(a1, a3);
  return v35;
}
