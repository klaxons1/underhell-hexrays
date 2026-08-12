void __thiscall sub_102DCF10(_DWORD *this)
{
  _DWORD *v2; // eax
  __int64 v3; // [esp-8h] [ebp-10h]

  if ( sub_102DBB80(this) )
  {
    HIDWORD(v3) = this;
    LODWORD(v3) = this;
    v2 = sub_102DBB80(this);
    sub_1010DD80(v2 + 236, v3, 0.0);
  }
}
