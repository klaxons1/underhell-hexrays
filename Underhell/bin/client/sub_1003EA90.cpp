void __thiscall sub_1003EA90(int *this)
{
  int *v1; // esi
  _DWORD *v2; // eax

  if ( this[307] >= 0 )
  {
    v1 = this - 1;
    if ( !this[484] && (*(int (__thiscall **)(int *))(*this + 36))(this) )
      sub_10026520((int)v1);
    v2 = (_DWORD *)v1[485];
    if ( v2 )
    {
      if ( *v2 )
        (*(void (__thiscall **)(int *))(*v1 + 736))(v1);
    }
  }
}
