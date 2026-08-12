void __thiscall sub_10211550(void *this)
{
  const char *v2; // edi
  const char **v3; // eax
  char *v4; // eax
  _BYTE v5[4]; // [esp+4h] [ebp-4h] BYREF

  sub_100BDBA0((int)this);
  if ( !*((_BYTE *)this + 225) && *((_DWORD *)this + 55) )
  {
    v2 = (const char *)*((_DWORD *)this + 23);
    if ( !v2 )
      v2 = String;
    v3 = (const char **)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)this + 28))(this, v5);
    Warning("%s has a health specified in model '%s'. Use prop_physics or prop_dynamic instead.\n", v2, *v3);
  }
  v4 = (char *)*((_DWORD *)this + 394);
  if ( v4 )
    sub_1020FD00((int)this, v4, 0, 0);
}
