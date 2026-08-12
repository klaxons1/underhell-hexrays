void __thiscall sub_100D9D80(
        void *this,
        char *String2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        float a10)
{
  _DWORD *v10; // ecx
  int v11; // edx
  int v12; // ebx
  int v13; // edi
  int v14; // eax
  int v15; // [esp+10h] [ebp-Ch]
  _DWORD *v16; // [esp+18h] [ebp-4h]

  if ( String2 )
  {
    v10 = (_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 44))(this);
    v16 = v10;
    if ( v10 )
    {
      while ( 1 )
      {
        v11 = v10[1];
        v12 = 0;
        v15 = v11;
        if ( v11 > 0 )
        {
          v13 = 0;
          do
          {
            v14 = v13 + *v10;
            if ( *(_DWORD *)v14 == 11 && (*(_BYTE *)(v14 + 18) & 0x10) != 0 )
            {
              if ( !_stricmp(*(const char **)(v14 + 20), String2) )
              {
                sub_1010DA50(a3, a4, a5, a6, a7, a8, a9, a10);
                return;
              }
              v10 = v16;
              v11 = v15;
            }
            ++v12;
            v13 += 52;
          }
          while ( v12 < v11 );
        }
        v16 = (_DWORD *)v10[3];
        if ( !v16 )
          break;
        v10 = (_DWORD *)v10[3];
      }
    }
  }
}
