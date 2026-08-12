char __thiscall sub_100F8A10(_DWORD *this)
{
  int v2; // eax
  int v3; // edi
  int v4; // ebx

  (*(void (__thiscall **)(_DWORD *))(*this + 36))(this);
  v2 = this[78] >> 22;
  if ( (this[78] & 0x400000) == 0 )
  {
    v3 = 0;
    v4 = 0;
    LOBYTE(v2) = sub_100F7A60((int)this, -1, (void (__thiscall *)(char *))sub_100F7500, 0, 0, 0);
    if ( (_BYTE)v2 )
    {
      if ( (int)this[52] > 0 )
      {
        do
        {
          LOBYTE(v2) = sub_100F7A60(
                         (int)this,
                         v3,
                         *(void (__thiscall **)(char *))(this[49] + v4),
                         *(_DWORD *)(v4 + this[49] + 4),
                         *(_DWORD *)(v4 + this[49] + 8),
                         *(_DWORD *)(v4 + this[49] + 12));
          if ( !(_BYTE)v2 )
            break;
          ++v3;
          v4 += 32;
        }
        while ( v3 < this[52] );
      }
    }
  }
  return v2;
}
