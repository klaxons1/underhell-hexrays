int __thiscall sub_101A7730(int this)
{
  int v1; // edi

  *(float *)(this + 12) = 0.0;
  *(float *)(this + 16) = 0.0;
  *(_BYTE *)(this + 20) = 1;
  *(_BYTE *)(this + 22) = 0;
  if ( sub_10229D00(32) )
    v1 = sub_10229D20("UnlitGeneric");
  else
    v1 = 0;
  sub_1022ABA0("$basetexture", "_rt_WaterRefraction");
  sub_10233530("__ep1introeffect", "ClientEffect textures", v1);
  return sub_102333B0("_rt_WaterRefraction", "ClientEffect textures", 1);
}
