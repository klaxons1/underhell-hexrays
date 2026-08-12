int __thiscall sub_102572C0(unsigned int *this, int a2)
{
  int v2; // edi
  int v4; // ebx
  int v5; // eax
  int v6; // eax
  unsigned int v7; // edx
  int v8; // ebx
  int v9; // eax
  int v10; // eax
  unsigned int v11; // ebx
  int (__thiscall *v12)(unsigned int *, int *, const char *, int); // edx
  _DWORD *v13; // eax
  unsigned int v14; // ebx
  _DWORD *v15; // eax
  unsigned int v16; // ebx
  _DWORD *v17; // eax
  int result; // eax
  unsigned int v19; // ebx
  const char *v20; // eax
  int v21; // eax
  const char *v22; // eax
  int v23; // eax
  _BYTE v24[4]; // [esp+3Ch] [ebp-4h] BYREF

  v2 = a2;
  sub_10241570(this, a2);
  v4 = *(_DWORD *)v2;
  v5 = (*(int (__thiscall **)(unsigned int *))(*this + 84))(this);
  v6 = (*(int (__thiscall **)(int, const char *, int))(v4 + 12))(v2, "Default", v5);
  v7 = *this;
  this[80] = v6;
  v8 = *(_DWORD *)v2;
  v9 = (*(int (__thiscall **)(unsigned int *))(v7 + 84))(this);
  v10 = (*(int (__thiscall **)(int, const char *, int))(v8 + 12))(v2, "DefaultUnderline", v9);
  v11 = *this;
  v12 = *(int (__thiscall **)(unsigned int *, int *, const char *, int))(*this + 328);
  this[81] = v10;
  v13 = (_DWORD *)v12(this, &a2, "RichText.TextColor", v2);
  (*(void (__thiscall **)(unsigned int *, _DWORD))(v11 + 220))(this, *v13);
  v14 = *this;
  v15 = (_DWORD *)(*(int (__thiscall **)(unsigned int *, int *, const char *, int))(*this + 328))(
                    this,
                    &a2,
                    "RichText.BgColor",
                    v2);
  (*(void (__thiscall **)(unsigned int *, _DWORD))(v14 + 216))(this, *v15);
  v16 = *this;
  v17 = (_DWORD *)(*(int (__thiscall **)(unsigned int *, int *))(*this + 228))(this, &a2);
  this[83] = *(_DWORD *)(*(int (__thiscall **)(unsigned int *, _BYTE *, const char *, _DWORD, int))(v16 + 324))(
                          this,
                          v24,
                          "RichText.SelectedTextColor",
                          *v17,
                          v2);
  this[82] = *(_DWORD *)(*(int (__thiscall **)(unsigned int *, int *, const char *, int))(*this + 328))(
                          this,
                          &a2,
                          "RichText.SelectedBgColor",
                          v2);
  result = strlen((const char *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)v2 + 4))(v2, "RichText.InsetX"));
  if ( result )
  {
    v19 = *this;
    v20 = (const char *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)v2 + 4))(v2, "RichText.InsetY");
    v21 = atoi(v20);
    v22 = (const char *)(*(int (__thiscall **)(int, const char *, int))(*(_DWORD *)v2 + 4))(v2, "RichText.InsetX", v21);
    v23 = atoi(v22);
    return (*(int (__thiscall **)(unsigned int *, int))(v19 + 776))(this, v23);
  }
  return result;
}
