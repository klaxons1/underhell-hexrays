bool __thiscall sub_100A88A0(_DWORD *this, _DWORD *a2)
{
  int v4; // eax

  if ( this[247] == 2 || !*a2 )
    return 1;
  v4 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a2 + 288))(*a2);
  return v4 && ((*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 1088))(v4) != 0) == this[247];
}
