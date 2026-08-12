char __thiscall sub_100CF8C0(unsigned int *this, int a2, int a3)
{
  int v3; // ebx
  unsigned int v5; // eax
  unsigned int *v6; // esi
  int v7; // edx
  int v8; // ecx
  int v9; // ecx
  int v10; // eax

  v3 = a2;
  if ( !a2 )
    return 0;
  v5 = this[525];
  v6 = this + 525;
  if ( v5 == -1 || (v3 = a2, off_1061BE18[4 * (this[525] & 0xFFF) + 2] != this[525] >> 12) )
    v7 = 0;
  else
    v7 = off_1061BE18[4 * (this[525] & 0xFFF) + 1];
  if ( v7 != v3 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(unsigned int *, int))(*this + 972))(this, v3) )
    {
      if ( *v6 == -1
        || off_1061BE18[4 * (*v6 & 0xFFF) + 2] != *v6 >> 12
        || !off_1061BE18[4 * (*v6 & 0xFFF) + 1]
        || (v10 = sub_1026A890(v6), (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v10 + 996))(v10, v3)) )
      {
        sub_100C9FD0(v6, v3);
        return (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 992))(v3);
      }
    }
    return 0;
  }
  if ( v5 == -1 || off_1061BE18[4 * (this[525] & 0xFFF) + 2] != this[525] >> 12 )
    v8 = 0;
  else
    v8 = off_1061BE18[4 * (this[525] & 0xFFF) + 1];
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v8 + 1008))(v8) )
    return 0;
  if ( *v6 == -1 || off_1061BE18[4 * (*v6 & 0xFFF) + 2] != *v6 >> 12 )
    return (*(int (**)(void))(MEMORY[0] + 992))();
  v9 = off_1061BE18[4 * (*v6 & 0xFFF) + 1];
  return (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 992))(v9);
}
