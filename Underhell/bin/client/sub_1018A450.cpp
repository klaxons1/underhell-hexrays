int __thiscall sub_1018A450(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // eax
  _DWORD *v5; // ecx
  int v6; // eax
  int v7; // ecx

  result = sub_10236340(this - 107);
  if ( (_BYTE)result != (_BYTE)a2 )
  {
    v4 = *(this - 107);
    v5 = this - 107;
    if ( (_BYTE)a2 )
    {
      (*(void (__thiscall **)(_DWORD *))(v4 + 872))(v5);
      (*(void (__thiscall **)(_DWORD *, int))(*(this - 107) + 520))(this - 107, 1);
      if ( this[5] == -1 )
        this[5] = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_104131A4 + 8))(dword_104131A4, "jump");
      if ( this[6] == -1 )
      {
        v6 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_104131A4 + 8))(dword_104131A4, "showscores");
        v7 = this[2];
        this[6] = v6;
        return (*(int (__thiscall **)(int, int))(*(_DWORD *)v7 + 12))(v7, a2);
      }
    }
    else
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD))(v4 + 124))(v5, 0);
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*(this - 107) + 520))(this - 107, 0);
    }
    return (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)this[2] + 12))(this[2], a2);
  }
  return result;
}
