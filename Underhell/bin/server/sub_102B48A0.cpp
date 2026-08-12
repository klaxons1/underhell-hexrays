void __thiscall sub_102B48A0(unsigned int *this, int a2)
{
  unsigned int *v2; // esi
  unsigned int v3; // edi
  unsigned int *v4; // eax
  int *v5; // ecx

  v2 = this + 62;
  if ( (this[62] & 0x40) != 0 )
  {
    (*(void (__thiscall **)(unsigned int *))(*this + 2260))(this);
    v3 = *v2 & 0xFFFFFFBF;
    if ( *v2 != v3 )
    {
      v4 = v2 - 62;
      if ( *((_BYTE *)v2 - 164) )
      {
        *((_BYTE *)v4 + 88) |= 1u;
        *v2 = v3;
      }
      else
      {
        v5 = (int *)v4[6];
        if ( v5 )
          sub_100194B0(v5, 248);
        *v2 = v3;
      }
    }
  }
}
