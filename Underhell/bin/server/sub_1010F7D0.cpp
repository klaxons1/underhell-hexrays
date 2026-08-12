int __cdecl sub_1010F7D0(int *a1, int a2)
{
  int result; // eax
  int i; // ebx
  int v4; // eax
  int v5; // esi
  const char *v6; // eax
  const char *v7; // eax
  const char *v8; // eax
  const char *v9; // eax
  int v10; // esi
  int v11; // ecx
  int v12; // eax
  float v13[3]; // [esp+0h] [ebp-Ch] BYREF

  result = sub_10153490();
  if ( result )
  {
    if ( *a1 == 5 )
    {
      result = dword_106B31C8;
      for ( i = 1; i <= *(_DWORD *)(dword_106B31C8 + 20); ++i )
      {
        v4 = sub_1025FB50(i);
        v5 = v4;
        if ( v4 )
        {
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 320))(v4) )
          {
            v6 = sub_100634F0(a1, 1);
            if ( strstr((const char *)(v5 + 4296), v6) )
            {
              v7 = sub_100634F0(a1, 2);
              v13[0] = atof(v7);
              v8 = sub_100634F0(a1, 3);
              v13[1] = atof(v8);
              v9 = sub_100634F0(a1, 4);
              v13[2] = atof(v9);
              v10 = *(_DWORD *)(v5 + 24);
              if ( v10 && (v11 = *(_DWORD *)(v10 + 12)) != 0 )
                v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 20))(v11);
              else
                v12 = 0;
              (*(void (__thiscall **)(int, float *, int, _DWORD))(*(_DWORD *)v12 + 1604))(v12, v13, a2, 0);
            }
          }
        }
        result = dword_106B31C8;
      }
    }
  }
  return result;
}
