char *__thiscall sub_10061200(_BYTE *this, int *a2)
{
  int v3; // eax

  if ( (this[1248] & 2) != 0 )
  {
    *a2 = dword_103DBBB4;
    return (char *)&unk_103DBC00;
  }
  else
  {
    v3 = (unsigned __int8)this[1920];
    if ( v3 == 255 )
      v3 = *(_DWORD *)(dword_1040E57C + 48);
    if ( v3 >= 8 )
      v3 = 7;
    *a2 = v3;
    return (char *)&unk_1040EB00 + 96 * v3;
  }
}
