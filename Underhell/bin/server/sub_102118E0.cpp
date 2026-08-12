void __thiscall sub_102118E0(_DWORD *this, _DWORD *a2)
{
  __int64 v3; // [esp-8h] [ebp-10h]

  if ( this[418] )
  {
    HIDWORD(v3) = this;
    LODWORD(v3) = *a2;
    sub_1010DD80(this + 394, v3, 0.0);
    sub_10210260(this);
  }
}
