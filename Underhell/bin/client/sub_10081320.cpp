int __thiscall sub_10081320(_DWORD *this)
{
  int v2; // eax

  if ( this[4]
    && ((int (*)(void))sub_100B9190)()
    && (v2 = sub_100B9190(this[4]), (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 128))(v2)) )
  {
    return sub_100B9190(this[4]);
  }
  else
  {
    return 0;
  }
}
