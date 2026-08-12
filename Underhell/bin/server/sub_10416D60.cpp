int __userpurge sub_10416D60@<eax>(int a1@<ecx>, float a2@<edi>, float a3)
{
  void (__noreturn ***v4)(); // eax
  void (__noreturn ***v5)(); // eax
  void (__noreturn ***v6)(); // eax
  void (__noreturn ***v7)(); // eax
  void (__noreturn ***v8)(); // eax
  double v9; // st7
  int *v10; // ecx
  int *v11; // ecx
  unsigned int v12; // ebx
  int *v13; // ecx
  float v15; // [esp+28h] [ebp-Ch]
  float v16; // [esp+3Ch] [ebp+8h]

  if ( a3 >= 300.0 )
    sub_10415B10((_DWORD *)a1);
  else
    sub_10415A50((_DWORD *)a1, a2);
  if ( *(_DWORD *)(a1 + 2128) )
  {
    v4 = sub_1023DBA0();
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD, _DWORD))(*v4)[2])(
      v4,
      *(_DWORD *)(a1 + 2128),
      0.0,
      60.0,
      0.0);
    if ( a3 < 300.0 )
    {
      v5 = sub_1023DBA0();
      ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v5)[12])(
        v5,
        *(_DWORD *)(a1 + 2128),
        0.80000001,
        2.0);
      v6 = sub_1023DBA0();
      ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v6)[11])(
        v6,
        *(_DWORD *)(a1 + 2128),
        100.0,
        2.0);
    }
    v7 = sub_1023DBA0();
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v7)[12])(
      v7,
      *(_DWORD *)(a1 + 2128),
      0.80000001,
      0.0);
    v8 = sub_1023DBA0();
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v8)[11])(
      v8,
      *(_DWORD *)(a1 + 2128),
      100.0,
      0.0);
  }
  if ( a3 <= 0.0 )
  {
    if ( *(_DWORD *)(a1 + 2112) == COERCE_INT(-1.0) )
      goto LABEL_22;
    if ( *(_BYTE *)(a1 + 84) )
    {
      *(_BYTE *)(a1 + 88) |= 1u;
    }
    else
    {
      v11 = *(int **)(a1 + 24);
      if ( v11 )
        sub_100194B0(v11, 2112);
    }
    v9 = -1.0;
  }
  else
  {
    v16 = a3 + *(float *)(dword_106B31C8 + 12);
    if ( *(_DWORD *)(a1 + 2112) == LODWORD(v16) )
      goto LABEL_22;
    if ( *(_BYTE *)(a1 + 84) )
    {
      *(_BYTE *)(a1 + 88) |= 1u;
      v9 = v16;
    }
    else
    {
      v10 = *(int **)(a1 + 24);
      if ( v10 )
        sub_100194B0(v10, 2112);
      v9 = v16;
    }
  }
  *(float *)(a1 + 2112) = v9;
LABEL_22:
  v12 = *(_DWORD *)(a1 + 192) & 0xFFFFFFDF;
  if ( *(_DWORD *)(a1 + 192) != v12 )
  {
    if ( *(_BYTE *)(a1 + 84) )
    {
      *(_BYTE *)(a1 + 88) |= 1u;
    }
    else
    {
      v13 = *(int **)(a1 + 24);
      if ( v13 )
        sub_100194B0(v13, 192);
    }
    *(_DWORD *)(a1 + 192) = v12;
  }
  if ( *(_DWORD *)(a1 + 24) )
    **(_DWORD **)(a1 + 24) |= 0x80u;
  sub_100D8500((_DWORD *)a1);
  sub_100EC3F0((_DWORD *)a1, (int)sub_10416380, 0.0, 0);
  v15 = *(float *)(dword_106B31C8 + 12) + 0.1;
  return sub_100EC4A0((int *)a1, v15, 0);
}
