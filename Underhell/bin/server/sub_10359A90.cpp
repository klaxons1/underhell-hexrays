char __userpurge sub_10359A90@<al>(int a1@<ecx>, _DWORD *a2@<ebx>, int a3)
{
  int v4; // eax
  _DWORD *i; // edi
  double v6; // st7
  int v7; // ebx
  int v8; // eax
  const char *v9; // eax
  const char *v10; // eax
  const char *v12; // [esp-8h] [ebp-18h]
  char v14[7]; // [esp+8h] [ebp-8h] BYREF
  bool v15; // [esp+Fh] [ebp-1h]

  v15 = sub_10023D10((_DWORD *)a1, 32);
  sub_10023E60((_DWORD *)a1, (int)&unk_10671BD8, 8);
  v4 = sub_100AB0F0(*(_DWORD ****)(a1 + 2404), (int)v14, -1);
  for ( i = (_DWORD *)v4; v4; i = (_DWORD *)v4 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD *))(*i + 320))(i, a2) )
    {
      sub_10023CB0((char *)a1, 32);
      v6 = *(float *)(dword_106B31C8 + 12);
      *(float *)(a1 + 2736) = *(float *)(dword_106B31C8 + 12);
      if ( *(float *)(a1 + 2708) < 0.0 )
        *(float *)(a1 + 2708) = v6;
    }
    a2 = i;
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 1080))(a1);
    if ( v7 != 4 )
    {
      if ( i == (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1) )
        sub_10023CB0((char *)a1, 10);
      switch ( v7 )
      {
        case 1:
          v8 = (*(int (__thiscall **)(int, _DWORD *, _DWORD *))(*(_DWORD *)a1 + 1084))(a1, i, i);
          if ( v8 >= 0 )
          {
            if ( v8 <= 10 )
              sub_10023CB0((char *)a1, 7);
            else
              sub_10023CB0((char *)a1, 34);
          }
          else
          {
            sub_10023CB0((char *)a1, 9);
          }
          if ( (i[63] & 0x800) != 0 )
            sub_100DAE60((int)i);
          a2 = 0;
          (*(void (__thiscall **)(int, _DWORD *, _DWORD *))(*(_DWORD *)a1 + 1876))(a1, i, i + 145);
          break;
        case 2:
          if ( (i[63] & 0x800) != 0 )
            sub_100DAE60((int)i);
          (*(void (__thiscall **)(int, _DWORD *, _DWORD *, _DWORD))(*(_DWORD *)a1 + 1876))(a1, i, i + 145, 0);
          sub_10023CB0((char *)a1, 8);
          break;
        case 3:
        case 4:
          break;
        default:
          v9 = (const char *)i[23];
          if ( !v9 )
            v9 = String;
          v12 = v9;
          v10 = sub_10019630((_DWORD *)a1);
          DevWarning(2, "%s can't assess %s\n", v10, v12);
          break;
      }
    }
    v4 = sub_100AB170(*(_DWORD ***)(a1 + 2404), v14);
  }
  if ( v15 )
  {
    LOBYTE(v4) = sub_10023D10((_DWORD *)a1, 32);
    if ( !(_BYTE)v4 )
      LOBYTE(v4) = (unsigned __int8)sub_10023CB0((char *)a1, 33);
  }
  return v4;
}
