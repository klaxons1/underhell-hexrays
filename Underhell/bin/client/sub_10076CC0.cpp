void __usercall sub_10076CC0(char *a1@<esi>, const wchar_t *a2, int a3, unsigned __int16 *a4)
{
  const wchar_t *v4; // ebx
  int v5; // edi
  unsigned __int16 *v6; // esi
  int v7; // eax
  wchar_t *v8; // eax
  size_t v9; // esi
  char *v10; // eax
  const char *v11; // eax
  _WORD *v12; // eax
  char *v13; // ecx
  __int16 v14; // dx
  unsigned int v15; // edx
  unsigned __int16 *v16; // edi
  unsigned __int16 v17; // cx
  _WORD *v18; // edx
  wchar_t Destination[64]; // [esp+8h] [ebp-108h] BYREF
  char String[64]; // [esp+88h] [ebp-88h] BYREF
  char v23; // [esp+C8h] [ebp-48h] BYREF
  char v24; // [esp+C9h] [ebp-47h] BYREF
  const wchar_t *v25; // [esp+10Ch] [ebp-4h]
  int v26; // [esp+118h] [ebp+8h]

  v4 = a2;
  v5 = 0;
  if ( a2 && *a2 )
  {
    v6 = a4;
    *a4 = 0;
    v26 = 0;
    v25 = 0;
    if ( a3 > 0 )
      v25 = &v4[a3 / 2];
    for ( ; v4 != v25; ++v4 )
    {
      v7 = *v4;
      if ( !(_WORD)v7 )
        break;
      if ( v7 == 37 )
      {
        v8 = wcschr(++v4, 0x25u);
        if ( v8 && v8 != v4 )
        {
          v9 = v8 - v4;
          wcsncpy(Destination, v4, v9);
          Destination[v9] = 0;
          v4 += v9;
          (*(void (__thiscall **)(int, wchar_t *, char *, int, char *))(*(_DWORD *)dword_1047CA78 + 16))(
            dword_1047CA78,
            Destination,
            &v23,
            64,
            a1);
          v10 = &v24;
          if ( v23 != 43 )
            v10 = &v23;
          v11 = (const char *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)dword_1041315C + 88))(dword_1041315C, v10);
          if ( !v11 )
            v11 = "< not bound >";
          sub_10228370(String, 0x40u, "%s", (char)v11);
          _strupr(String);
          a1 = String;
          v12 = (_WORD *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA78 + 8))(dword_1047CA78);
          if ( v12 && wcslen(v12) )
          {
            a4[v5] = 0;
            v13 = (char *)v12;
            do
            {
              v14 = *(_WORD *)v13;
              v13 += 2;
            }
            while ( v14 );
            v15 = v13 - (char *)v12;
            v16 = a4 - 1;
            do
            {
              v17 = v16[1];
              ++v16;
            }
            while ( v17 );
            qmemcpy(v16, v12, v15);
            v18 = v12 + 1;
            while ( *v12++ )
              ;
            v6 = a4;
            v26 += v12 - v18;
            v5 = v26;
          }
          else
          {
            (*(void (__thiscall **)(int, char *, wchar_t *, int))(*(_DWORD *)dword_1047CA78 + 12))(
              dword_1047CA78,
              String,
              Destination,
              128);
            a4[v5] = 0;
            wcscat(a4, Destination);
            v6 = a4;
            v26 += wcslen(Destination);
            v5 = v26;
          }
          continue;
        }
        v6[v5] = *v4;
      }
      else
      {
        v6[v5] = v7;
      }
      v26 = ++v5;
    }
    v6[v5] = 0;
  }
}
