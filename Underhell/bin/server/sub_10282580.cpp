void __thiscall sub_10282580(int this)
{
  int v2; // eax
  char *v3; // eax
  int v4; // eax
  char String[128]; // [esp+Ch] [ebp-80h] BYREF

  sub_100EAB80((_DWORD *)this, 32);
  v2 = sub_10282310();
  *(_DWORD *)(this + 800) = v2;
  if ( v2 )
  {
    do
    {
      v3 = (char *)exception::what(*(exception **)(this + 800));
      sub_104299C0(String, v3, 0x80u);
      _strlwr(String);
      if ( strstr(String, (const char *)(this + 808)) )
        break;
      v4 = sub_100019E0(*(_DWORD **)(this + 800));
      *(_DWORD *)(this + 800) = v4;
    }
    while ( v4 );
  }
  if ( *(_DWORD *)(this + 800) )
  {
    sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
  }
  else
  {
    DevMsg("Couldn't find temp entity '%s'\n", (const char *)(this + 808));
    sub_1025FAC0(this);
  }
}
