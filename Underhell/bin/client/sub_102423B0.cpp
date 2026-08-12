unsigned int *__thiscall sub_102423B0(unsigned int *this, char *String1)
{
  unsigned int *result; // eax
  unsigned int *v4; // eax
  unsigned int *v5; // edi
  bool v6; // zf
  const char *v7; // eax
  _DWORD v8[2]; // [esp+Ch] [ebp-8h] BYREF

  result = (unsigned int *)sub_102418C0((int)this, String1);
  if ( !result )
  {
    v4 = sub_1022FDF0(this + 9, 0x20u);
    if ( v4 )
    {
      *v4 = 0;
      v4[1] = 0;
      v4[2] = 0;
      v4[3] = 0;
      v4[4] = 0;
      v4[6] = 0;
      v4[7] = 0;
      *((_BYTE *)v4 + 20) = 0;
      v5 = v4;
      *v4 = 0;
      v4[1] = 0;
      v4[2] = 0;
      v4[3] = 0;
      v4[4] = 0;
      v4[6] = 0;
      v4[7] = 0;
      *((_BYTE *)v4 + 20) = 0;
    }
    else
    {
      v5 = 0;
    }
    v6 = _strnicmp(String1, "vgui::", 6u) == 0;
    v7 = String1 + 6;
    if ( !v6 )
      v7 = String1;
    v8[0] = sub_10001FD0(v7);
    v8[1] = v5;
    sub_102419E0((int)this, (int)v8);
    return v5;
  }
  return result;
}
