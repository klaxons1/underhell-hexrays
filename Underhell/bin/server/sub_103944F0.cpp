void __thiscall sub_103944F0(_DWORD *this, int a2)
{
  __int64 v3; // [esp+Ch] [ebp-10h]

  sub_100218E0(this, a2);
  (*(void (__thiscall **)(_DWORD *, const char *, _DWORD, _DWORD, _DWORD, _DWORD))(*this + 2344))(
    this,
    "TLK_NEWWEAPON",
    0,
    0,
    0,
    0);
  HIDWORD(v3) = this;
  LODWORD(v3) = this;
  sub_1010DD80(this + 1411, v3, 0.0);
}
