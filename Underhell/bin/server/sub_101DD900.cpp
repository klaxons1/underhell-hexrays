void __thiscall sub_101DD900(_DWORD *this, int a2, int a3)
{
  __int64 v4; // [esp-8h] [ebp-14h]

  sub_10149160((int)this, a2, a3);
  HIDWORD(v4) = this - 201;
  LODWORD(v4) = a2;
  this[100] = -1;
  sub_1010DD80(this + 88, v4, 0.0);
}
