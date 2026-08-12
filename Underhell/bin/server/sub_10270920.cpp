void __thiscall sub_10270920(unsigned int *this, int a2)
{
  __int64 v3; // [esp-4h] [ebp-18h]

  if ( a2 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2) )
  {
    if ( this[1] != -1 && off_1061BE18[4 * (this[1] & 0xFFF) + 2] == this[1] >> 12 )
    {
      if ( off_1061BE18[4 * (this[1] & 0xFFF) + 1] )
        (*(void (__thiscall **)(unsigned int *, _DWORD))(*this + 44))(this, 0);
    }
    sub_1026FBC0(this + 1, a2);
    HIDWORD(v3) = this - 394;
    LODWORD(v3) = a2;
    sub_1010DD80(this + 135, v3, 0.0);
    (*(void (__thiscall **)(unsigned int *))(this[25] + 256))(this + 25);
  }
}
