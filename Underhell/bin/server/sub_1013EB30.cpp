void __thiscall sub_1013EB30(int this, int a2)
{
  __int64 v3; // [esp-4h] [ebp-10h]

  if ( *(_BYTE *)(this + 800) )
  {
    *(_BYTE *)(this + 800) = 0;
    sub_100EC4A0((int *)this, -1.0, 0);
    if ( *(_BYTE *)(this + 801) )
    {
      HIDWORD(v3) = this;
      LODWORD(v3) = this;
      *(_BYTE *)(this + 801) = 0;
      sub_1010DD80((_DWORD *)(this + 844), v3, 0.0);
    }
  }
}
