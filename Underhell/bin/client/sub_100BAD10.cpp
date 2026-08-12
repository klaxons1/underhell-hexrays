char sub_100BAD10(_DWORD *a1, int a2, int a3, char *Format, ...)
{
  int v4; // eax
  char v5; // cl
  bool v6; // zf
  char *p_Buffer; // ecx
  char *v8; // ebx
  _DWORD *v9; // esi
  void *v10; // esp
  wchar_t *v11; // eax
  unsigned int v12; // ebx
  int v13; // edx
  wchar_t v15[6]; // [esp+0h] [ebp-10E0h] BYREF
  char Buffer; // [esp+Ch] [ebp-10D4h] BYREF
  _BYTE v17[3]; // [esp+Dh] [ebp-10D3h] BYREF
  char Destination[132]; // [esp+100Ch] [ebp-D4h] BYREF
  wchar_t SubStr[32]; // [esp+1090h] [ebp-50h] BYREF
  int v20; // [esp+10D0h] [ebp-10h]
  unsigned int v21; // [esp+10D4h] [ebp-Ch]
  int v22; // [esp+10D8h] [ebp-8h] BYREF
  int v23; // [esp+10DCh] [ebp-4h]
  va_list va; // [esp+10F8h] [ebp+18h] BYREF

  va_start(va, Format);
  sub_102283C0(&Buffer, 0x1000u, Format, va);
  v4 = &v17[strlen(&Buffer)] - v17;
  if ( v4 )
  {
    v6 = *((_BYTE *)&v15[5] + v4 + 1) == 10;
    v4 += (int)&Buffer;
    if ( v6 )
      *(_BYTE *)(v4 - 1) = v5;
  }
  p_Buffer = &Buffer;
  if ( Buffer )
  {
    LOBYTE(v4) = Buffer;
    while ( (_BYTE)v4 == 10 || (char)v4 > 0 && (char)v4 < 6 )
    {
      LOBYTE(v4) = *++p_Buffer;
      if ( !(_BYTE)v4 )
        return v4;
    }
    if ( *p_Buffer )
    {
      v8 = &Buffer;
      LOBYTE(v4) = Buffer;
      while ( (_BYTE)v4 == 10 )
      {
        LOBYTE(v4) = *++v8;
        if ( !(_BYTE)v4 )
          return v4;
      }
      if ( *v8 )
      {
        v9 = (_DWORD *)a1[78];
        if ( v9 )
        {
          if ( !a3 || (v4 = (*(int (**)(void))(*a1 + 92))(), (v4 & a3) != 0) )
          {
            if ( *v8 >= 32 )
              (*(void (__stdcall **)(char *))(*(_DWORD *)off_103E0D18 + 4))(v8);
            else
              (*(void (__stdcall **)(char *))(*(_DWORD *)off_103E0D18 + 4))(v8 + 1);
            sub_1025A8E0(Locale);
            v23 = 0;
            v21 = 0;
            if ( a2 )
            {
              (*(void (__thiscall **)(int, int, char *))(*(_DWORD *)dword_1041315C + 32))(
                dword_1041315C,
                a2,
                Destination);
            }
            else
            {
              memset(Destination, 0, sizeof(Destination));
              sub_102282F0(Destination, "Console", 0x20u);
            }
            v4 = 2 * strlen(v8) + 2;
            v20 = v4;
            v10 = alloca(v4);
            if ( v15 )
            {
              (*(void (__thiscall **)(_DWORD *, int *, int))(*a1 + 104))(a1, &v22, a2);
              sub_100B9360((int)v9);
              (*(void (__thiscall **)(int, char *, wchar_t *, int))(*(_DWORD *)dword_1047CA78 + 12))(
                dword_1047CA78,
                v8,
                v15,
                v20);
              (*(void (__thiscall **)(int, char *, wchar_t *, int))(*(_DWORD *)dword_1047CA78 + 12))(
                dword_1047CA78,
                Destination,
                SubStr,
                64);
              v11 = wcsstr(v15, SubStr);
              if ( v11 )
              {
                v23 = v11 - v15;
                v12 = wcslen(SubStr);
              }
              else
              {
                v12 = v21;
              }
              (*(void (__thiscall **)(_DWORD *, _DWORD))(*v9 + 124))(v9, 0);
              v13 = v22;
              v9[115] = v23;
              v9[104] = v12;
              v9[107] = v13;
              LOBYTE(v4) = (*(int (__thiscall **)(_DWORD *, wchar_t *, int))(*v9 + 808))(v9, v15, a2);
            }
          }
        }
      }
    }
  }
  return v4;
}
