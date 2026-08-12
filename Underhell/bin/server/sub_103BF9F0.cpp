double __thiscall sub_103BF9F0(_DWORD *this, int a2)
{
  int v3; // esi

  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 288))(a2);
  if ( v3
    && ((*(int (__thiscall **)(int))(*(_DWORD *)v3 + 220))(v3) == 4
     || (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 220))(v3) == 9) )
  {
    return 2.0;
  }
  else
  {
    return sub_100DC7F0(this, a2);
  }
}
