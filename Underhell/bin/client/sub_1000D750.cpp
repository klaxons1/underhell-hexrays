void __thiscall sub_1000D750(_DWORD *this)
{
  unsigned int v2; // eax
  _DWORD *v3; // ecx
  _DWORD *v4; // edi
  int v5; // eax
  int v6; // edx
  float *v7; // eax
  float *v8; // eax

  if ( *((_BYTE *)this + 2068) )
  {
    v2 = this[490];
    if ( v2 != -1 )
    {
      v3 = (_DWORD *)((char *)off_103DCD74 + 16 * (this[490] & 0xFFF) + 4);
      if ( *((_DWORD *)off_103DCD74 + 4 * (this[490] & 0xFFF) + 2) == v2 >> 12 )
      {
        v4 = (_DWORD *)*v3;
        if ( *v3 )
        {
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*v4 + 512))(*v3)
            && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v4 + 504))(v4)
            && *((_BYTE *)this + 1984)
            && *((float *)off_103DC81C + 3) >= (double)*((float *)this + 493) )
          {
            if ( (v4[1012] & 0x801) != 0 && (int)this[510] > 0 )
            {
              *((_BYTE *)this + 1984) = 0;
            }
            else
            {
              v5 = sub_1000A5F0(v4, this[508]);
              v6 = *this;
              if ( v5 > 0 )
              {
                if ( this[510] >= (*(int (__thiscall **)(_DWORD *))(v6 + 1128))(this) )
                {
                  (*(void (__thiscall **)(_DWORD *))(*this + 968))(this);
                  v7 = (float *)off_103DC81C;
                  if ( this[493] != *((_DWORD *)off_103DC81C + 3) )
                  {
                    *((float *)this + 493) = *((float *)off_103DC81C + 3);
                    v7 = (float *)off_103DC81C;
                  }
                  if ( this[494] != *((_DWORD *)v7 + 3) )
                    *((float *)this + 494) = v7[3];
                }
                else
                {
                  ++this[510];
                  sub_1000A590(v4, 1, this[508]);
                  (*(void (__thiscall **)(_DWORD *))(*this + 976))(this);
                }
              }
              else
              {
                (*(void (__thiscall **)(_DWORD *))(v6 + 968))(this);
              }
            }
          }
        }
      }
    }
  }
  else if ( *((_BYTE *)this + 1984) && *((float *)off_103DC81C + 3) >= (double)*((float *)this + 493) )
  {
    (*(void (__thiscall **)(_DWORD *))(*this + 968))(this);
    v8 = (float *)off_103DC81C;
    if ( this[493] != *((_DWORD *)off_103DC81C + 3) )
    {
      *((float *)this + 493) = *((float *)off_103DC81C + 3);
      v8 = (float *)off_103DC81C;
    }
    if ( this[494] != *((_DWORD *)v8 + 3) )
      *((float *)this + 494) = v8[3];
    *((_BYTE *)this + 1984) = 0;
  }
}
