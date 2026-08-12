int __thiscall sub_101513D0(_DWORD *this, int a2)
{
  int v3; // eax
  int v5; // [esp+0h] [ebp-10h]
  float v6; // [esp+4h] [ebp-Ch]
  int v7; // [esp+8h] [ebp-8h]
  float v8; // [esp+Ch] [ebp-4h]

  v7 = this[311];
  v6 = *((float *)this + 310);
  v5 = this[297];
  v3 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 36))(this, this[298]);
  sub_1009C8D0((char *)this + 1184, v3, v5, v6, v7, v8);
  (*(void (__cdecl **)(_DWORD))(*(this - 2) + 408))(0.0);
  return sub_1003CD40(this, a2);
}
