unsigned int *__thiscall sub_10242450(unsigned int *this, char *String1)
{
  unsigned int *result; // eax
  unsigned int *v4; // eax
  unsigned int *v5; // edi
  bool v6; // zf
  const char *v7; // eax
  _DWORD v8[2]; // [esp+Ch] [ebp-8h] BYREF

  result = (unsigned int *)sub_10241920((int)this, String1);
  if ( !result )
  {
    v4 = sub_1022FDF0(this + 9, 0x48u);
    if ( v4 )
    {
      *v4 = 0;
      v4[1] = 0;
      v4[2] = 0;
      v4[3] = 0;
      v4[4] = 0;
      v4[7] = 0;
      v4[8] = 0;
      v4[9] = 0;
      v4[10] = 0;
      v4[11] = 0;
      v4[12] = 0;
      v4[13] = 0;
      v4[14] = 0;
      v4[15] = 0;
      v4[16] = 0;
      v4[6] = 0;
      v4[17] = 0;
      *((_BYTE *)v4 + 20) = 0;
      *v4 = 0;
      v4[1] = 0;
      v4[2] = 0;
      v4[3] = 0;
      v4[4] = 0;
      v4[7] = 0;
      v4[8] = 0;
      v4[9] = 0;
      v4[10] = 0;
      v4[11] = 0;
      v4[12] = 0;
      v4[13] = 0;
      v4[14] = 0;
      v4[15] = 0;
      v4[16] = 0;
      v5 = v4;
      v4[6] = 0;
      v4[17] = 0;
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
    sub_10241A40((int)this, (int)v8);
    return v5;
  }
  return result;
}
