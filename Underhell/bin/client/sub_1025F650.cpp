int __thiscall sub_1025F650(void *this, char *String1)
{
  if ( !_stricmp(String1, "ButtonClicked") )
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 1136))(this);
  return sub_10237610(this, (int)String1);
}
