int __cdecl sub_10181AF0(int a1, int a2, char a3)
{
  int v3; // edi
  void *v4; // esi
  int v5; // eax
  int v6; // ebx
  int v7; // esi
  void *v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // edi
  int v14; // eax
  int *v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  char *v19; // esi
  char *v20; // ebx
  int v21; // esi
  int v22; // edi
  _DWORD *v23; // eax
  _DWORD *v24; // esi
  void *v25; // esi
  int v26; // edi
  int result; // eax
  char String1[2048]; // [esp+8h] [ebp-1028h] BYREF
  char v29[2048]; // [esp+808h] [ebp-828h] BYREF
  int v30; // [esp+1008h] [ebp-28h]
  int v31; // [esp+100Ch] [ebp-24h]
  int v32; // [esp+1010h] [ebp-20h]
  int v33; // [esp+1014h] [ebp-1Ch]
  int v34; // [esp+1018h] [ebp-18h]
  int v35; // [esp+101Ch] [ebp-14h]
  int v36; // [esp+1020h] [ebp-10h]
  void *Base; // [esp+1024h] [ebp-Ch]
  char *i; // [esp+1028h] [ebp-8h] BYREF
  int v39; // [esp+102Ch] [ebp-4h]
  _DWORD *v40; // [esp+1038h] [ebp+8h]
  int v41; // [esp+1038h] [ebp+8h]

  v35 = sub_10184390(0x8000);
  v3 = 0;
  v4 = (void *)sub_10184390(0x10000);
  Base = v4;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v39 = 0;
  if ( dword_106B320C )
    v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B320C + 32))(dword_106B320C, a1);
  else
    v5 = a1;
  v6 = sub_10181EC0(v5, v29);
  if ( v6 )
  {
    v7 = (int)v4 + 12;
    v40 = (_DWORD *)v7;
    while ( 1 )
    {
      if ( v29[0] == 123 )
      {
        v8 = (void *)v6;
        v9 = sub_101812F0(v6, v7, (int *)&i, v6, a2);
        v7 = (int)i;
        v6 = v9;
        if ( i )
        {
          if ( (*(unsigned __int8 (__thiscall **)(char *))(*(_DWORD *)i + 328))(i) )
          {
            sub_1024B6F0(v7, v8, v6 - (_DWORD)v8 + 2);
            sub_1025FAC0(v7);
            sub_1012CE60();
          }
          else if ( __RTDynamicCast(
                      v7,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                      (int)&CWorld `RTTI Type Descriptor',
                      0) )
          {
            *(_DWORD *)(v7 + 100) = 0;
            sub_10260750((char *)v7);
          }
          else
          {
            v10 = __RTDynamicCast(
                    v7,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                    (int)&CNodeEnt `RTTI Type Descriptor',
                    0);
            if ( v10 )
            {
              v11 = sub_10073B60(v10, (int)v8);
            }
            else
            {
              if ( !__RTDynamicCast(
                      v7,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                      (int)&CLight `RTTI Type Descriptor',
                      0) )
              {
                v36 = __RTDynamicCast(
                        v7,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                        (int)&CPointTemplate `RTTI Type Descriptor',
                        0);
                if ( v36 )
                {
                  v12 = v33;
                  v7 = v33;
                  if ( v33 + 1 > v31 )
                  {
                    sub_102ABFC0(v33 - v31 + 1);
                    v12 = v33;
                  }
                  v13 = v30;
                  v33 = v12 + 1;
                  v14 = v12 - v7;
                  v34 = v30;
                  if ( v14 > 0 )
                    memcpy((void *)(v30 + 4 * v7 + 4), (const void *)(v30 + 4 * v7), 4 * v14);
                  v15 = (int *)(v13 + 4 * v7);
                  if ( v15 )
                    *v15 = v36;
                }
                else
                {
                  v16 = v35;
                  *(v40 - 3) = v7;
                  *(v40 - 2) = 0;
                  *v40 = 0;
                  *(v40 - 1) = 0;
                  v17 = v39;
                  v7 = v6 - (_DWORD)v8 + 2;
                  *(_DWORD *)(v16 + 8 * v39) = v8;
                  *(_DWORD *)(v16 + 8 * v17 + 4) = v7;
                  v39 = v17 + 1;
                  v40 += 4;
                }
                goto LABEL_27;
              }
              v11 = sub_10260750((char *)v7);
            }
            if ( v11 < 0 )
              sub_1012CE60();
          }
        }
      }
      else
      {
        Error("MapEntity_ParseAllEntities: found %s when expecting {", v29);
      }
LABEL_27:
      v18 = sub_10182560(v6, String1);
      v6 = sub_10181EC0(v18, v29);
      if ( !v6 )
      {
        v3 = v39;
        break;
      }
    }
  }
  v19 = 0;
  for ( i = 0; (int)v19 < v33; i = v19 )
  {
    v20 = *(char **)(v30 + 4 * (_DWORD)v19);
    if ( sub_10260750(v20) >= 0 )
    {
      sub_10202410(v20);
      v36 = sub_1024A160(v20);
      v41 = 0;
      if ( v36 > 0 )
      {
        do
        {
          v21 = 0;
          v22 = sub_10201E70(v41);
          if ( v39 > 0 )
          {
            v23 = Base;
            while ( *v23 != v22 )
            {
              ++v21;
              v23 += 4;
              if ( v21 >= v39 )
                goto LABEL_40;
            }
            sub_10202530(v22, *(void **)(v35 + 8 * v21), *(_DWORD *)(v35 + 8 * v21 + 4));
            if ( (unsigned __int8)sub_10201E10(v20) )
            {
              sub_1025FAC0(v22);
              sub_1012CE60();
              *((_DWORD *)Base + 4 * v21) = 0;
            }
          }
LABEL_40:
          ++v41;
        }
        while ( v41 < v36 );
        v19 = i;
      }
      sub_102022B0(v20);
      v3 = v39;
    }
    else
    {
      sub_1025FAC0(v20);
      sub_1012CE60();
    }
    ++v19;
  }
  v24 = Base;
  sub_10181600(v3, (int)Base);
  sub_101816D0(v3, v24);
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 12))(dword_106B31D0) && v3 > 0 )
  {
    do
    {
      if ( *v24 )
        sub_10273D90(*v24);
      v24 += 4;
      --v3;
    }
    while ( v3 );
  }
  v25 = Base;
  v26 = v39;
  sub_10181980(v39, (int)Base);
  sub_10181820(v26, (int)v25, a3);
  sub_10184660(v35);
  result = sub_10184660(v25);
  if ( v32 >= 0 )
  {
    result = v30;
    if ( v30 )
      return (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v30);
  }
  return result;
}
