char __thiscall sub_100BCFA0(int this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // ecx
  int v5; // ecx

  v2 = *(_DWORD *)(this + 260);
  if ( v2 == -1 )
  {
    v3 = *(_DWORD *)(this + 268);
    *(_BYTE *)(this + 256) = 0;
    v4 = *(_DWORD *)(v3 + 5296);
    *(float *)(this + 252) = -100.0;
    *(_DWORD *)(this + 260) = v4;
    *(_BYTE *)(this + 264) = *(_BYTE *)(v3 + 5287);
  }
  else if ( *((float *)off_103DC81C + 3) - *(float *)(this + 252) >= 3.0 )
  {
    v3 = *(_DWORD *)(this + 268);
    if ( v2 == *(_DWORD *)(v3 + 5296) && (LOBYTE(v3) = *(_BYTE *)(v3 + 5287), (_BYTE)v3 == *(_BYTE *)(this + 264)) )
    {
      v5 = *(_DWORD *)(this + 268);
      *(_BYTE *)(this + 256) = 0;
      *(_BYTE *)(this + 264) = *(_BYTE *)(v5 + 5287);
    }
    else
    {
      *(float *)(this + 252) = *((float *)off_103DC81C + 3);
      *(_BYTE *)(this + 256) = 1;
      LOBYTE(v3) = sub_102366F0(255);
      *(_BYTE *)(this + 264) = *(_BYTE *)(*(_DWORD *)(this + 268) + 5287);
    }
  }
  else
  {
    *(_BYTE *)(this + 256) = 1;
    LOBYTE(v3) = sub_102366F0(255);
  }
  return v3;
}
