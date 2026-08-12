int __thiscall sub_1018AC60(_DWORD *this, int a2)
{
  sub_1024E7E0((int)this, a2);
  (*(void (__thiscall **)(_DWORD *, const char *, _DWORD, _DWORD))(*this + 768))(
    this,
    "Resource/UI/TextWindow.res",
    0,
    0);
  return (*(int (__thiscall **)(_DWORD *))(this[107] + 12))(this + 107);
}
