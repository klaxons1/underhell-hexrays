int __thiscall sub_10278CC0(int *this, int *a2)
{
  int v2; // ebp
  int v4; // edi
  int v5; // eax
  int v6; // eax
  char v8; // [esp+0h] [ebp-10h]

  v2 = *a2;
  v4 = *this;
  v5 = (*(int (__thiscall **)(int *))(*this + 84))(this);
  v6 = (*(int (__thiscall **)(int *, const char *, int))(v2 + 12))(a2, "DefaultUnderline", v5);
  (*(void (__thiscall **)(int *, int))(v4 + 816))(this, v6);
  sub_1024AB70((int)this, (int)a2, v8);
  return (*(int (__thiscall **)(int *, int))(*this + 232))(this, 14);
}
