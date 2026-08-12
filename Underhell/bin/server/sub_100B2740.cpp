void __thiscall sub_100B2740(void *this, int a2, int a3)
{
  int v4; // esi
  _DWORD *v5; // eax

  if ( a3 != -1 )
  {
    v4 = 1 << (a3 & 0x1F);
    if ( (v4 & sub_100B2250((int)this, a2)[1]) == 0 )
      DevMsg("ERROR! Vacating an empty slot!\n");
    v5 = sub_100B2250((int)this, a2);
    v5[1] &= ~v4;
  }
}
