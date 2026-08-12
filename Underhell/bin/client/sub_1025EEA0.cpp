int __thiscall sub_1025EEA0(int this, int (__thiscall ***a2)(_DWORD), char *Source, const char *a4)
{
  sub_10243490((int *)this, a2, Source);
  *(_DWORD *)this = &vgui::CBitmapImagePanel::`vftable';
  *(_DWORD *)(this + 216) = 0;
  *(_DWORD *)(this + 212) = 0;
  sub_10236200((int (__thiscall ***)(void *, int, int))this, 0, 0, 100, 100);
  *(_DWORD *)(this + 220) = 0;
  *(_DWORD *)(this + 224) = 0;
  *(_BYTE *)(this + 209) = 0;
  *(_BYTE *)(this + 208) = 0;
  *(_DWORD *)(this + 204) = 4;
  if ( a4 && *a4 )
  {
    *(_DWORD *)(this + 212) = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_1047CA7C + 24))(
                                dword_1047CA7C,
                                a4,
                                0);
    *(_DWORD *)(this + 220) = sub_1025E6A0(a4);
  }
  *(_DWORD *)(this + 216) = -1;
  return this;
}
