bool __thiscall sub_1003B810(_WORD *this, int a2)
{
  int v3; // esi

  if ( a2 )
  {
    v3 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 8))(dword_10413178, a2);
    sub_1003B5B0(this, v3);
    return v3 != -1;
  }
  else
  {
    sub_1003B5B0(this, -1);
    return 0;
  }
}
