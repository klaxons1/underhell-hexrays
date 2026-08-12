char sub_101E1B10()
{
  _DWORD *v0; // eax
  void *v1; // ebx
  _DWORD *v2; // esi
  int v3; // eax
  int v4; // edi
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  char **v7; // eax
  _DWORD *v8; // esi
  _DWORD *v9; // eax
  int v10; // edi
  _DWORD *v11; // eax
  char **v12; // eax
  int v14; // [esp-Ch] [ebp-14h]
  int v15; // [esp-Ch] [ebp-14h]
  int v16; // [esp-Ch] [ebp-14h]
  int v17; // [esp-Ch] [ebp-14h]
  int v18; // [esp+4h] [ebp-4h]

  v0 = (_DWORD *)sub_1025FB50(1);
  v1 = v0;
  if ( v0 )
  {
    v0 = (_DWORD *)sub_100CF460(v0);
    v2 = v0;
    if ( v0 )
    {
      if ( sub_100D1400(v0) )
      {
        v3 = (*(int (__thiscall **)(_DWORD *))(*v2 + 1284))(v2);
        v4 = v3;
        if ( v3 != -1 )
        {
          v5 = (_DWORD *)sub_102D9B20(v3);
          v18 = sub_100BA1B0(v5, v14);
          v6 = (_DWORD *)sub_102D9B20(v4);
          v7 = (char **)sub_100B9CF0(v6, v15);
          sub_100C7A30(v1, v18, *v7, 0);
        }
      }
      LOBYTE(v0) = sub_100D1410(v2);
      if ( (_BYTE)v0 )
      {
        LOBYTE(v0) = (*(int (__thiscall **)(_DWORD *))(*v2 + 976))(v2);
        if ( (_BYTE)v0 )
        {
          v0 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v2 + 1288))(v2);
          v8 = v0;
          if ( v0 != (_DWORD *)-1 )
          {
            v9 = (_DWORD *)sub_102D9B20(v0);
            v10 = sub_100BA1B0(v9, v16);
            v11 = (_DWORD *)sub_102D9B20(v8);
            v12 = (char **)sub_100B9CF0(v11, v17);
            LOBYTE(v0) = sub_100C7A30(v1, v10, *v12, 0);
          }
        }
      }
    }
  }
  return (char)v0;
}
