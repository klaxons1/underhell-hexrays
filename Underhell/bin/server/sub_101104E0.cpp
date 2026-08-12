void __cdecl sub_101104E0(int *a1)
{
  int v1; // eax
  int *v2; // esi
  const char *v3; // eax
  _DWORD *v4; // eax
  float v5; // [esp+0h] [ebp-64h]
  int v6; // [esp+60h] [ebp-4h]

  if ( *(_DWORD *)(*(_DWORD *)(dword_1069ABE0 + 28) + 48) )
  {
    v1 = sub_10153490();
    v2 = (int *)v1;
    if ( v1 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v1 + 320))(v1) )
      {
        v6 = 10;
        if ( *a1 >= 2 )
        {
          v3 = String;
          if ( *a1 > 1 )
            v3 = (const char *)a1[259];
          v6 = atoi(v3);
        }
        v5 = (float)v6;
        v4 = (_DWORD *)sub_10248110((int)v2, (int)v2, v5, 0, 0);
        sub_100D9E70(v2, (int)v2, v4);
      }
    }
  }
}
