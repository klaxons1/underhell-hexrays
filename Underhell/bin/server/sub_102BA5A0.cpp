void __thiscall sub_102BA5A0(_DWORD *this, char *String2)
{
  _DWORD *v3; // esi
  const char *v4; // eax

  if ( String2 && *String2 )
  {
    v3 = sub_1012BF20(&dword_1069E3E0, 0, String2, 0, 0, 0, 0);
    if ( v3 )
    {
      this[201] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v3 + 8))(v3);
      return;
    }
    v4 = (const char *)this[65];
    if ( !v4 )
      v4 = String;
    DevMsg("Unable to find env_alyxemp (%s) target %s!\n", v4, String2);
  }
  this[201] = -1;
}
