int __thiscall sub_100D2D50(_DWORD *this, int a2)
{
  int result; // eax

  sub_10241570(a2);
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 264))(this, 0);
  result = sub_100B4090(&dword_1042FB78, "CHudCrosshair");
  this[52] = result;
  return result;
}
