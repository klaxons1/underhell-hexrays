char __thiscall sub_104049B0(unsigned __int16 *this)
{
  const char *v2; // eax
  _BYTE v4[4]; // [esp+8h] [ebp-4h] BYREF

  v2 = *(const char **)(*(int (__thiscall **)(unsigned __int16 *, _BYTE *))(*(_DWORD *)this + 28))(this, v4);
  if ( !v2 )
    v2 = String;
  (*(void (__thiscall **)(unsigned __int16 *, const char *))(*(_DWORD *)this + 104))(this, v2);
  sub_10112C00((int)(this + 160), 1);
  sub_101129A0(this + 160, this[178] | 4);
  return sub_100EAB80(this, 32);
}
