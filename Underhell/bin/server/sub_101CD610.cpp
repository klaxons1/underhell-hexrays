void __thiscall sub_101CD610(char *this, _BYTE *a2)
{
  _BYTE *v3; // esi

  if ( a2 )
  {
    *((_DWORD *)this + 1258) = *(_DWORD *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 8))(a2);
    this[225] = a2[225];
  }
  else
  {
    *((_DWORD *)this + 1258) = -1;
    v3 = this + 225;
    if ( this[225] != 1 )
    {
      (*(void (__thiscall **)(char *, char *))(*(_DWORD *)this + 480))(this, this + 225);
      *v3 = 1;
    }
  }
}
