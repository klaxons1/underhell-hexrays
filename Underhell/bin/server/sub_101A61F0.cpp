int __thiscall sub_101A61F0(_DWORD *this, int a2)
{
  int v3; // eax
  int v5; // eax
  int v6; // eax

  if ( a2 == 34 )
  {
    if ( this[943] )
    {
      v3 = sub_1023DBA0();
      (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v3 + 48))(v3, this[943], 0.0, 0.2);
    }
    this[49] = sub_101A5A10;
    return sub_100209B0(this, 34);
  }
  else
  {
    v5 = this[593];
    if ( v5 == 36 || v5 == 34 && a2 != 36 )
    {
      if ( this[943] )
      {
        v6 = sub_1023DBA0();
        (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v6 + 48))(v6, this[943], 1.0, 0.2);
      }
      this[49] = 0;
    }
    return sub_100209B0(this, a2);
  }
}
