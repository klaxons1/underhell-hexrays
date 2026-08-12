double sub_100F6040()
{
  double v0; // st7
  float v2; // [esp+0h] [ebp-8h]
  float v3; // [esp+4h] [ebp-4h]

  v2 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_10436254 + 160))(dword_10436254);
  v3 = *(float *)(dword_10435E64 + 44);
  v0 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_10436254 + 152))(dword_10436254)
     + *((float *)off_103DC81C + 4) * v3;
  if ( v2 >= v0 )
    return *((float *)off_103DC81C + 3);
  else
    return v2 + *((float *)off_103DC81C + 3) - v0;
}
