void __thiscall sub_102C8F10(int this)
{
  __int64 v2; // [esp-8h] [ebp-10h]

  if ( 0.0 != *(float *)(this + 800) )
  {
    HIDWORD(v2) = this;
    LODWORD(v2) = this;
    sub_1010DD80((_DWORD *)(this + 1176), v2, 0.0);
    *(float *)(this + 800) = 0.0;
  }
}
