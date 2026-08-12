void __usercall sub_10312A50(_DWORD *a1@<ecx>, int a2@<ebx>)
{
  unsigned int v3; // eax
  int v4; // ecx
  int v5; // ebx
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  _BYTE v9[12]; // [esp+8h] [ebp-Ch] BYREF

  sub_101A8C60((int)a1);
  v3 = a1[939];
  if ( v3 == -1 || off_1061BE18[4 * (a1[939] & 0xFFF) + 2] != a1[939] >> 12 )
    v4 = 0;
  else
    v4 = off_1061BE18[4 * (a1[939] & 0xFFF) + 1];
  if ( *(_BYTE *)(v4 + 224) )
  {
    if ( v3 == -1 || off_1061BE18[4 * (a1[939] & 0xFFF) + 2] != v3 >> 12 )
      v8 = 0;
    else
      v8 = off_1061BE18[4 * (a1[939] & 0xFFF) + 1];
    if ( *(_BYTE *)(v8 + 224) == 2 )
      sub_1025FAC0((int)a1);
  }
  else
  {
    if ( (*(int (__thiscall **)(_DWORD *))(*a1 + 368))(a1) )
    {
      v5 = (*(int (__thiscall **)(_DWORD *, int))(*a1 + 368))(a1, a2);
      if ( (a1[63] & 0x800) != 0 )
        sub_100DAE60((int)a1);
      v6 = (*(int (__thiscall **)(int, _BYTE *, _DWORD *))(*(_DWORD *)v5 + 520))(v5, v9, a1 + 145);
      sub_10413A50(v6);
    }
    v7 = (*(int (__thiscall **)(_DWORD *))(*a1 + 368))(a1);
    sub_104138C0(v7);
  }
}
