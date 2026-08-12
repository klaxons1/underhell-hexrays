void __userpurge sub_10232CA0(int a1@<ecx>, int a2@<edi>, int a3)
{
  unsigned int v4; // eax
  int v5; // eax
  unsigned int v6; // eax
  _DWORD *v7; // eax
  int v8; // ecx
  bool v9; // [esp+Ch] [ebp-4h]

  if ( !*(_BYTE *)(a1 + 889) )
  {
    *(_BYTE *)(a1 + 860) = 0;
    v4 = *(_DWORD *)(a1 + 880);
    if ( v4 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 880) & 0xFFF) + 2] != v4 >> 12 )
      v5 = 0;
    else
      v5 = off_1061BE18[4 * (*(_DWORD *)(a1 + 880) & 0xFFF) + 1];
    if ( (v5
       || (v6 = *(_DWORD *)(a1 + 896), v6 != -1)
       && off_1061BE18[4 * (*(_DWORD *)(a1 + 896) & 0xFFF) + 2] == v6 >> 12
       && off_1061BE18[4 * (*(_DWORD *)(a1 + 896) & 0xFFF) + 1]
       && sub_1022FAF0((_DWORD *)a1)
       && (v5 = sub_1022F7D0((_DWORD *)a1)) != 0)
      && (v7 = (_DWORD *)sub_100D7680(v5)) != 0 )
    {
      v8 = v7[671];
      if ( !v8 || v8 == 2 )
      {
        v9 = (*(_BYTE *)(a1 + 248) & 0x40) != 0;
        if ( (*(int (__thiscall **)(_DWORD *, bool, int))(*v7 + 1588))(v7, v9, 1) )
          sub_10232210(a1);
      }
    }
    else
    {
      *(_BYTE *)(a1 + 877) = 0;
      *(_BYTE *)(a1 + 888) = 1;
      sub_100EC3F0((_DWORD *)a1, (int)sub_102326C0, 0.0, 0);
      sub_100EC4A0((int *)a1, -1.0, 0);
      sub_102326C0((int *)a1, a2);
    }
  }
}
