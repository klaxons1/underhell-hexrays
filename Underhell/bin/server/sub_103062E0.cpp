void __thiscall sub_103062E0(void *this)
{
  int v2; // eax
  unsigned __int16 *v3; // eax
  int v4[3]; // [esp+18h] [ebp-18h] BYREF
  float v5[3]; // [esp+24h] [ebp-Ch] BYREF

  if ( (*((_BYTE *)this + 192) & 0x20) == 0 )
  {
    (*(void (__thiscall **)(void *, _DWORD, _DWORD, float *))(*(_DWORD *)this + 528))(this, 0, 0, v5);
    v2 = *((_DWORD *)this + 63) >> 11;
    *(float *)v4 = v5[0] * 16.0;
    *(float *)&v4[1] = v5[1] * 16.0;
    *(float *)&v4[2] = 16.0 * v5[2];
    if ( (v2 & 1) != 0 )
      sub_100DAE60((int)this);
    if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
      sub_100DAE60((int)this);
    v3 = sub_10166A90((int)"models/antlion_grub_squashed.mdl", (int)this + 580, (float *)this + 176, (int)v4, 0.0, 0);
    if ( v3 )
      sub_100EAB80(v3, 16);
  }
}
