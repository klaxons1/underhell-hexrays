int __thiscall sub_1012F830(int *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  double v7; // st7
  char Destination[128]; // [esp+0h] [ebp-1B0h] BYREF
  int v10; // [esp+80h] [ebp-130h]
  int v11; // [esp+84h] [ebp-12Ch]
  int v12; // [esp+88h] [ebp-128h]
  int v13; // [esp+8Ch] [ebp-124h]
  int v14; // [esp+90h] [ebp-120h] BYREF
  int v15; // [esp+94h] [ebp-11Ch] BYREF
  int v16; // [esp+98h] [ebp-118h] BYREF
  int v17; // [esp+9Ch] [ebp-114h] BYREF
  char v18[128]; // [esp+A0h] [ebp-110h] BYREF
  char v19[128]; // [esp+120h] [ebp-90h] BYREF
  float v20; // [esp+1A0h] [ebp-10h]
  float v21; // [esp+1A4h] [ebp-Ch]
  float v22; // [esp+1A8h] [ebp-8h]
  __int16 v23; // [esp+1ACh] [ebp-4h]

  v20 = 1.0;
  v21 = 1.0;
  v10 = -1;
  v11 = -1;
  v22 = -1.0;
  v12 = 0;
  v13 = 5;
  v14 = 255;
  v15 = 0;
  v16 = 0;
  v17 = 255;
  v23 = 0;
  if ( byte_106AEF70 )
  {
    byte_106AEF70 = 0;
  }
  else
  {
    v2 = (*(int (__thiscall **)(int, int, char *, int))(*(_DWORD *)dword_106B31D0 + 224))(
           dword_106B31D0,
           dword_106AEE68,
           &Buffer,
           1204);
    ++dword_106AEE64;
    dword_106AEE68 = v2;
  }
  sub_104299C0(Destination, &Buffer, 0x80u);
  do
  {
    if ( byte_106AEF70 )
    {
      byte_106AEF70 = 0;
    }
    else
    {
      v3 = (*(int (__thiscall **)(int, int, char *, int))(*(_DWORD *)dword_106B31D0 + 224))(
             dword_106B31D0,
             dword_106AEE68,
             &Buffer,
             1204);
      ++dword_106AEE64;
      dword_106AEE68 = v3;
    }
    if ( !_stricmp(&Buffer, "effect") )
    {
      byte_106AEF70 = 1;
      return sub_1012F620(this + 281, this[284], (int)Destination);
    }
  }
  while ( _stricmp(&Buffer, "{") );
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
    if ( !_stricmp(&Buffer, "}") )
      break;
    if ( !_stricmp(&Buffer, "type") )
    {
      if ( byte_106AEF70 )
      {
        byte_106AEF70 = 0;
      }
      else
      {
        v5 = (*(int (__thiscall **)(int, int, char *, int))(*(_DWORD *)dword_106B31D0 + 224))(
               dword_106B31D0,
               dword_106AEE68,
               &Buffer,
               1204);
        ++dword_106AEE64;
        dword_106AEE68 = v5;
      }
      if ( !_stricmp(&Buffer, "trail") )
      {
        v12 = 1;
      }
      else if ( !_stricmp(&Buffer, "sprite") )
      {
        v12 = 2;
      }
    }
    else if ( !_stricmp(&Buffer, "material") )
    {
      if ( byte_106AEF70 )
      {
        byte_106AEF70 = 0;
      }
      else
      {
        v6 = (*(int (__thiscall **)(int, int, char *, int))(*(_DWORD *)dword_106B31D0 + 224))(
               dword_106B31D0,
               dword_106AEE68,
               &Buffer,
               1204);
        ++dword_106AEE64;
        dword_106AEE68 = v6;
      }
      sub_104299C0(v19, &Buffer, 0x80u);
      sub_100E8220((int)this, v19);
    }
    else if ( !_stricmp(&Buffer, "attachment") )
    {
      sub_1012F230();
      sub_104299C0(v18, &Buffer, 0x80u);
    }
    else if ( !_stricmp(&Buffer, "color") )
    {
      sub_1012F230();
      sscanf(&Buffer, "%i %i %i %i", &v14, &v15, &v16, &v17);
    }
    else if ( !_stricmp(&Buffer, "scale") )
    {
      sub_1012F230();
      v20 = atof(&Buffer);
    }
    else if ( !_stricmp(&Buffer, "texturescale") )
    {
      sub_1012F230();
      v7 = atof(&Buffer);
      if ( v7 <= 0.0 )
        v22 = 0.0;
      else
        v22 = 1.0 / v7;
    }
    else if ( !_stricmp(&Buffer, "fadetime") )
    {
      sub_1012F230();
      v21 = atof(&Buffer);
    }
    else if ( !_stricmp(&Buffer, "stopfollowonkill") )
    {
      sub_1012F230();
      LOBYTE(v23) = atoi(&Buffer) != 0;
    }
  }
  return sub_1012F620(this + 281, this[284], (int)Destination);
}
