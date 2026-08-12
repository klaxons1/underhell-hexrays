char __thiscall sub_10083810(int this, char a2, char a3)
{
  char v4; // bl
  char v6; // al
  char *v7; // [esp-10h] [ebp-118h]
  char Buffer[256]; // [esp+8h] [ebp-100h] BYREF

  if ( (*(_BYTE *)(*(_DWORD *)(this + 4) + 2716) & 0x20) == 0 || 0.0 == *(float *)(this + 76) )
  {
    v4 = 0;
  }
  else
  {
    v4 = 1;
    if ( *(float *)(dword_106B31C8 + 12) > (double)*(float *)(this + 84) )
    {
      if ( a2 )
      {
LABEL_5:
        sub_10083640((_DWORD *)this, 11, 0);
        return 0;
      }
      if ( !*(_DWORD *)(dword_106934A4 + 48) )
        goto LABEL_9;
LABEL_8:
      v7 = sub_1001E280(Buffer, "[Nav] %s", "Nav failed\n");
      sub_10029660(*(_DWORD **)(this + 4), (int)v7);
LABEL_9:
      sub_1007E850(this);
      *(_WORD *)(this + 16) = 257;
      return 0;
    }
    if ( *(float *)(dword_106B31C8 + 12) < (double)*(float *)(this + 88) )
      return 0;
  }
  v6 = sub_10080EC0(this);
  if ( a3 )
    goto LABEL_15;
  if ( !v6 )
  {
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 1676))(*(_DWORD *)(this + 4)) )
    {
LABEL_19:
      if ( 0.0 == *(float *)(this + 76) )
      {
        if ( a2 )
          goto LABEL_5;
        if ( !*(_DWORD *)(dword_106934A4 + 48) )
          goto LABEL_9;
        goto LABEL_8;
      }
      if ( !v4 )
      {
        *(_DWORD *)(*(_DWORD *)(this + 4) + 2716) |= 0x20u;
        *(float *)(this + 84) = *(float *)(dword_106B31C8 + 12) + *(float *)(this + 76);
      }
      *(float *)(this + 88) = *(float *)(dword_106B31C8 + 12) + *(float *)(this + 80);
      return 0;
    }
    *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(this + 4) + 2596) + 16) = 1;
    v6 = sub_10080EC0(this);
LABEL_15:
    if ( v6 )
      goto LABEL_16;
    goto LABEL_19;
  }
LABEL_16:
  *(_DWORD *)(*(_DWORD *)(this + 4) + 2716) &= ~0x20u;
  if ( a2 )
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 12))(this, 0);
  return 1;
}
