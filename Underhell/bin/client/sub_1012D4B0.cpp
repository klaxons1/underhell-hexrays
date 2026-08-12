bool __thiscall sub_1012D4B0(int *this, int a2, int a3)
{
  int v3; // eax
  int v4; // esi

  if ( !sub_1012D420(this, a2, a3) )
    return 0;
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 28))(a2);
  v4 = v3;
  if ( !v3 )
    return 0;
  return !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 520))(v3)
      && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 504))(v4);
}
