int __thiscall sub_100AC390(_DWORD *this, const char *a2)
{
  int v3; // edi
  int v4; // edi
  const char *v6; // eax
  float v7; // [esp+0h] [ebp-1Ch]
  int v8; // [esp+4h] [ebp-18h]
  int v9; // [esp+Ch] [ebp-10h]

  v3 = *(_DWORD *)(this[1] + 24);
  v9 = this[2];
  v8 = (*(int (__thiscall **)(_DWORD *))(*this + 20))(this);
  v7 = ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*this + 16))(this);
  v4 = sub_10238FF0(v3, (int)a2, v7, v8, 0, v9);
  if ( v4 >= 0 )
  {
    v6 = (const char *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 128))(dword_106B31D0, v4);
    sub_100AC150(this, "Speaking", v6);
    return v4;
  }
  else
  {
    sub_100AC150(this, "BOGUS", a2);
    return -1;
  }
}
