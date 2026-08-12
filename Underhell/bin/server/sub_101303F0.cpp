void __thiscall sub_101303F0(int *this, int a2, int a3)
{
  int v4; // eax

  while ( 1 )
  {
    if ( byte_106AEF70 )
    {
      byte_106AEF70 = 0;
    }
    else
    {
      v4 = (*(int (__thiscall **)(int, int, char *, int))(*(_DWORD *)dword_106B31D0 + 224))(
             dword_106B31D0,
             dword_106AEE68,
             &Buffer,
             1204);
      ++dword_106AEE64;
      dword_106AEE68 = v4;
    }
    if ( !Buffer )
      break;
    if ( _stricmp(&Buffer, "effect") )
    {
      Warning("CEnvEffectsScript: Unknown entry type '%s'\n", &Buffer);
      return;
    }
    sub_1012F830(this);
  }
}
