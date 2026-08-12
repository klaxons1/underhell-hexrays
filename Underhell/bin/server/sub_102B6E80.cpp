bool __thiscall sub_102B6E80(_BYTE *this, int a2)
{
  int v3; // eax
  char v4; // cl

  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 220))(a2);
  v4 = 0;
  if ( v3 == 19 || v3 == 12 || v3 == 4 )
    return 0;
  if ( v3 == 14 || v3 == 9 || v3 == 15 || v3 == 25 || v3 == 16 )
    v4 = 1;
  if ( this[1177] )
    return v4 == 0;
  else
    return v4;
}
