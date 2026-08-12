int __thiscall sub_100C6C20(int *this, int a2)
{
  int v3; // eax
  int v4; // edx
  int v5; // eax
  int v7; // [esp-4h] [ebp-8h]

  sub_10241570(a2);
  v3 = sub_100B66A0((int)&dword_1042FB78, (int)"crosshair_default");
  v4 = *this;
  this[53] = v3;
  (*(void (__thiscall **)(int *, _DWORD))(v4 + 264))(this, 0);
  v7 = sub_10076720();
  v5 = sub_10076740();
  return sub_102361A0(v5, v7);
}
