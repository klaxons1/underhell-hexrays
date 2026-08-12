void __thiscall sub_1001BBC0(_DWORD *this, int a2)
{
  bool v2; // dl
  char **v3; // eax
  char *v4; // eax

  v2 = this[956] != 0;
  v3 = (char **)(a2 + 8);
  if ( *(_DWORD *)(a2 + 24) != 2 )
  {
    a2 = 0;
    v3 = (char **)&a2;
  }
  v4 = *v3;
  this[956] = v4;
  if ( v4 )
  {
    sub_1001BA70(this, v4);
  }
  else if ( v2 )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 2304))(this, this[581]);
  }
}
