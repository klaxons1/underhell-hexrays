char __thiscall sub_10083640(_DWORD *this, int a2, int a3)
{
  char *v4; // eax
  _DWORD *v5; // ecx
  int v6; // eax
  unsigned int v7; // eax
  int v8; // ecx
  char **v9; // edi
  unsigned int *v10; // ecx
  char Buffer[256]; // [esp+18h] [ebp-100h] BYREF

  if ( (*(unsigned __int8 (__thiscall **)(_DWORD, int))(*(_DWORD *)this[1] + 1680))(this[1], a3) )
  {
    if ( *(_DWORD *)(dword_106934A4 + 48) )
    {
      v4 = sub_1001E280(Buffer, "[Nav] %s", "Nav failed\n");
      sub_10029660((_DWORD *)this[1], (int)v4);
    }
    if ( (_BYTE)a3 )
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)this[1] + 1760))(this[1]);
    sub_1007E850((int)this);
    v5 = (_DWORD *)this[1];
    *((_WORD *)this + 8) = 257;
    v6 = sub_10021B60(v5);
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)this[1] + 1416))(this[1], v6);
    LOBYTE(v7) = (*(int (__thiscall **)(_DWORD *, int))(*this + 8))(this, a2);
  }
  else
  {
    ++this[37];
    v8 = this[1];
    *((float *)this + 38) = *(float *)(dword_106B31C8 + 12);
    LOBYTE(v7) = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 1684))(v8);
    if ( (_BYTE)v7 )
    {
      if ( (_BYTE)a3 )
      {
        *((float *)this + 36) = 3.4028235e38;
        v7 = sub_1001E3C0(this);
        v9 = (char **)v7;
        if ( v7 )
        {
          v7 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
                 dword_106B31D0,
                 *(_DWORD *)(v7 + 24));
          if ( v7 )
          {
            LOBYTE(v7) = (*((int (__thiscall **)(char **))*v9 + 80))(v9);
            if ( !(_BYTE)v7 && v9[23] != "func_tracktrain" )
            {
              LOBYTE(v7) = sub_100D6240("func_tracktrain");
              if ( !(_BYTE)v7 )
              {
                v7 = sub_101CABB0(this[1], (int)v9, 1, 10.0);
                if ( v7 )
                  this[37] = 0;
              }
            }
          }
        }
        if ( (int)this[37] > 0 )
        {
          LOBYTE(v7) = sub_10082B40(this);
          if ( (_BYTE)v7 )
            this[37] = 0;
        }
      }
      else
      {
        v7 = *(_DWORD *)(this[6] + 16);
        if ( v7 != -1 )
        {
          v10 = (unsigned int *)&off_1061BE18[4 * (*(_DWORD *)(this[6] + 16) & 0xFFF) + 1];
          v7 >>= 12;
          if ( off_1061BE18[4 * (*(_DWORD *)(this[6] + 16) & 0xFFF) + 2] == v7 )
          {
            v7 = *v10;
            if ( *v10 )
            {
              v7 = sub_101CABB0(this[1], v7, 1, 10.0);
              if ( v7 )
                this[37] = 0;
            }
          }
        }
      }
    }
  }
  return v7;
}
