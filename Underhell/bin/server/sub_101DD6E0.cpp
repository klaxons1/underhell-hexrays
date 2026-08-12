void __thiscall sub_101DD6E0(_DWORD *this, int a2, int a3, int a4, int a5)
{
  __int64 v6; // [esp-8h] [ebp-14h]

  if ( a2 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2) )
  {
    if ( (this[62] & 0x80000) != 0 )
    {
      HIDWORD(v6) = this;
      LODWORD(v6) = this;
      sub_1010DD80(this + 295, v6, 0.0);
    }
    if ( (this[62] & 0x2000) == 0 )
      (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)a2 + 1472))(a2, this, 1);
  }
}
