int __thiscall sub_100DECE0(_DWORD *this, int a2)
{
  _BYTE v4[4]; // [esp+4h] [ebp-Ch] BYREF
  int v5; // [esp+8h] [ebp-8h] BYREF
  int v6; // [esp+Ch] [ebp-4h] BYREF

  sub_10241570(a2);
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 264))(this, 0);
  sub_10236170(v4, &v6);
  sub_10132120(&v5, &a2);
  sub_10236200(0, v6, v5, a2 - v6);
  return sub_100DE6C0(this - 11);
}
