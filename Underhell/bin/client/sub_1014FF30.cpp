void __thiscall sub_1014FF30(_DWORD *this)
{
  _DWORD *v2; // edi

  v2 = (_DWORD *)sub_100422D0();
  if ( v2 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 36))(this) )
    {
      (*(void (__thiscall **)(_DWORD *))(*this + 64))(this);
      this[13] = -1;
      sub_101212D0(v2, (int)"Player.WeaponSelectionClose", 0.0, 0);
    }
    else
    {
      (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_1041315C + 28))(dword_1041315C, "escape");
    }
  }
}
