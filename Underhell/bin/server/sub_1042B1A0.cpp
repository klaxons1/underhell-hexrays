void __thiscall sub_1042B1A0(void *this)
{
  int v2; // eax

  if ( this )
  {
    sub_1042B290();
    v2 = KeyValuesSystem();
    (*(void (__thiscall **)(int, void *))(*(_DWORD *)v2 + 8))(v2, this);
  }
}
