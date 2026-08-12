int __stdcall sub_100A3E40(int **a1, int a2)
{
  int result; // eax
  int v3; // edi
  __int16 v5; // ax
  _DWORD *v6; // ebx
  __int16 v7; // ax
  int v8; // edi
  char String2[256]; // [esp+4h] [ebp-244h] BYREF
  char v10[256]; // [esp+104h] [ebp-144h] BYREF
  char String1[32]; // [esp+204h] [ebp-44h] BYREF
  char v12[32]; // [esp+224h] [ebp-24h] BYREF
  int v13; // [esp+244h] [ebp-4h]
  int v14; // [esp+250h] [ebp+8h]
  int v15; // [esp+254h] [ebp+Ch]

  result = (int)a1;
  v3 = **a1;
  v13 = v3;
  if ( v3 )
  {
    if ( (_UNKNOWN *)v3 != &unk_10694290 )
    {
      result = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 56))(a2);
      if ( result > 0 )
      {
        v15 = result;
        do
        {
          (*(void (__thiscall **)(int, char *))(*(_DWORD *)a2 + 24))(a2, String1);
          if ( !_stricmp(String1, "ResponseGroup") )
          {
            (*(void (__thiscall **)(int, char *, int, _DWORD))(*(_DWORD *)a2 + 80))(a2, v10, 256, 0);
            v5 = sub_100A33D0((_WORD *)(v3 + 4), (int)v10);
            if ( v5 != -1 )
            {
              v6 = (_DWORD *)(*(_DWORD *)(v3 + 8) + 60 * v5 + 12);
              (*(void (__thiscall **)(int, _DWORD *, int *))(*(_DWORD *)a2 + 8))(a2, v6, &dword_1060A524);
              v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 52))(a2);
              if ( v7 > 0 )
              {
                v14 = v7;
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
                  --v14;
                }
                while ( v14 );
                v3 = v13;
              }
            }
          }
          result = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 32))(a2);
          --v15;
        }
        while ( v15 );
      }
    }
  }
  return result;
}
