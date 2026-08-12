int __thiscall sub_1024F400(_BYTE *this, int a2)
{
  void (__stdcall *v3)(int); // edx

  v3 = *(void (__stdcall **)(int))(*(_DWORD *)this + 912);
  this[357] = a2;
  v3(a2);
  (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 916))(this, a2);
  (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 920))(this, a2);
  return (*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 928))(this, a2);
}
