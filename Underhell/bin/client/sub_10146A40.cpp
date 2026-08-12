int __thiscall sub_10146A40(int this, const void *a2)
{
  int v3; // esi

  sub_10145000((_DWORD *)this, a2);
  if ( sub_10229D00(32) )
    v3 = sub_10229D20("UnlitGeneric");
  else
    v3 = 0;
  sub_1022ABA0("$basetexture", "_rt_FullScreen");
  sub_1022ACA0("$nocull", 1);
  sub_1022ACA0("$nofog", 1);
  sub_1022ACA0("$ignorez", 1);
  sub_10233530("FreezeFrame_FullScreen", "Other textures", v3);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 156) + 148))(*(_DWORD *)(this + 156));
  return sub_102334D0("debug/debugtranslucentsinglecolor", "Other textures", 1);
}
