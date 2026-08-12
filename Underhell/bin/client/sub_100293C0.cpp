void *__thiscall sub_100293C0(void *this, int a2, int a3, void *a4, float a5)
{
  void (__thiscall *v6)(void *, _DWORD); // eax
  int v7; // ecx
  double v8; // st7
  void (__thiscall *v9)(void *, _DWORD); // eax
  int v10; // ecx
  double v11; // st7
  int v12; // ecx
  float v13; // edx
  void (__thiscall *v14)(void *, _DWORD); // eax
  float v16; // [esp+2Ch] [ebp-Ch]
  float v17; // [esp+2Ch] [ebp-Ch]
  float v18; // [esp+4Ch] [ebp+14h]
  float v19; // [esp+4Ch] [ebp+14h]
  float v20; // [esp+4Ch] [ebp+14h]

  v6 = *(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 380);
  v18 = *((float *)off_103DC81C + 3) - a5;
  v7 = dword_10403664 - 1;
  *((float *)this + 475) = -3.4028235e38;
  *((_DWORD *)this + 316) = v7;
  v6(this, LODWORD(v18));
  (*(void (__thiscall **)(int, int, int, int, _DWORD))(*((_DWORD *)this + 1) + 64))(
    (int)this + 4,
    a2,
    128,
    524032,
    LODWORD(v18));
  v8 = *((float *)off_103DC81C + 3);
  v19 = *((float *)off_103DC81C + 3);
  v9 = *(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 380);
  v10 = dword_10403664 - 1;
  *((float *)this + 475) = -3.4028235e38;
  *((_DWORD *)this + 316) = v10;
  v16 = v8;
  v9(this, LODWORD(v16));
  (*(void (__thiscall **)(int, int, int, int, _DWORD))(*((_DWORD *)this + 1) + 64))(
    (int)this + 4,
    a3,
    128,
    524032,
    LODWORD(v19));
  v11 = sub_100F6040();
  if ( *((float *)off_103DC81C + 3) == v11 )
    return memcpy_0(a4, *((const void **)this + 469), 48 * *((_DWORD *)this + 472));
  v12 = dword_10403664;
  v13 = *(float *)this;
  *((float *)this + 475) = -3.4028235e38;
  v14 = *(void (__thiscall **)(void *, _DWORD))(LODWORD(v13) + 380);
  *((_DWORD *)this + 316) = v12 - 1;
  v17 = v11;
  v14(this, LODWORD(v17));
  v20 = v11;
  return (void *)(*(int (__thiscall **)(int, void *, int, int, _DWORD))(*((_DWORD *)this + 1) + 64))(
                   (int)this + 4,
                   a4,
                   128,
                   524032,
                   LODWORD(v20));
}
