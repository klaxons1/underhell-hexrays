void __thiscall sub_10272BB0(_DWORD **this)
{
  int v2; // edi
  _DWORD *v3; // esi
  int v4; // ebp
  char v5; // al
  int (__thiscall ***v6)(void *, _BYTE *, int *); // ecx
  int v7; // eax

  if ( this[54] )
  {
    v2 = 0;
    v3 = this + 52;
    v4 = 2;
    do
    {
      if ( *v3 && (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)*v3 + 128))(*v3) )
      {
        v5 = (*(int (__thiscall **)(_DWORD *))(*this[54] + 776))(this[54]);
        v6 = (int (__thiscall ***)(void *, _BYTE *, int *))*v3;
        if ( v5 )
          v7 = sub_102374F0(v6);
        else
          v7 = sub_102374C0((int (__thiscall ***)(void *, int *, _BYTE *))v6);
        v2 += v7;
      }
      ++v3;
      --v4;
    }
    while ( v4 );
    (*(void (__thiscall **)(_DWORD *, int))(*this[54] + 808))(this[54], v2);
  }
}
