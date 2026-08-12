int __thiscall sub_102F6150(_DWORD *this, int a2)
{
  int v3; // ebx
  int v4; // eax
  int v5; // eax
  _DWORD *v6; // eax
  float *v7; // edi
  float *v8; // eax
  double v9; // st4
  double v10; // st6
  double v11; // st4
  double v12; // st5
  double v13; // st6

  v3 = sub_100C9AF0(this, a2);
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 220))(a2) == 4 )
  {
    v4 = sub_100D7680(a2);
    if ( v4 )
    {
      v5 = *(_DWORD *)(v4 + 2372);
      if ( v5 == dword_106E2970 || v5 == dword_106E296C )
      {
        if ( !(*(int (__thiscall **)(_DWORD *))(*this + 368))(this) )
          goto LABEL_8;
        if ( (*(int (__thiscall **)(_DWORD *))(*this + 368))(this) == a2 )
          goto LABEL_8;
        v6 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
        v7 = (float *)sub_10019640(v6);
        v8 = (float *)sub_10019640(this);
        v9 = v8[1] - v7[1];
        v10 = v9 * v9;
        v11 = *v8 - *v7;
        v12 = v10;
        v13 = v8[2] - v7[2];
        if ( v11 * v11 + v12 + v13 * v13 >= 32400.0 )
LABEL_8:
          ++v3;
      }
    }
  }
  return v3;
}
