void *__thiscall sub_10093970(int this, char *String1, int a3)
{
  unsigned int v4; // eax

  if ( !_stricmp(String1, "!speechtarget") )
  {
    v4 = *(_DWORD *)(this + 4372);
    if ( v4 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4372) & 0xFFF) + 2] != v4 >> 12 )
      return 0;
    else
      return (void *)off_1061BE18[4 * (*(_DWORD *)(this + 4372) & 0xFFF) + 1];
  }
  else if ( !_stricmp(String1, "!friend") )
  {
    return (void *)sub_10093460((float *)this, 2);
  }
  else
  {
    return sub_10021640((void *)this, String1, a3);
  }
}
