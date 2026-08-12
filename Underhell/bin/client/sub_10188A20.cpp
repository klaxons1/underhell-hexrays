int __thiscall sub_10188A20(int *this, int *a2)
{
  int v4; // ebx
  unsigned __int8 v5; // al
  int v6; // eax
  int v8; // [esp+14h] [ebp+8h]

  sub_1025BC50(a2);
  v4 = *this;
  v8 = *a2;
  v5 = (*(int (__thiscall **)(int *))(*this + 84))(this);
  v6 = (*(int (__thiscall **)(int *, const char *, _DWORD))(v8 + 12))(a2, "Marlett", v5);
  return (*(int (__thiscall **)(int *, int))(v4 + 816))(this, v6);
}
