wchar_t *__stdcall sub_10257410(LPCCH lpMultiByteStr, wchar_t *Destination, unsigned int a3)
{
  int v3; // eax
  const wchar_t *v4; // eax

  if ( *lpMultiByteStr != 35
    || (v3 = (*(int (__thiscall **)(int, LPCCH))(*(_DWORD *)dword_1047CA78 + 20))(dword_1047CA78, lpMultiByteStr + 1),
        v3 == -1) )
  {
    sub_10228590(lpMultiByteStr, Destination, a3);
    return Destination;
  }
  else
  {
    v4 = (const wchar_t *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA78 + 40))(dword_1047CA78, v3);
    wcsncpy(Destination, v4, a3 >> 1);
    return Destination;
  }
}
