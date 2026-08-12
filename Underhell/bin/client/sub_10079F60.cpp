void __thiscall sub_10079F60(void *this, int *a2, float a3)
{
  int v4; // ecx
  int v5; // eax
  int v6; // eax

  v4 = sub_1007A7B0(*a2);
  if ( v4 )
  {
    if ( -1293.0 != *((float *)a2 + 1) )
    {
      if ( 3.4028235e38 == *((float *)a2 + 1) )
      {
        sub_10079F20(this, *a2);
        *((float *)a2 + 2) = a3;
        return;
      }
      *((float *)a2 + 1) = 3.4028235e38;
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 4))(v4);
    *((float *)a2 + 2) = a3;
  }
  else
  {
    v5 = sub_1007A7B0(*a2);
    if ( v5 )
    {
      v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5);
      if ( v6 != 0xFFFF )
        sub_10079E70((int)this, v6);
    }
  }
}
