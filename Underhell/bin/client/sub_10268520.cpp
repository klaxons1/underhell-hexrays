int __thiscall sub_10268520(int *this, int a2)
{
  int v2; // edi
  int v4; // ebx
  _DWORD *v5; // eax
  int *v6; // eax
  int v8; // [esp+38h] [ebp-18h]
  char v9; // [esp+40h] [ebp-10h]
  char v10[4]; // [esp+4Ch] [ebp-4h] BYREF

  v2 = a2;
  sub_1024AB70((int)this, a2, v9);
  *(int *)((char *)this + 299) = *(_DWORD *)(*(int (__thiscall **)(int *, int *, const char *, int))(*this + 328))(
                                              this,
                                              &a2,
                                              "ListPanel.SelectedTextColor",
                                              v2);
  *(int *)((char *)this + 303) = *(_DWORD *)(*(int (__thiscall **)(int *, int *, const char *, int))(*this + 328))(
                                              this,
                                              &a2,
                                              "ListPanel.SelectedBgColor",
                                              v2);
  *(int *)((char *)this + 287) = *(_DWORD *)(*(int (__thiscall **)(int *, int *, const char *, int))(*this + 328))(
                                              this,
                                              &a2,
                                              "ListPanel.TextColor",
                                              v2);
  *(int *)((char *)this + 291) = *(_DWORD *)(*(int (__thiscall **)(int *, int *, const char *, int))(*this + 328))(
                                              this,
                                              &a2,
                                              "ListPanel.SelectedTextColor",
                                              v2);
  v4 = *this;
  v5 = (_DWORD *)(*(int (__thiscall **)(int *, int *))(*this + 224))(this, &a2);
  v6 = (int *)(*(int (__thiscall **)(int *, char *, const char *, _DWORD, int))(v4 + 324))(
                this,
                v10,
                "ListPanel.BgColor",
                *v5,
                v2);
  v8 = *v6;
  *(int *)((char *)this + 295) = *v6;
  *(int *)((char *)this + 295) = *(_DWORD *)(*(int (__thiscall **)(int *, int *, const char *, int, int))(*this + 324))(
                                              this,
                                              &a2,
                                              "ListPanel.TextBgColor",
                                              v8,
                                              v2);
  *(int *)((char *)this + 307) = *(_DWORD *)(*(int (__thiscall **)(int *, int *, const char *, int))(*this + 328))(
                                              this,
                                              &a2,
                                              "ListPanel.SelectedOutOfFocusBgColor",
                                              v2);
  (*(void (__thiscall **)(int *, _DWORD))(*this + 216))(this, *(int *)((char *)this + 295));
  (*(void (__thiscall **)(int *, _DWORD))(*this + 220))(this, *(int *)((char *)this + 287));
  return sub_10267E30(this, v4, v2);
}
