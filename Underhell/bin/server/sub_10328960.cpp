void __thiscall sub_10328960(_BYTE *this, int a2)
{
  const char *v3; // eax
  const char *v4; // [esp+4h] [ebp-108h]
  char Buffer[256]; // [esp+Ch] [ebp-100h] BYREF

  if ( a2 )
  {
    switch ( a2 )
    {
      case 1:
        sub_10328900(this, (int)"Scan");
        break;
      case 2:
        sub_10328900(this, (int)"Proceed");
        break;
      case 3:
        sub_10328900(this, (int)"Curious");
        break;
    }
  }
  else
  {
    Buffer[0] = 0;
    v3 = (const char *)(*(int (__thiscall **)(_BYTE *, const char *))(*(_DWORD *)this + 2228))(this, "Attention");
    sub_1001E280(Buffer, "%s.%s", v3, v4);
    this[3788] = 1;
    sub_1023C380(this, (int)Buffer, 0.0, 0);
  }
}
