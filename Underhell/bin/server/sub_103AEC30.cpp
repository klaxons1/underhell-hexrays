bool __thiscall sub_103AEC30(int *this)
{
  int v2; // edi
  int v3; // eax

  v2 = *this;
  v3 = (*(int (__thiscall **)(int *))(*this + 368))(this);
  return (*(unsigned __int8 (__thiscall **)(int *, int))(v2 + 876))(this, v3) != 0;
}
