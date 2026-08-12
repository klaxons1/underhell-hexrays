int __thiscall sub_100C3720(_DWORD *this, int a2, int *a3)
{
  int v3; // edi
  _DWORD *v4; // ebx
  int *v5; // esi
  int v6; // esi
  int v7; // ecx
  _DWORD *v8; // eax
  _BYTE *v9; // eax
  int v10; // ebx
  int v11; // esi
  int v12; // ecx
  _DWORD *v13; // eax
  int v14; // eax
  wint_t v15; // dx
  int v16; // edx
  wint_t *v17; // esi
  size_t v18; // esi
  wchar_t *v19; // edi
  int result; // eax
  bool v21; // sf
  wchar_t v22[4096]; // [esp+Ch] [ebp-248Ch] BYREF
  wchar_t *Destination; // [esp+200Ch] [ebp-48Ch]
  int v24; // [esp+2010h] [ebp-488h]
  int v25; // [esp+2014h] [ebp-484h]
  int v26; // [esp+2018h] [ebp-480h]
  __int16 v27; // [esp+201Ch] [ebp-47Ch]
  int v28; // [esp+201Eh] [ebp-47Ah]
  char v29; // [esp+2022h] [ebp-476h]
  int v30; // [esp+2024h] [ebp-474h]
  wchar_t Buffer[256]; // [esp+2028h] [ebp-470h] BYREF
  unsigned __int16 v32[256]; // [esp+2228h] [ebp-270h] BYREF
  char v33[4]; // [esp+2428h] [ebp-70h] BYREF
  char v34[4]; // [esp+242Ch] [ebp-6Ch] BYREF
  char v35; // [esp+2430h] [ebp-68h] BYREF
  char v36; // [esp+2434h] [ebp-64h] BYREF
  char v37; // [esp+2438h] [ebp-60h] BYREF
  char v38; // [esp+243Ch] [ebp-5Ch] BYREF
  char v39; // [esp+2440h] [ebp-58h] BYREF
  char v40; // [esp+2444h] [ebp-54h] BYREF
  char v41; // [esp+2448h] [ebp-50h] BYREF
  int v42; // [esp+244Ch] [ebp-4Ch] BYREF
  char v43; // [esp+2450h] [ebp-48h] BYREF
  int v44; // [esp+2454h] [ebp-44h]
  wchar_t *Source; // [esp+2458h] [ebp-40h]
  char v46; // [esp+245Ch] [ebp-3Ch] BYREF
  _WORD v47[2]; // [esp+2460h] [ebp-38h] BYREF
  int v48; // [esp+2464h] [ebp-34h] BYREF
  _DWORD *v49; // [esp+2468h] [ebp-30h]
  int v50; // [esp+246Ch] [ebp-2Ch]
  _BYTE v51[4]; // [esp+2470h] [ebp-28h] BYREF
  _BYTE v52[4]; // [esp+2474h] [ebp-24h] BYREF
  int v53; // [esp+2478h] [ebp-20h]
  wint_t *v54; // [esp+247Ch] [ebp-1Ch]
  int v55; // [esp+2480h] [ebp-18h] BYREF
  int v56; // [esp+2484h] [ebp-14h]
  int v57; // [esp+2488h] [ebp-10h]
  int v58; // [esp+248Ch] [ebp-Ch]
  int v59; // [esp+2490h] [ebp-8h]
  wint_t *v60; // [esp+2494h] [ebp-4h] BYREF

  v3 = 0;
  v4 = this;
  v49 = this;
  memset(v22, 0, sizeof(v22));
  v5 = a3;
  Destination = v22;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = -1;
  v29 = 0;
  v30 = 0;
  v60 = (wint_t *)a3;
  v55 = 0;
  v56 = 0;
  v57 = 0;
  v58 = 0;
  v59 = 0;
  v54 = 0;
  v50 = -1;
  if ( a3 )
  {
    do
    {
      if ( !*v60 )
        break;
      if ( !sub_100BF930(&v60, v32, Buffer) )
      {
        if ( (_BYTE)v27 )
          v14 = (HIBYTE(v27) != 0) + 2;
        else
          v14 = HIBYTE(v27) != 0;
        v30 = v4[v14 + 84];
        v15 = *v60;
        v47[1] = 0;
        v47[0] = v15;
        v16 = *(_DWORD *)dword_1047CA6C;
        v44 = v30;
        (*(void (__thiscall **)(int, int, _WORD *, int *, char *))(v16 + 288))(dword_1047CA6C, v30, v47, &v48, v34);
        if ( v48 + v24 + v26 <= a2 )
        {
LABEL_43:
          v17 = v60;
        }
        else
        {
          v17 = v60;
          if ( v54 )
          {
            Source = v54 + 1;
            if ( v60 >= v54 + 1 )
            {
              v18 = v60 - v54 - 1;
              Destination = (wchar_t *)((char *)Destination - 2 - 2 * v18);
              v26 = v50;
              v19 = (wchar_t *)sub_100DDA40((unsigned __int64)(unsigned int)(v60 - v54) >> 31 != 0 ? -1 : 2 * (v60 - v54));
              wcsncpy(v19, Source, v18);
              v19[v18] = 0;
              v29 = 1;
              sub_100C35D0((int)v19, a3, v22);
              wcsncpy(Destination, v19, v18);
              Destination += v18;
              (*(void (__thiscall **)(int, int, wchar_t *, int *, char *))(*(_DWORD *)dword_1047CA6C + 288))(
                dword_1047CA6C,
                v44,
                v19,
                &v42,
                v33);
              v26 = v42;
              sub_10034930((int)v19);
              v3 = v58;
              v4 = v49;
              v54 = 0;
              v50 = -1;
              goto LABEL_43;
            }
          }
          v29 = 1;
          sub_100C35D0(v3, a3, v22);
        }
        *Destination++ = *v17;
        v26 += v48;
        if ( iswspace(*v17) )
        {
          v54 = v17;
          v50 = v26;
        }
        goto LABEL_46;
      }
      if ( !wcscmp(v32, L"cr") )
      {
        v29 = 1;
        sub_100C35D0(v3, v5, v22);
      }
      else if ( !wcscmp(v32, L"clr") )
      {
        sub_100C35D0(v3, v5, v22);
        if ( !Buffer[0] && v3 >= 2 )
          goto LABEL_9;
        if ( swscanf(Buffer, L"%i,%i,%i", &v39, &v36, &v40) == 3 )
        {
          LOBYTE(v53) = v39;
          BYTE1(v53) = v36;
          BYTE2(v53) = v40;
          HIBYTE(v53) = -1;
          v6 = v3;
          if ( v3 + 1 > v56 )
          {
            sub_1010AFF0(v3 - v56 + 1);
            v3 = v58;
          }
          v7 = v55;
          v58 = ++v3;
          v59 = v55;
          if ( v3 - v6 - 1 > 0 )
          {
            memcpy((void *)(v55 + 4 * v6 + 4), (const void *)(v55 + 4 * v6), 4 * (v3 - v6 - 1));
            v7 = v55;
          }
          v8 = (_DWORD *)(v7 + 4 * v6);
          if ( v8 )
            *v8 = v53;
          v28 = *(_DWORD *)(v7 + 4 * v3 - 4);
LABEL_46:
          v5 = a3;
        }
      }
      else
      {
        if ( wcscmp(v32, L"playerclr") )
        {
          if ( !wcscmp(v32, L"I") )
          {
            sub_100C35D0(v3, v5, v22);
            HIBYTE(v27) = HIBYTE(v27) == 0;
          }
          else if ( !wcscmp(v32, L"B") )
          {
            sub_100C35D0(v3, v5, v22);
            LOBYTE(v27) = (_BYTE)v27 == 0;
          }
          goto LABEL_47;
        }
        sub_100C35D0(v3, v5, v22);
        if ( !Buffer[0] && v3 >= 2 )
        {
LABEL_9:
          sub_100C1FD0(&v55, v3 - 1);
          v3 = v58;
          v28 = *(_DWORD *)(v55 + 4 * v58 - 4);
          goto LABEL_47;
        }
        if ( swscanf(Buffer, L"%i,%i,%i:%i,%i,%i", &v43, &v46, &v41, &v37, &v35, &v38) == 6 )
        {
          if ( *((_BYTE *)v5 + 8221) )
          {
            v52[1] = v46;
            v52[0] = v43;
            v52[2] = v41;
            v52[3] = -1;
            v9 = v52;
          }
          else
          {
            v51[1] = v35;
            v51[0] = v37;
            v51[2] = v38;
            v51[3] = -1;
            v9 = v51;
          }
          v10 = *(_DWORD *)v9;
          v11 = v3;
          if ( v3 + 1 > v56 )
          {
            sub_1010AFF0(v3 - v56 + 1);
            v3 = v58;
          }
          v12 = v55;
          v58 = ++v3;
          v59 = v55;
          if ( v3 - v11 - 1 > 0 )
          {
            memcpy((void *)(v55 + 4 * v11 + 4), (const void *)(v55 + 4 * v11), 4 * (v3 - v11 - 1));
            v12 = v55;
          }
          v13 = (_DWORD *)(v12 + 4 * v11);
          if ( v13 )
            *v13 = v10;
          v4 = v49;
          v28 = *(_DWORD *)(v12 + 4 * v3 - 4);
          goto LABEL_46;
        }
      }
LABEL_47:
      ++v60;
    }
    while ( v60 );
  }
  v29 = 1;
  result = sub_100C35D0(v3, v5, v22);
  v21 = v57 < 0;
  *((_BYTE *)v5 + 8220) = 1;
  if ( !v21 )
  {
    result = v55;
    if ( v55 )
      return (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v55);
  }
  return result;
}
