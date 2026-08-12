void __thiscall sub_10065600(int this, unsigned __int8 a2, unsigned __int8 a3, char a4)
{
  char v5; // al
  char *v6; // esi
  char *v7; // eax
  double v8; // st7
  double v9; // st7

  if ( !a2 )
  {
    *(_BYTE *)(this + 12) = 0;
    *(_BYTE *)(this + 32) = 0;
    *(_BYTE *)(this + 52) = 0;
    *(float *)(this + 6892) = 0.0;
    return;
  }
  v5 = a4;
  if ( (a4 & 1) != 0 )
  {
    if ( *(_BYTE *)(this + 12) && *(_DWORD *)(this + 4) == a2 )
      *(_BYTE *)(this + 12) = 0;
    if ( *(_BYTE *)(this + 32) && *(_DWORD *)(this + 24) == a2 )
      *(_BYTE *)(this + 32) = 0;
    if ( *(_BYTE *)(this + 52) )
    {
      if ( *(_DWORD *)(this + 44) == a2 )
        *(_BYTE *)(this + 52) = 0;
    }
  }
  else
  {
    v6 = 0;
    if ( (a4 & 4) != 0 )
    {
      v6 = sub_10064D20((char *)this, a2);
      v5 = a4;
    }
    if ( (v5 & 0x10) != 0 )
    {
      v6 = sub_10064D20((char *)this, a2);
      if ( v6 )
        return;
      v5 = a4;
    }
    if ( (v5 & 8) != 0 )
    {
      v7 = sub_10064D20((char *)this, a2);
      if ( v7 )
        *((float *)v7 + 4) = (double)a3 * 0.0099999998;
    }
    else
    {
      if ( v6 || (v6 = sub_10064D50((char *)this, 1), v5 = a4, v6) )
      {
        *((_DWORD *)v6 + 1) = a2;
        *((_DWORD *)v6 + 2) = 1;
        v8 = *((float *)off_103DC81C + 3);
        v6[12] = 1;
        *(float *)v6 = v8;
        v6[13] = v5;
        if ( (v5 & 0x40) != 0 )
          v9 = (double)a3 * 0.0099999998;
        else
          v9 = 1.0;
        *((float *)v6 + 4) = v9;
      }
      if ( (v5 & 0x20) != 0 )
        *((float *)v6 + 4) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                               dword_10413198,
                               0.1,
                               1.0);
    }
  }
}
