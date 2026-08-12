bool __thiscall sub_100C78A0(int *this, int a2)
{
  int v4; // edi
  int v5; // eax

  if ( !a2 )
    return 0;
  v4 = *this;
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 1248))(a2);
  return (*(int (__thiscall **)(int *, int))(v4 + 980))(this, v5) != 0;
}
