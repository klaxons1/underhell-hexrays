int __thiscall sub_10150B40(_DWORD *this)
{
  float v3; // [esp+0h] [ebp-8h]

  v3 = sub_1009C6B0((int)(this + 295), *((float *)off_103DC81C + 3));
  return (*(int (__stdcall **)(_DWORD))(*(this - 3) + 408))(LODWORD(v3));
}
