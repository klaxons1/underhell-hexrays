void __thiscall sub_100A3C90(_BYTE *this, int a2, int a3)
{
  int v4; // eax
  __int16 v5; // di
  _DWORD *v6; // ebx
  __int16 v7; // ax
  int v8; // edi
  char String2[256]; // [esp+0h] [ebp-278h] BYREF
  char v10[256]; // [esp+100h] [ebp-178h] BYREF
  char String1[32]; // [esp+200h] [ebp-78h] BYREF
  char v12[32]; // [esp+220h] [ebp-58h] BYREF
  char *v13; // [esp+240h] [ebp-38h] BYREF
  int v14[12]; // [esp+244h] [ebp-34h] BYREF
  int v15; // [esp+274h] [ebp-4h]
  int v16; // [esp+280h] [ebp+8h]

  if ( this[4] )
  {
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 56))(a2);
    if ( v4 > 0 )
    {
      v15 = v4;
      do
      {
        (*(void (__thiscall **)(int, char *))(*(_DWORD *)a2 + 24))(a2, String1);
        if ( !_stricmp(String1, "ResponseGroup") )
        {
          (*(void (__thiscall **)(int, char *, int, _DWORD))(*(_DWORD *)a2 + 80))(a2, v10, 256, 0);
          sub_100A0F60((char *)v14);
          v13 = v10;
          v5 = sub_1009CA60(word_10694294, (int)&v13);
          sub_1009CA00(v14);
          if ( v14[2] >= 0 )
          {
            if ( v14[0] )
            {
              (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v14[0]);
              v14[0] = 0;
            }
            v14[1] = 0;
          }
          if ( v5 != -1 )
          {
            v6 = (_DWORD *)(dword_10694298 + 60 * v5 + 12);
            (*(void (__thiscall **)(int, _DWORD *, int *))(*(_DWORD *)a2 + 8))(a2, v6, &dword_1060A524);
            v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 52))(a2);
            if ( v7 > 0 )
            {
              v16 = v7;
              do
              {
                (*(void (__thiscall **)(int, char *))(*(_DWORD *)a2 + 24))(a2, v12);
                if ( !_stricmp(v12, "Response") )
                {
                  (*(void (__thiscall **)(int, char *, int, _DWORD))(*(_DWORD *)a2 + 80))(a2, String2, 256, 0);
                  v8 = 0;
                  if ( (int)v6[3] > 0 )
                  {
                    do
                    {
                      if ( !_stricmp(*(const char **)(*v6 + 8 * v8), String2) )
                        break;
                      ++v8;
                    }
                    while ( v8 < v6[3] );
                    if ( v8 < v6[3] )
                      (*(void (__thiscall **)(int, int, int *))(*(_DWORD *)a2 + 8))(a2, *v6 + 8 * v8, &dword_1060A50C);
                  }
                }
                (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 32))(a2);
                --v16;
              }
              while ( v16 );
            }
          }
        }
        (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 32))(a2);
        --v15;
      }
      while ( v15 );
    }
  }
}
