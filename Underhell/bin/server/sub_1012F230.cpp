bool sub_1012F230()
{
  int v1; // eax

  if ( byte_106AEF70 )
  {
    byte_106AEF70 = 0;
    return 1;
  }
  else
  {
    v1 = (*(int (__thiscall **)(int, int, char *, int))(*(_DWORD *)dword_106B31D0 + 224))(
           dword_106B31D0,
           dword_106AEE68,
           &Buffer,
           1204);
    ++dword_106AEE64;
    dword_106AEE68 = v1;
    return v1 != 0;
  }
}
