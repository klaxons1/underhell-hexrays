void __thiscall sub_10079F20(void *this, int a2)
{
  int v3; // eax
  int v4; // eax

  v3 = sub_1007A7B0(a2);
  if ( v3 )
  {
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3);
    if ( v4 != 0xFFFF )
      sub_10079E70((int)this, v4);
  }
}
