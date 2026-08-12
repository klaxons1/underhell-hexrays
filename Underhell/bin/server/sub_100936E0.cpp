bool __thiscall sub_100936E0(int *this, char *a2, char a3, char a4)
{
  int v5; // eax
  int v6; // edi

  v5 = *this;
  if ( !a3 )
    return (*(unsigned __int8 (__thiscall **)(int *, char *, _DWORD, int, _DWORD, _DWORD))(v5 + 2344))(
             this,
             a2,
             0,
             1,
             0,
             0) != 0;
  (*(void (**)(void))(v5 + 1656))();
  v6 = sub_100AD3C0(a2, 0);
  if ( !v6 )
    return 0;
  if ( a4 )
    sub_10227360(this, 0, 0, 0);
  (*(void (__thiscall **)(int *))(*this + 1656))(this);
  if ( !(unsigned __int8)sub_100B0150((char)a2, v6, 0) )
    return 0;
  (*(void (__thiscall **)(int *, char *, int))(*this + 2248))(this, a2, v6);
  return 1;
}
