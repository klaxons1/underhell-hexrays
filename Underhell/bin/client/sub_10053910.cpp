int __thiscall sub_10053910(_DWORD **this)
{
  int v2; // edi
  int v3; // edi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax

  if ( sub_10229D00(32) )
    v2 = sub_10229D20("VertexLitGeneric");
  else
    v2 = 0;
  sub_1022ABA0("$basetexture", "vgui/white");
  sub_1022ACA0("$selfillum", 1);
  sub_1022ABA0("$selfillummask", "vgui/white");
  sub_1022ACA0("$vertexalpha", 1);
  sub_1022ACA0("$model", 1);
  sub_10233530("__geglowwhite", "ClientEffect textures", v2);
  (*(void (__thiscall **)(_DWORD *))(*this[9] + 148))(this[9]);
  if ( sub_10229D00(32) )
    v3 = sub_10229D20("UnlitGeneric");
  else
    v3 = 0;
  sub_1022ABA0("$basetexture", "_rt_FullFrameFB");
  sub_1022ACA0("$additive", 1);
  sub_10233530("__geglowcomposite", "ClientEffect textures", v3);
  (*(void (__thiscall **)(_DWORD *))(*this[10] + 148))(this[10]);
  v4 = (*(int (__thiscall **)(int, const char *, const char *, int))(*(_DWORD *)dword_1047C96C + 304))(
         dword_1047C96C,
         "dev/_rt_geglowbuff1",
         "RenderTargets",
         1);
  sub_10233410(v4);
  v5 = (*(int (__thiscall **)(int, const char *, const char *, int))(*(_DWORD *)dword_1047C96C + 304))(
         dword_1047C96C,
         "dev/_rt_geglowbuff2",
         "RenderTargets",
         1);
  sub_10233410(v5);
  v6 = (*(int (__thiscall **)(int, const char *, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
         dword_1047C96C,
         "pp/ge_blurx",
         "Other textures",
         1,
         0);
  sub_10233300(v6);
  v7 = (*(int (__thiscall **)(int, const char *, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
         dword_1047C96C,
         "pp/ge_blury",
         "Other textures",
         1,
         0);
  return sub_10233300(v7);
}
