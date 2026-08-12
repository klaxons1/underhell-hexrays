void __thiscall sub_10211780(int this, int a2, int a3)
{
  int v4; // ecx
  int v5; // edi
  _DWORD *v6; // ecx
  unsigned int *v7; // esi
  unsigned int v8; // edi
  unsigned int *v9; // eax
  int *v10; // ecx
  __int64 v11; // [esp-4h] [ebp-18h]
  __int64 v12; // [esp-4h] [ebp-18h]
  __int64 v13; // [esp-4h] [ebp-18h]

  sub_10211280((_BYTE *)this, a2, a3);
  v4 = *(_DWORD *)(this - 700);
  if ( v4 && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 40))(v4) )
  {
    if ( (*(_DWORD *)(this - 876) & 0x40) == 0 )
      return;
    sub_1020FD90((unsigned int *)(this - 1124));
    if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)(this - 4) + 92))(this - 4, 0) )
      sub_100EBE30(this - 1124, 3);
  }
  v5 = this - 1124;
  HIDWORD(v11) = this - 1124;
  LODWORD(v11) = a2;
  sub_1010DD80((_DWORD *)(this + 368), v11, 0.0);
  switch ( a3 )
  {
    case 0:
      HIDWORD(v12) = this - 1124;
      LODWORD(v12) = a2;
      sub_1010DD80((_DWORD *)(this + 416), v12, 0.0);
      goto LABEL_11;
    case 1:
      v6 = (_DWORD *)(this + 392);
LABEL_12:
      HIDWORD(v13) = this - 1124;
      LODWORD(v13) = a2;
      sub_1010DD80(v6, v13, 0.0);
      break;
    case 2:
LABEL_11:
      v6 = (_DWORD *)(this + 488);
      goto LABEL_12;
  }
  v7 = (unsigned int *)(v5 + 248);
  if ( (*(_DWORD *)(v5 + 248) & 0x800) != 0 )
  {
    sub_101CFB90(v5);
    v8 = *v7 & 0xFFFFF7FF;
    if ( *v7 != v8 )
    {
      v9 = v7 - 62;
      if ( *((_BYTE *)v7 - 164) )
      {
        *((_BYTE *)v9 + 88) |= 1u;
        *v7 = v8;
      }
      else
      {
        v10 = (int *)v9[6];
        if ( v10 )
          sub_100194B0(v10, 248);
        *v7 = v8;
      }
    }
  }
}
