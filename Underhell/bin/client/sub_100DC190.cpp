int __thiscall sub_100DC190(_DWORD *this, int a2)
{
  int v3; // edi
  int result; // eax
  int v5; // eax
  float v6; // [esp+4h] [ebp-10h]
  float v7; // [esp+8h] [ebp-Ch]
  int v8; // [esp+8h] [ebp-Ch]

  v3 = *(_DWORD *)dword_10413198;
  v7 = sub_1009E8A0(this + 6);
  v6 = sub_1009E8A0(this + 3);
  *(float *)&v8 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(v3 + 4))(
                    dword_10413198,
                    LODWORD(v6),
                    LODWORD(v7));
  sub_1009E9B0(this, v8);
  result = sub_101BC880();
  if ( (_BYTE)result )
  {
    v5 = (*(int (__thiscall **)(_DWORD *))(*this + 12))(this);
    return sub_101BCA60(v5);
  }
  return result;
}
