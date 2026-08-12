int __thiscall sub_102610A0(_DWORD *this, int *a2)
{
  int v3; // ebx
  int v4; // ebp
  int v5; // eax
  int v6; // eax

  sub_1025BC50(this, (int)a2);
  (*(void (__thiscall **)(_DWORD *, int))(*this + 788))(this, 3);
  v3 = *this;
  v4 = *a2;
  v5 = (*(int (__thiscall **)(_DWORD *))(*this + 84))(this);
  v6 = (*(int (__thiscall **)(int *, const char *, int))(v4 + 12))(a2, "DefaultSmall", v5);
  return (*(int (__thiscall **)(_DWORD *, int))(v3 + 816))(this, v6);
}
