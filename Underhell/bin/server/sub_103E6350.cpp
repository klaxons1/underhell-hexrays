void __thiscall sub_103E6350(unsigned int *this, int a2)
{
  unsigned int v3; // eax
  void *v4; // ecx
  unsigned int v5; // eax
  void *v6; // ecx
  __int64 v7; // [esp-4h] [ebp-18h]

  if ( a2 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2) )
  {
    if ( this[111] != -1
      && off_1061BE18[4 * (this[111] & 0xFFF) + 2] == this[111] >> 12
      && off_1061BE18[4 * (this[111] & 0xFFF) + 1] )
    {
      (*(void (__thiscall **)(unsigned int *, _DWORD))(*this + 44))(this, 0);
    }
    sub_103E5D70(this + 111, a2);
    HIDWORD(v7) = this - 280;
    LODWORD(v7) = a2;
    sub_1010DD80(this + 119, v7, 0.0);
    v3 = this[111];
    if ( v3 == -1 || off_1061BE18[4 * (this[111] & 0xFFF) + 2] != v3 >> 12 )
      v4 = 0;
    else
      v4 = (void *)off_1061BE18[4 * (this[111] & 0xFFF) + 1];
    sub_101E3110(v4, 0xEu, 0, 2u);
    v5 = this[111];
    if ( v5 == -1 || off_1061BE18[4 * (this[111] & 0xFFF) + 2] != v5 >> 12 )
      v6 = 0;
    else
      v6 = (void *)off_1061BE18[4 * (this[111] & 0xFFF) + 1];
    sub_101E3110(v6, 0xEu, 0xAu, 8u);
    (*(void (__thiscall **)(unsigned int *))(this[1] + 256))(this + 1);
  }
}
