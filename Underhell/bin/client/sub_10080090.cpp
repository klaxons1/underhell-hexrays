_WORD *__thiscall sub_10080090(int *this, int a2, char a3)
{
  BOOL v4; // ecx
  char v5; // al
  int v6; // esi
  char v7; // cl

  v4 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 16))(a2) != 0;
  v5 = 0;
  v6 = v4 + 7;
  if ( v4 )
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 160))(a2);
  v7 = 0;
  if ( a3 )
  {
    v7 = 2;
    if ( v6 == 7 )
      LOBYTE(v6) = 6;
  }
  if ( v5 )
    v7 |= 1u;
  return sub_1007FFC0(this, a2, v6, v7);
}
