char __thiscall sub_10310270(int *this, int a2, int a3, int a4)
{
  int v6; // eax

  if ( a2 == dword_106E304C )
  {
    sub_103101D0(this, a3);
    return 1;
  }
  else if ( a2 == dword_106E3050 )
  {
    if ( a3 )
      a3 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 8))(a3);
    else
      a3 = -1;
    v6 = sub_101A40D0(this + 930, (int)&a3);
    if ( v6 != -1 )
    {
      if ( this[938] - v6 - 1 > 0 )
        memcpy(&this[v6 + 930], &this[v6 + 931], 4 * (this[938] - v6 - 1));
      --this[938];
    }
    return 1;
  }
  else
  {
    return sub_10038420(this, a2, a3, a4);
  }
}
