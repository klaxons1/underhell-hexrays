int __thiscall sub_1006D570(_DWORD *this, int a2, int a3)
{
  int v3; // edx
  double v4; // st7
  int result; // eax
  int v6; // edi
  float v7; // [esp+0h] [ebp-Ch]

  if ( a2 < this[300] )
    v3 = this[a2 + 1485];
  else
    v3 = 0;
  if ( a3 == v3 || a3 <= 1 )
    v4 = 0.0;
  else
    v4 = *(float *)&this[8 * a3 + 539 + a2];
  *(float *)&this[a2 + 1493] = v4;
  this[a2 + 1467] = a3;
  *((_BYTE *)this + a2 + 6036) = 0;
  *(float *)&this[a2 + 1501] = *((float *)off_103DC81C + 3);
  v7 = *((float *)off_103DC81C + 3) + 0.1;
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 408))(this, LODWORD(v7));
  result = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_104131A8 + 24))(
             dword_104131A8,
             "controlpoint_updatecapping",
             0);
  v6 = result;
  if ( result )
  {
    (*(void (__thiscall **)(int, const char *, int))(*(_DWORD *)result + 40))(result, "index", a2);
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_104131A8 + 32))(dword_104131A8, v6);
  }
  return result;
}
