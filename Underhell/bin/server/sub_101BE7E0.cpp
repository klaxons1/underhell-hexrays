void __thiscall sub_101BE7E0(unsigned int *this, int a2)
{
  unsigned int *v3; // edi
  unsigned int v4; // esi
  unsigned int *v5; // eax
  int *v6; // ecx
  __int64 v7; // [esp-8h] [ebp-18h]

  sub_100C9EC0(this, a2);
  v3 = this + 62;
  if ( (this[62] & 1) != 0 && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2) )
  {
    HIDWORD(v7) = this;
    LODWORD(v7) = this;
    sub_1010DD80(this + 553, v7, 0.0);
    v4 = *v3 & 0xFFFFFFFE;
    if ( *v3 != v4 )
    {
      v5 = v3 - 62;
      if ( *((_BYTE *)v3 - 164) )
      {
        *((_BYTE *)v5 + 88) |= 1u;
        *v3 = v4;
      }
      else
      {
        v6 = (int *)v5[6];
        if ( v6 )
          sub_100194B0(v6, 248);
        *v3 = v4;
      }
    }
  }
}
