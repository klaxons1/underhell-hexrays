void __thiscall sub_101B0DF0(_DWORD *this, int a2)
{
  int v3; // eax

  if ( this[16] )
  {
    v3 = sub_1023DBA0();
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 40))(v3, this[16]);
    this[16] = 0;
  }
}
