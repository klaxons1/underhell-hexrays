void __thiscall sub_103EAF40(_DWORD *this)
{
  void (__noreturn ***v2)(); // eax
  unsigned int v3; // ecx
  void **v4; // eax
  unsigned int v5; // ecx

  if ( this[440] )
  {
    v2 = sub_1023DBA0();
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v2)[13])(v2, this[440], 0.1, 0);
  }
  v3 = this[410];
  if ( v3 != -1 )
  {
    v4 = (void **)&off_1061BE18[4 * (this[410] & 0xFFF) + 1];
    v5 = v3 >> 12;
    if ( off_1061BE18[4 * (this[410] & 0xFFF) + 2] == v5 )
    {
      if ( *v4 )
      {
        if ( off_1061BE18[4 * (this[410] & 0xFFF) + 2] == v5 )
          sub_101E3110(*v4, 0xCu, 0, 1u);
        else
          sub_101E3110(0, 0xCu, 0, 1u);
      }
    }
  }
}
