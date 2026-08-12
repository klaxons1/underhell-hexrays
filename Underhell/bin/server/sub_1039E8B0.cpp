bool __thiscall sub_1039E8B0(void *this)
{
  int v2; // eax
  int v3; // eax
  bool result; // al

  result = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 368))(this)
        && (v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 368))(this),
            (v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 288))(v2)) != 0)
        && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 1088))(v3)
        && *(_DWORD *)(dword_106EA794 + 48) != 0;
  return result;
}
