void __thiscall sub_102075B0(void *this)
{
  const char *v2; // edi
  const char **v3; // eax
  _BYTE v4[4]; // [esp+4h] [ebp-4h] BYREF

  sub_100BDBA0((int)this);
  if ( !*((_BYTE *)this + 225) && *((_DWORD *)this + 55) )
  {
    v2 = (const char *)*((_DWORD *)this + 23);
    if ( !v2 )
      v2 = String;
    v3 = (const char **)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)this + 28))(this, v4);
    Warning("%s has a health specified in model '%s'. Use prop_physics or prop_dynamic instead.\n", v2, *v3);
  }
}
