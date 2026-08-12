void __thiscall sub_102079B0(_DWORD *this, int a2, int a3, int a4, float a5)
{
  __int64 v6; // [esp-8h] [ebp-14h]

  sub_100DA450(this, a2, a3, a4, a5);
  if ( a2 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2) )
    {
      HIDWORD(v6) = this;
      LODWORD(v6) = this;
      sub_1010DD80(this + 374, v6, 0.0);
    }
  }
}
