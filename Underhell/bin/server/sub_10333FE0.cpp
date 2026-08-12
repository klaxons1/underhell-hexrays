BOOL __thiscall sub_10333FE0(_DWORD *this)
{
  int v2; // edi
  int v3; // eax

  v2 = sub_100CF460(this);
  v3 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
  return v3
      && v2
      && (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 220))(v3) == 13
      && (*(const char **)(v2 + 92) == "weapon_crowbar" || sub_100D6240((_DWORD *)v2, "weapon_crowbar"));
}
