int __thiscall sub_10019370(int *this, char a2)
{
  int result; // eax
  int v4; // edi
  int v5; // eax

  sub_1001E570(this, a2);
  result = (*(int (__thiscall **)(int *))(*this + 368))(this);
  if ( result )
  {
    v4 = *this;
    v5 = (*(int (__thiscall **)(int *, _DWORD, _DWORD, _DWORD))(*this + 368))(this, 1.0, 0.5, 0.2);
    return (*(int (__thiscall **)(int *, int))(v4 + 1808))(this, v5);
  }
  return result;
}
