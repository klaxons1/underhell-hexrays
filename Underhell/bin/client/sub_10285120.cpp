void __usercall sub_10285120(int a1@<ecx>, _DWORD *a2@<edi>, _DWORD *a3@<esi>)
{
  int v3; // ebp
  bool v4; // zf
  int (__thiscall ***v5)(void *, int *, int *); // eax
  int v6; // eax
  int v7; // eax
  int (__thiscall ***v8)(_DWORD); // eax
  int v9; // eax
  int v10; // edi
  int v11; // eax
  int v12; // edi
  _DWORD *v13; // ebp
  int v14; // eax
  int v15; // ecx
  unsigned __int8 (__cdecl *v16)(int, int); // edx
  int v17; // esi
  int v18; // edx
  _DWORD *v19; // esi
  int v20; // esi
  int v21; // eax
  int v22; // ebp
  int v23; // eax
  int (__thiscall ***v24)(void *, int, int); // eax
  int v25; // eax
  int v26; // [esp+1Ch] [ebp-5Ch]
  int v27; // [esp+2Ch] [ebp-4Ch] BYREF
  int v28; // [esp+30h] [ebp-48h]
  int v29; // [esp+34h] [ebp-44h]
  _DWORD *v30; // [esp+38h] [ebp-40h]
  unsigned __int8 (__cdecl *v31)(int, int); // [esp+3Ch] [ebp-3Ch] BYREF
  int v32; // [esp+40h] [ebp-38h] BYREF
  int v33; // [esp+44h] [ebp-34h]
  int v34; // [esp+48h] [ebp-30h]
  int v35; // [esp+4Ch] [ebp-2Ch]
  int v36; // [esp+50h] [ebp-28h]
  bool (__cdecl *v37)(const char **, const char **); // [esp+54h] [ebp-24h] BYREF
  int v38; // [esp+58h] [ebp-20h]
  int v39; // [esp+5Ch] [ebp-1Ch]
  int v40; // [esp+60h] [ebp-18h]
  int v41; // [esp+64h] [ebp-14h]
  int v42; // [esp+68h] [ebp-10h]
  int v43; // [esp+6Ch] [ebp-Ch]
  int v44; // [esp+70h] [ebp-8h]
  int v45; // [esp+74h] [ebp-4h]

  v3 = a1;
  v4 = *(_DWORD *)(a1 + 456) == 0;
  v29 = a1;
  if ( !v4 )
  {
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA68 + 28))(dword_1047CA68, a1 + 772, a1 + 776);
    v5 = (int (__thiscall ***)(void *, int *, int *))(*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(v3 + 456)
                                                                                             + 36))(
                                                       *(_DWORD *)(v3 + 456),
                                                       v3 + 772,
                                                       v3 + 776);
    sub_10236F60(v5, a2, a3);
    v32 = v3 + 780;
    if ( sub_10237C80((_DWORD *)(v3 + 780)) )
    {
      v6 = sub_10237C80((_DWORD *)(v3 + 780));
      if ( v6 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 120))(v6, 1);
    }
    v7 = sub_100DDA40(392);
    if ( v7 )
      v8 = (int (__thiscall ***)(_DWORD))sub_1026D6B0(v7, (int (__thiscall ***)(_DWORD))v3, "NewControls");
    else
      v8 = 0;
    sub_102393F0((_DWORD *)(v3 + 780), v8);
    v9 = sub_10229D00(32);
    if ( v9 )
      v10 = sub_1022B0E0(v9, (int)"CreateNewControl", "text", "None");
    else
      v10 = 0;
    v11 = sub_10237C80((_DWORD *)(v3 + 780));
    v26 = v3;
    (*(void (__thiscall **)(int, const char *, const char *, int))(*(_DWORD *)v11 + 792))(v11, "None", "None", v10);
    v32 = 0;
    v33 = 0;
    v34 = 0;
    v35 = 0;
    v36 = 0;
    sub_10250BF0(&v32);
    v12 = 0;
    v37 = sub_100EB470;
    v38 = 0;
    v39 = 0;
    v40 = 0;
    v41 = -1;
    v42 = 0;
    v43 = -1;
    v44 = -1;
    v45 = 0;
    v28 = 0;
    if ( v35 > 0 )
    {
      do
      {
        v13 = (_DWORD *)(v32 + 4 * v28);
        sub_10283230((unsigned __int8 (__cdecl **)(int, int))&v37, (int)v13, &v31, (_BYTE *)&v27 + 3);
        v14 = sub_10283320(&v37);
        v15 = v38;
        v16 = v31;
        v17 = 20 * v14;
        v4 = (unsigned __int8 (__cdecl *)(int, int))((char *)v31 + 1) == 0;
        *(_DWORD *)(v17 + v38 + 8) = v31;
        *(_DWORD *)(v17 + v15 + 4) = -1;
        *(_DWORD *)(v17 + v15) = -1;
        *(_DWORD *)(v17 + v15 + 12) = 0;
        if ( v4 )
        {
          v41 = v14;
        }
        else
        {
          v18 = 5 * (_DWORD)v16;
          if ( HIBYTE(v27) )
            *(_DWORD *)(v15 + 4 * v18) = v14;
          else
            *(_DWORD *)(v15 + 4 * v18 + 4) = v14;
        }
        sub_10283A30(&v37, v14);
        v12 = v38;
        ++v42;
        v19 = (_DWORD *)(v17 + v38 + 16);
        if ( v19 )
          *v19 = *v13;
        ++v28;
      }
      while ( v28 < v35 );
      v3 = v29;
    }
    v20 = sub_10283700(&v37);
    if ( v20 != -1 )
    {
      do
      {
        v21 = sub_10229D00(32);
        if ( v21 )
          v22 = sub_1022B0E0(v21, (int)"CreateNewControl", "text", *(const char **)(v12 + 20 * v20 + 16));
        else
          v22 = 0;
        v23 = sub_10237C80(v30);
        (*(void (__thiscall **)(int, _DWORD, _DWORD, int, int, _DWORD))(*(_DWORD *)v23 + 792))(
          v23,
          *(_DWORD *)(v12 + 20 * v20 + 16),
          *(_DWORD *)(v12 + 20 * v20 + 16),
          v22,
          v29,
          0);
        v20 = sub_102837A0(&v37, v20);
      }
      while ( v20 != -1 );
      v3 = v29;
    }
    v24 = (int (__thiscall ***)(void *, int, int))sub_10237C80(v30);
    sub_1026B010(v12, v3, v24, v26);
    sub_102839A0(&v37);
    if ( v40 >= 0 && v38 )
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v38);
    v25 = v32;
    v35 = 0;
    if ( v34 >= 0 )
    {
      if ( v32 )
      {
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v32);
        v25 = 0;
        v32 = 0;
      }
      v33 = 0;
    }
    v36 = v25;
    if ( v34 >= 0 )
    {
      if ( v25 )
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v25);
    }
  }
}
