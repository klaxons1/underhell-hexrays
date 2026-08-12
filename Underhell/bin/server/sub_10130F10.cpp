void __thiscall sub_10130F10(_DWORD *this, int a2)
{
  __int64 v3; // [esp-8h] [ebp-10h]

  if ( sub_10130610(this) )
  {
    if ( (this[62] & 8) != 0 && !sub_10130770((int)this) || (this[62] & 0x10) != 0 && sub_10130690((int)this) )
    {
      HIDWORD(v3) = this;
      LODWORD(v3) = this;
      sub_1010DD80(this + 224, v3, 0.0);
    }
    else
    {
      sub_10130A30((int)this, flt_10689730, flt_10689734, flt_10689738, flt_106F1CB4, flt_106F1CB8, flt_106F1CBC);
    }
  }
}
