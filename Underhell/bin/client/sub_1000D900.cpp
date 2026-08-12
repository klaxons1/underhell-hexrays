void __thiscall sub_1000D900(_DWORD *this)
{
  unsigned int v2; // eax
  _DWORD *v3; // ecx
  _DWORD *v4; // edi
  int v5; // ebx
  int v6; // eax
  int v7; // ecx
  int v8; // ebx
  int v9; // eax
  int v10; // ecx

  v2 = this[490];
  if ( v2 != -1 )
  {
    v3 = (_DWORD *)((char *)off_103DCD74 + 16 * (this[490] & 0xFFF) + 4);
    if ( v3[1] == v2 >> 12 )
    {
      v4 = (_DWORD *)*v3;
      if ( *v3 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*v4 + 512))(*v3) )
        {
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 1184))(this) )
          {
            v5 = (*(int (__thiscall **)(_DWORD *))(*this + 1128))(this) - this[510];
            if ( v5 >= sub_1000A5F0(v4, this[508]) )
              v6 = sub_1000A5F0(v4, this[508]);
            else
              v6 = (*(int (__thiscall **)(_DWORD *))(*this + 1128))(this) - this[510];
            v7 = v6 + this[510];
            if ( this[510] != v7 )
              this[510] = v7;
            sub_1000A590(v4, v6, this[508]);
          }
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 1188))(this) )
          {
            v8 = (*(int (__thiscall **)(_DWORD *))(*this + 1132))(this) - this[511];
            if ( v8 >= sub_1000A5F0(v4, this[509]) )
              v9 = sub_1000A5F0(v4, this[509]);
            else
              v9 = (*(int (__thiscall **)(_DWORD *))(*this + 1132))(this) - this[511];
            v10 = v9 + this[511];
            if ( this[511] != v10 )
              this[511] = v10;
            sub_1000A590(v4, v9, this[509]);
          }
          if ( *((_BYTE *)this + 2068) )
            *((_BYTE *)this + 1984) = 0;
        }
      }
    }
  }
}
