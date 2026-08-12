void __thiscall sub_103E4420(unsigned int *this, int a2)
{
  __int64 v3; // [esp-4h] [ebp-18h]

  if ( a2 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2) )
  {
    if ( this[6] != -1 && off_1061BE18[4 * (this[6] & 0xFFF) + 2] == this[6] >> 12 )
    {
      if ( off_1061BE18[4 * (this[6] & 0xFFF) + 1] )
        (*(void (__thiscall **)(unsigned int *, _DWORD))(*this + 44))(this, 0);
    }
    sub_103E3BB0(this + 6, a2);
    HIDWORD(v3) = this - 280;
    LODWORD(v3) = a2;
    sub_1010DD80(this + 7, v3, 0.0);
  }
}
