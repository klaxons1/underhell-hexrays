void __thiscall sub_10252270(void *this)
{
  int v2; // edi
  void *v3; // esp
  char v4[12]; // [esp+0h] [ebp-Ch] BYREF

  v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 784))(this) + 1;
  v3 = alloca(v2);
  (*(void (__thiscall **)(void *, char *, int))(*(_DWORD *)this + 780))(this, v4, v2);
  sub_10227D70(v4);
}
