void __thiscall sub_101C47B0(_DWORD *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  void (__thiscall ***v3)(_DWORD, int); // ecx
  void (__thiscall ***v4)(_DWORD, int); // ecx

  v2 = (void (__thiscall ***)(_DWORD, int))*this;
  if ( v2 )
  {
    (**v2)(v2, 1);
    *this = 0;
  }
  v3 = (void (__thiscall ***)(_DWORD, int))this[1];
  if ( v3 )
  {
    (**v3)(v3, 1);
    this[1] = 0;
  }
  v4 = (void (__thiscall ***)(_DWORD, int))this[2];
  if ( v4 )
  {
    (**v4)(v4, 1);
    this[2] = 0;
  }
}
