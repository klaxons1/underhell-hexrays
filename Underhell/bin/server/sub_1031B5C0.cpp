void __thiscall sub_1031B5C0(_BYTE *this, int a2, int a3)
{
  int v4; // eax

  sub_100DA500(this, a2, a3);
  if ( !this[1136] )
  {
    v4 = *(_DWORD *)(a3 + 4 * (a2 == 0) + 104);
    if ( v4 )
    {
      if ( !(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(v4 + 24)) )
      {
        sub_10318E20(this, (int)this);
        this[1136] = 1;
        sub_100EC3F0(this, 0, 0.0, 0);
      }
    }
  }
}
