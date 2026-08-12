void __thiscall sub_1013EE70(int this)
{
  __int64 v2; // [esp-4h] [ebp-10h]

  if ( (*(_BYTE *)(this + 248) & 1) != 0 )
  {
    if ( !*(_BYTE *)(this + 800) )
    {
      *(_BYTE *)(this + 800) = 1;
      sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
      *(_BYTE *)(this + 801) = 0;
      *(float *)(this + 816) = 0.0;
    }
  }
  else if ( *(_BYTE *)(this + 800) )
  {
    *(_BYTE *)(this + 800) = 0;
    sub_100EC4A0((int *)this, -1.0, 0);
    if ( *(_BYTE *)(this + 801) )
    {
      HIDWORD(v2) = this;
      LODWORD(v2) = this;
      *(_BYTE *)(this + 801) = 0;
      sub_1010DD80((_DWORD *)(this + 844), v2, 0.0);
    }
  }
}
