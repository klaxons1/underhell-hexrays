void __thiscall sub_103C1C70(int *this, int a2, int a3, int a4, int a5)
{
  int *v5; // esi

  v5 = this;
  if ( !a4 )
  {
LABEL_8:
    sub_103C01C0(this);
    return;
  }
  if ( a4 == 1 )
  {
LABEL_7:
    sub_103C0140(this);
    return;
  }
  if ( a4 == 3
    && !(*(unsigned __int8 (__thiscall **)(int *))(*this + 2272))(this)
    && (*(unsigned __int8 (__thiscall **)(int *))(*v5 + 264))(v5) )
  {
    this = v5;
    if ( !*((_BYTE *)v5 + 3735) )
      goto LABEL_7;
    goto LABEL_8;
  }
}
