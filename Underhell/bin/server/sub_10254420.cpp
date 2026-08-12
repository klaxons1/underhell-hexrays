void __thiscall sub_10254420(_BYTE *this, int a2)
{
  if ( !this[1092] )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2) )
    {
      this[1092] = 1;
      (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_106B31D0 + 144))(dword_106B31D0, "autosave\n");
    }
  }
}
