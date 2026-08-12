int __thiscall sub_1027A9E0(int this, int a2)
{
  int v2; // edi
  unsigned int v4; // ebx
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  void (__thiscall **v7)(int, int); // ebx
  int v8; // eax
  int result; // eax
  int v10; // ecx
  int v11; // eax
  _BYTE v12[4]; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2;
  sub_10241570((unsigned int *)this, a2);
  v4 = *(_DWORD *)this;
  v5 = (_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)this + 224))(this, &a2);
  v6 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *, const char *, _DWORD, int))(v4 + 324))(
                   this,
                   v12,
                   "SectionedListPanel.BgColor",
                   *v5,
                   v2);
  (*(void (__thiscall **)(int, _DWORD))(v4 + 216))(this, *v6);
  v7 = (void (__thiscall **)(int, int))(*(_DWORD *)this + 252);
  v8 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v2 + 8))(v2, "ButtonDepressedBorder");
  (*v7)(this, v8);
  result = *(_DWORD *)(this + 244);
  if ( result != -1 )
  {
    v10 = *(_DWORD *)(this + 232);
    do
    {
      v11 = 12 * result;
      *(_BYTE *)(*(_DWORD *)(v11 + v10) + 354) = *(_BYTE *)(this + 356);
      v10 = *(_DWORD *)(this + 232);
      result = *(_DWORD *)(v11 + v10 + 8);
    }
    while ( result != -1 );
  }
  return result;
}
