void __thiscall sub_100C3140(int *this, wchar_t *String1, float a3, int a4, char a5, wchar_t *a6)
{
  wchar_t *v8; // esi
  int v9; // eax
  int v10; // eax
  double v11; // st7
  double v12; // st5
  double v13; // st7
  wchar_t *v14; // ebx
  wchar_t *v15; // esi
  wchar_t *v16; // edi
  char v17; // al
  wchar_t *v18; // ebx
  wchar_t *v19; // eax
  wchar_t *v20; // ebx
  int *v21; // esi
  int v22; // edi
  int v23; // eax
  int v24; // ecx
  int v25; // eax
  wchar_t **v26; // eax
  int v27; // eax
  int v28; // ecx
  bool v29; // zf
  wchar_t *v30; // eax
  float *v31; // ebx
  int *v32; // esi
  int v33; // edi
  int v34; // eax
  int v35; // ecx
  int v36; // eax
  float **v37; // eax
  double v38; // st7
  wchar_t Source[4096]; // [esp+20h] [ebp-2410h] BYREF
  unsigned __int16 v40[256]; // [esp+2020h] [ebp-410h] BYREF
  wchar_t String[258]; // [esp+2220h] [ebp-210h] BYREF
  float v42; // [esp+2424h] [ebp-Ch]
  float v43; // [esp+2428h] [ebp-8h]
  int *v44; // [esp+242Ch] [ebp-4h]
  char String1a; // [esp+2438h] [ebp+8h]

  v44 = this;
  if ( (_BYTE)a6 )
    goto LABEL_64;
  if ( !*(_DWORD *)(dword_1043079C + 48) )
  {
    (*(void (__thiscall **)(int *))(*this + 24))(this);
    return;
  }
  if ( !*((_BYTE *)this + 452) )
  {
LABEL_64:
    v8 = String1;
    if ( *String1 )
    {
      while ( iswspace(*v8) )
      {
        if ( !*++v8 )
          return;
      }
      if ( !*(_DWORD *)(dword_104308BC + 48) || !sub_100BFB30(String1, L"sfx") )
      {
        String1a = wcsncmp(String1, L"!!!", 3u) != 0;
        if ( !wcsncmp(String1, L"-->", 3u) )
        {
          String1a = 0;
          v9 = *(_DWORD *)(dword_10430874 + 48);
          if ( v9 < 2 )
          {
            if ( v9 == 1 )
              Msg("Missing caption for '%s'\n", (const char *)a4);
            return;
          }
        }
        v10 = this[82];
        v11 = *(float *)(dword_104307E4 + 44) + a3;
        v42 = v11;
        v43 = 0.0;
        if ( v10 <= 0 )
          goto LABEL_20;
        v12 = *(float *)(*(_DWORD *)(this[79] + 4 * v10 - 4) + 8196);
        if ( v12 > v11 )
          v43 = v12 - v11;
        if ( v12 < v11 )
        {
LABEL_20:
          v13 = 0.0;
        }
        else
        {
          v13 = 0.0;
          v42 = v12;
        }
        v14 = String1;
        *(float *)&a4 = v13;
        a3 = v13;
        v15 = Source;
        a6 = String1;
        while ( 1 )
        {
          if ( !*v14 )
          {
LABEL_48:
            *v15 = 0;
            if ( wcslen(Source) )
            {
              v30 = (wchar_t *)sub_100DDA40(8244);
              if ( v30 )
                v31 = (float *)sub_100C2B30(v30, Source, v42, v43, *(float *)&a4, String1a, a5);
              else
                v31 = 0;
              v32 = v44;
              v33 = v44[82];
              v34 = v44[80];
              if ( v33 + 1 > v34 )
                sub_1010AFF0(v33 - v34 + 1);
              ++v32[82];
              v35 = v32[79];
              v36 = v32[82] - v33 - 1;
              v32[83] = v35;
              if ( v36 > 0 )
                memcpy((void *)(v35 + 4 * v33 + 4), (const void *)(v35 + 4 * v33), 4 * v36);
              v37 = (float **)(v32[79] + 4 * v33);
              if ( v37 )
                *v37 = v31;
              if ( sub_100BFB30(Source, L"sfx") )
                v31[2048] = 0.0;
              if ( sub_100BF9F0(Source, L"len", &a3) )
              {
                v38 = a3;
                v31[2049] = a3;
                v31[2050] = v38;
              }
            }
            return;
          }
          v16 = v14;
          v17 = sub_100BF930(&a6, v40, String);
          v18 = a6;
          if ( v17 )
          {
            if ( !wcscmp(v40, L"delay") )
            {
              *v15 = 0;
              if ( wcslen(Source) )
              {
                v19 = (wchar_t *)sub_100DDA40(8244);
                if ( v19 )
                  v20 = sub_100C2B30(v19, Source, v42, v43, *(float *)&a4, String1a, a5);
                else
                  v20 = 0;
                v21 = v44;
                v22 = v44[82];
                v23 = v44[80];
                if ( v22 + 1 > v23 )
                  sub_1010AFF0(v22 - v23 + 1);
                ++v21[82];
                v24 = v21[79];
                v25 = v21[82] - v22 - 1;
                v21[83] = v24;
                if ( v25 > 0 )
                  memcpy((void *)(v24 + 4 * v22 + 4), (const void *)(v24 + 4 * v22), 4 * v25);
                v26 = (wchar_t **)(v21[79] + 4 * v22);
                if ( v26 )
                  *v26 = v20;
                if ( sub_100BFB30(Source, L"sfx") )
                  *((float *)v20 + 2048) = 0.0;
                if ( sub_100BF9F0(Source, L"len", &a3) )
                  *((float *)v20 + 2049) = a3;
                v18 = a6;
              }
              v15 = Source;
              if ( wcstod(String, 0) >= 0.0 )
                *(float *)&a4 = wcstod(String, 0);
              else
                *(float *)&a4 = 0.0;
              goto LABEL_47;
            }
            v27 = a6 - v16 - 1;
            if ( v27 >= 0 )
            {
              v28 = (char *)v16 - (char *)v15;
              do
              {
                *v15 = *(wchar_t *)((char *)v15 + v28);
                ++v15;
                --v27;
              }
              while ( v27 >= 0 );
            }
          }
          *v15++ = *v18;
LABEL_47:
          v29 = v18 + 1 == 0;
          v14 = v18 + 1;
          a6 = v14;
          if ( v29 )
            goto LABEL_48;
        }
      }
    }
  }
}
