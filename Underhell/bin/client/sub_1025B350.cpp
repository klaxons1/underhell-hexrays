int __thiscall sub_1025B350(void *this, int a2)
{
  void *v2; // esi
  void (__thiscall *v3)(void *, void *); // edx

  v2 = this;
  v3 = *(void (__thiscall **)(void *, void *))(*(_DWORD *)this + 928);
  LOBYTE(this) = a2 != 0;
  v3(v2, this);
  return (*(int (__thiscall **)(void *))(*(_DWORD *)v2 + 16))(v2);
}
