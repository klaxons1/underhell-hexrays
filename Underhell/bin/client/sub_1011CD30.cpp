bool __thiscall sub_1011CD30(void *this)
{
  int v3; // eax
  bool v4; // bl
  int v5; // eax
  int v6; // esi
  bool v7; // zf

  if ( !*((_DWORD *)this + 4) )
    return 0;
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)(*((_DWORD *)this + 4) + 4) + 36))(*((_DWORD *)this + 4) + 4);
  v4 = v3 != 0;
  if ( !v3 )
    goto LABEL_11;
  if ( !strlen((const char *)this + 20) )
    goto LABEL_10;
  if ( !dword_10413178 )
  {
    v6 = 0;
    goto LABEL_8;
  }
  v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 156))(dword_10413178, (int)this + 20);
  v6 = v5;
  v7 = v5 == 0;
  if ( v5 )
  {
    sub_10039390(*((_WORD **)this + 4), v5);
LABEL_8:
    v7 = v6 == 0;
  }
  v4 = !v7;
LABEL_10:
  if ( !v4 )
LABEL_11:
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 4))(this);
  return v4;
}
