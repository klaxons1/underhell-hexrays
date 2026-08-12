void __thiscall sub_102FEA60(int this)
{
  int v2; // eax

  if ( *(_DWORD *)(this + 2324) != 4 )
  {
    v2 = sub_101679A0((int)"antlion_allied");
    if ( sub_10167A00(v2) == 1 )
    {
      sub_10024290((char *)this, 55);
      sub_10024230((char *)this, 67);
    }
    if ( sub_100697A0((_DWORD *)this, 17, 1) )
    {
      sub_10024230((char *)this, 75);
      sub_10024230((char *)this, 31);
    }
    if ( sub_100697A0((_DWORD *)this, 108, 1) )
      sub_10024290((char *)this, 78);
    else
      sub_10024230((char *)this, 78);
    if ( !sub_100697A0((_DWORD *)this, 97, 1)
      && !sub_100697A0((_DWORD *)this, 105, 1)
      && !sub_100697A0((_DWORD *)this, 91, 1)
      && !sub_100697A0((_DWORD *)this, 96, 1)
      && !sub_100697A0((_DWORD *)this, 93, 1)
      && !sub_100697A0((_DWORD *)this, 92, 1)
      && !sub_100697A0((_DWORD *)this, 94, 1)
      && !sub_100697A0((_DWORD *)this, 95, 1)
      && !sub_100697A0((_DWORD *)this, 96, 1)
      && !sub_100697A0((_DWORD *)this, 89, 1)
      && !sub_100697A0((_DWORD *)this, 99, 1)
      && !sub_100697A0((_DWORD *)this, 100, 1)
      && (*(_BYTE *)(this + 256) & 1) != 0 )
    {
      if ( !sub_100697A0((_DWORD *)this, 89, 1) )
      {
        if ( !(*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
          sub_10024230((char *)this, 57);
        sub_10024230((char *)this, 51);
        sub_10024230((char *)this, 52);
        sub_10024230((char *)this, 73);
        sub_10024230((char *)this, 79);
        if ( sub_100223E0((_DWORD *)this) != 1 )
          sub_10024230((char *)this, 77);
      }
      sub_10024230((char *)this, 74);
    }
  }
}
