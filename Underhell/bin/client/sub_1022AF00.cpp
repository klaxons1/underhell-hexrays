void __thiscall sub_1022AF00(void *this)
{
  int v2; // eax

  if ( this )
  {
    sub_1022B2F0();
    v2 = KeyValuesSystem();
    (*(void (__thiscall **)(int, void *))(*(_DWORD *)v2 + 8))(v2, this);
  }
}
