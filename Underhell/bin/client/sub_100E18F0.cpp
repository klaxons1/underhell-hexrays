bool __stdcall sub_100E18F0(_DWORD *a1)
{
  if ( *((_DWORD *)off_103DCD78 + 1) )
    return *a1 == *((_DWORD *)off_103DCD78 + 2) << 12;
  else
    return *a1 == -1;
}
