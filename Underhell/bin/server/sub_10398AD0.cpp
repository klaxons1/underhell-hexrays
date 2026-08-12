bool __thiscall sub_10398AD0(_DWORD *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  bool result; // al

  result = (!(*(int (__thiscall **)(_DWORD *))(*this + 368))(this)
         || ((v2 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this)) == 0
          || (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 220))(v2) != 20)
         && (v3 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this), !sub_103960A0(v3))
         && (v4 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this), !sub_103945D0(v4)))
        && sub_10027110(this);
  return result;
}
