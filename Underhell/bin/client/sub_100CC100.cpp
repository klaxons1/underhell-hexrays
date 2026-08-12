void __thiscall sub_100CC100(void (__thiscall ***this)(void *, char *, const char *))
{
  int v2; // edi
  int v3; // ebx
  const char *v4; // eax
  char Buffer[32]; // [esp+8h] [ebp-24h] BYREF
  unsigned int v6; // [esp+28h] [ebp-4h]

  v2 = 0;
  if ( (int)this[15] > 0 )
  {
    v6 = 0;
    do
    {
      v3 = v2 + 1;
      sub_10228370(Buffer, 0x20u, "chat_%d", v2 + 1);
      if ( v2 >= (int)this[56] )
        v4 = " ";
      else
        v4 = (const char *)sub_1022CF00(&this[53][v6 / 4]);
      (**this)(this, Buffer, v4);
      v6 += 16;
      ++v2;
    }
    while ( v3 < (int)this[15] );
  }
}
