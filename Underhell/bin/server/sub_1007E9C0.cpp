char __thiscall sub_1007E9C0(_DWORD *this)
{
  int v2; // eax
  int v3; // edi
  int v4; // ecx
  const char *v5; // eax
  const char *v6; // ecx
  void (*v7)(void); // edx

  v2 = sub_100A6190(this[9]);
  v3 = this[3];
  *((_BYTE *)this + 95) = 0;
  if ( !v2 )
  {
    if ( !v3 )
    {
LABEL_13:
      (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 28))(this, 0, -1.0);
      return 1;
    }
    v4 = this[1];
    v5 = *(const char **)(v4 + 260);
    if ( !v5 )
      v5 = String;
    v6 = *(const char **)(v4 + 92);
    if ( !v6 )
      v6 = String;
    DevMsg("Warning: %s(%s) appears to have wrong nav type in CAI_Navigator::MoveGround()\n", v6, v5);
    if ( v3 == 1 )
    {
      v7 = *(void (**)(void))(*(_DWORD *)this[5] + 36);
    }
    else
    {
      if ( v3 != 3 )
      {
LABEL_12:
        this[3] = 0;
        goto LABEL_13;
      }
      v7 = *(void (**)(void))(*(_DWORD *)this[5] + 24);
    }
    v7();
    goto LABEL_12;
  }
  if ( v2 != 2 || v3 == 2 )
    goto LABEL_13;
  return 0;
}
