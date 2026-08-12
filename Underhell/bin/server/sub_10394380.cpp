float *__thiscall sub_10394380(int *this, float *a2, int a3)
{
  int v4; // eax
  int v5; // eax

  if ( (*(int (__thiscall **)(int *))(*this + 368))(this)
    && (v4 = (*(int (__thiscall **)(int *))(*this + 368))(this),
        (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 220))(v4) == 19)
    && (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 1, 3) == 1 )
  {
    v5 = (*(int (__thiscall **)(int *))(*this + 368))(this);
    (*(void (__thiscall **)(int, float *, int))(*(_DWORD *)v5 + 524))(v5, a2, a3);
    return a2;
  }
  else
  {
    sub_100283A0(this, a2, a3);
    return a2;
  }
}
