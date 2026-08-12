char __userpurge sub_100243A0@<al>(int a1@<ecx>, _DWORD *a2@<ebx>, int a3@<edi>, int a4)
{
  int v5; // eax
  int v6; // eax
  int v7; // eax
  _DWORD *i; // edi
  int v9; // eax
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  bool v14; // cc
  char v15; // cl
  _DWORD *v16; // eax
  int v17; // eax
  char v18; // cl
  _DWORD *v19; // eax
  const char *v20; // eax
  const char *v21; // eax
  int v22; // eax
  char v23; // cl
  const char *v25; // [esp-Ch] [ebp-18h]
  _BYTE v28[7]; // [esp+4h] [ebp-8h] BYREF
  bool v29; // [esp+Bh] [ebp-1h]

  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 2160))(a1);
  v5 = sub_1007DB30(32);
  v29 = v5 != -1
     && (v6 = v5 - 1000000000, v6 != -1)
     && ((1 << (v6 & 0x1F)) & *(_DWORD *)(a1 + 4 * (v6 >> 5) + 2192)) != 0;
  sub_10023E60((_DWORD *)a1, (int)&unk_105FE3E4, 8);
  v7 = sub_100AB0F0(v28, -1);
  for ( i = (_DWORD *)v7; v7; i = (_DWORD *)v7 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD *))(*i + 320))(i, a2) )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 2160))(a1);
      v9 = sub_1007DB30(32);
      if ( v9 != -1 && v9 != 999999999 )
        *(_DWORD *)(a1 + 4 * ((v9 - 1000000000) >> 5) + 2192) |= 1 << (v9 & 0x1F);
      *(float *)(a1 + 2736) = *(float *)(dword_106B31C8 + 12);
    }
    a2 = i;
    v10 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 1080))(a1);
    if ( v10 != 4 )
    {
      if ( i == (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1) )
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 2160))(a1);
        v11 = sub_1007DB30(10);
        if ( v11 != -1 && v11 != 999999999 )
          *(_DWORD *)(a1 + 4 * ((v11 - 1000000000) >> 5) + 2192) |= 1 << (v11 & 0x1F);
      }
      switch ( v10 )
      {
        case 1:
          v12 = (*(int (__thiscall **)(int, _DWORD *, _DWORD *, int))(*(_DWORD *)a1 + 1084))(a1, i, i, a3);
          if ( v12 >= 0 )
          {
            v14 = v12 <= 10;
            (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 2160))(a1);
            if ( v14 )
              v13 = sub_1007DB30(7);
            else
              v13 = sub_1007DB30(34);
          }
          else
          {
            (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 2160))(a1);
            v13 = sub_1007DB30(9);
          }
          if ( v13 != -1 )
          {
            v15 = v13;
            if ( v13 != 999999999 )
            {
              v16 = (_DWORD *)(a1 + 4 * ((v13 - 1000000000) >> 5) + 2192);
              *v16 |= 1 << (v15 & 0x1F);
            }
          }
          if ( (i[63] & 0x800) != 0 )
            sub_100DAE60(i);
          a3 = 0;
          a2 = i + 145;
          (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)a1 + 1876))(a1, i);
          break;
        case 2:
          if ( (i[63] & 0x800) != 0 )
            sub_100DAE60(i);
          (*(void (__thiscall **)(int, _DWORD *, _DWORD *, _DWORD))(*(_DWORD *)a1 + 1876))(a1, i, i + 145, 0);
          (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 2160))(a1);
          v17 = sub_1007DB30(8);
          if ( v17 != -1 )
          {
            v18 = v17;
            if ( v17 != 999999999 )
            {
              v19 = (_DWORD *)(a1 + 4 * ((v17 - 1000000000) >> 5) + 2192);
              *v19 |= 1 << (v18 & 0x1F);
            }
          }
          break;
        case 3:
        case 4:
          break;
        default:
          v20 = (const char *)i[23];
          if ( !v20 )
            v20 = String;
          v25 = v20;
          v21 = sub_10019630((_DWORD *)a1);
          DevWarning(2, "%s can't assess %s\n", v21, v25);
          break;
      }
    }
    v7 = sub_100AB170(v28);
  }
  if ( v29 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 2160))(a1);
    v22 = sub_1007DB30(32);
    if ( v22 == -1
      || (v7 = v22 - 1000000000, v7 == -1)
      || (LOBYTE(v7) = ((1 << (v7 & 0x1F)) & *(_DWORD *)(a1 + 4 * (v7 >> 5) + 2192)) != 0, !(_BYTE)v7) )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 2160))(a1);
      v7 = sub_1007DB30(33);
      if ( v7 != -1 )
      {
        v23 = v7;
        if ( v7 != 999999999 )
        {
          v7 = a1 + 4 * ((v7 - 1000000000) >> 5) + 2192;
          *(_DWORD *)v7 |= 1 << (v23 & 0x1F);
        }
      }
    }
  }
  return v7;
}
