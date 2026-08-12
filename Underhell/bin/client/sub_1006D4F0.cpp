int __thiscall sub_1006D4F0(_DWORD *this, int a2, int a3)
{
  int result; // eax
  int v4; // edi

  if ( a3 == this[a2 + 1467] )
  {
    this[a2 + 1467] = 0;
    *(float *)&this[a2 + 1493] = 0.0;
    *(float *)&this[a2 + 1501] = 0.0;
  }
  this[a2 + 1485] = a3;
  result = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_104131A8 + 24))(
             dword_104131A8,
             "controlpoint_updateowner",
             0);
  v4 = result;
  if ( result )
  {
    (*(void (__thiscall **)(int, const char *, int))(*(_DWORD *)result + 40))(result, "index", a2);
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_104131A8 + 32))(dword_104131A8, v4);
  }
  return result;
}
