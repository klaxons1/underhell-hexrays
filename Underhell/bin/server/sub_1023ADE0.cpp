void __cdecl sub_1023ADE0(int *a1)
{
  int v1; // eax
  int v2; // esi
  int v3; // edi
  _WORD *v4; // eax
  int v5; // ebx
  int v6; // esi
  _WORD *v7; // eax
  const char *v8; // esi
  const char *v9; // ebx
  const char *v10; // eax
  int v11; // [esp+4h] [ebp-10h]
  int v12; // [esp+8h] [ebp-Ch]
  _WORD *v13; // [esp+Ch] [ebp-8h]
  int v14; // [esp+10h] [ebp-4h]
  const char *v15; // [esp+1Ch] [ebp+8h]

  if ( *a1 == 2 )
  {
    v1 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3204 + 36))(dword_106B3204);
    v2 = v1;
    v11 = v1;
    if ( *a1 > 1 )
    {
      v15 = (const char *)a1[259];
      if ( !v15 )
        return;
    }
    else
    {
      v15 = String;
    }
    v3 = 0;
    if ( v1 > 0 )
    {
      do
      {
        v4 = (_WORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B3204 + 88))(dword_106B3204, v3);
        v13 = v4;
        if ( v4 )
        {
          v12 = (unsigned __int16)v4[4];
          if ( v4[4] )
          {
            v5 = 0;
            v14 = 0;
            while ( 1 )
            {
              v6 = *(_DWORD *)dword_106B3204;
              v7 = sub_1023A840(v4);
              v8 = (const char *)(*(int (__thiscall **)(int, _WORD *))(v6 + 48))(dword_106B3204, &v7[2 * v5]);
              if ( sub_10429530(v8, v15) )
              {
                v9 = (const char *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B3204 + 40))(
                                     dword_106B3204,
                                     v3);
                v10 = (const char *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B3204 + 72))(
                                      dword_106B3204,
                                      v3);
                Msg("Referenced by '%s:%s' -- %s\n", v10, v9, v8);
                v5 = v14;
              }
              v14 = ++v5;
              if ( v5 >= v12 )
                break;
              v4 = v13;
            }
            v2 = v11;
          }
        }
        ++v3;
      }
      while ( v3 < v2 );
    }
  }
}
