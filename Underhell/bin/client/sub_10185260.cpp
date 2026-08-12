int __thiscall sub_10185260(int this, int a2)
{
  char *v3; // eax

  v3 = (char *)sub_1022B4C0("icon", (int)Locale);
  sub_102282F0((char *)(this + 212), v3, 0x80u);
  *(_DWORD *)(this + 208) = sub_100B66A0((int)&dword_1042FB78, this + 212);
  *(_BYTE *)(this + 340) = sub_1022A800("scaleImage", 0) != 0;
  return sub_10241C00(a2);
}
