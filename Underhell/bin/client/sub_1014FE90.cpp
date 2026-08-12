void __thiscall sub_1014FE90(_DWORD *this)
{
  _DWORD *v2; // edi
  int v3; // eax

  if ( (*(int (__thiscall **)(_DWORD *))(*this + 108))(this) )
  {
    v2 = (_DWORD *)sub_100422D0();
    if ( v2 )
    {
      v3 = (*(int (__thiscall **)(_DWORD *))(*this + 108))(this);
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 804))(v3) )
      {
        (*(void (__thiscall **)(_DWORD *))(*this + 100))(this);
        this[13] = -1;
        (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_1041315C + 28))(dword_1041315C, "cancelselect\n");
        sub_101212D0(v2, (int)"Player.WeaponSelected", 0.0, 0);
      }
      else
      {
        sub_101212D0(v2, (int)"Player.DenyWeaponSelection", 0.0, 0);
      }
    }
  }
  else
  {
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_1041315C + 28))(dword_1041315C, "cancelselect\n");
  }
}
