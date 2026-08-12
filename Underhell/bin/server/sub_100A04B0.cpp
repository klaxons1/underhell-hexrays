int __thiscall sub_100A04B0(__int16 *this)
{
  __int16 *v1; // esi
  int v2; // eax
  int result; // eax
  int v4; // ecx
  _DWORD *v5; // ebx
  int v6; // edi
  int v7; // ecx
  char *v8; // eax
  int v9; // edx
  char Str[260]; // [esp+4h] [ebp-214h] BYREF
  char Buffer[260]; // [esp+108h] [ebp-110h] BYREF
  __int16 *v12; // [esp+20Ch] [ebp-Ch]
  int v13; // [esp+210h] [ebp-8h]
  bool v14; // [esp+217h] [ebp-1h]

  v1 = this;
  v12 = this;
  v2 = CommandLine_Tier0();
  result = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v2 + 40))(v2, "-makereslists");
  v14 = result != 0;
  v4 = 0;
  v13 = 0;
  if ( v1[11] > 0 )
  {
    do
    {
      result = *((_DWORD *)v1 + 2);
      v5 = (_DWORD *)(result + 60 * (__int16)v4 + 12);
      v6 = 0;
      if ( *(int *)(result + 60 * (__int16)v4 + 24) > 0 )
      {
        do
        {
          v7 = *v5 + 8 * v6;
          if ( (*(_BYTE *)(v7 + 7) & 0x3F) == 1 )
          {
            result = sub_1023B8B0(*(char **)v7);
          }
          else
          {
            result = (*(_BYTE *)(*v5 + 8 * v6 + 7) & 0x3F) - 3;
            if ( (*(_BYTE *)(*v5 + 8 * v6 + 7) & 0x3F) == 3 )
            {
              sub_104299C0(Str, *(char **)v7, 0x104u);
              v8 = strstr(Str, "$gender");
              if ( v8 )
              {
                *v8 = 0;
                sub_10429A00(Buffer, 0x104u, "%smale%s", (char)Str);
                sub_10223EB0(Buffer);
                if ( v14 )
                  (*(void (__thiscall **)(int, char *, _DWORD))(*(_DWORD *)(dword_106B31D8 + 4) + 24))(
                    dword_106B31D8 + 4,
                    Buffer,
                    0);
                sub_10429A00(Buffer, 0x104u, "%sfemale%s", (char)Str);
                result = sub_10223EB0(Buffer);
                if ( v14 )
                  result = (*(int (__thiscall **)(int, char *, _DWORD))(*(_DWORD *)(dword_106B31D8 + 4) + 24))(
                             dword_106B31D8 + 4,
                             Buffer,
                             0);
              }
              else
              {
                result = sub_10223EB0(Str);
                if ( v14 )
                  result = (*(int (__thiscall **)(int, char *, _DWORD))(*(_DWORD *)(dword_106B31D8 + 4) + 24))(
                             dword_106B31D8 + 4,
                             Str,
                             0);
              }
            }
          }
          ++v6;
        }
        while ( v6 < v5[3] );
        v1 = v12;
        v4 = v13;
      }
      v9 = v1[11];
      v13 = ++v4;
    }
    while ( v4 < v9 );
  }
  return result;
}
