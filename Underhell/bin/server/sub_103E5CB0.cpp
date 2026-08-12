int __thiscall sub_103E5CB0(int this)
{
  int v2; // edx
  int result; // eax

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, "models/props_junk/cardboard_box001a.mdl");
  sub_100EAB80((_DWORD *)this, 32);
  sub_10112C00(this + 320, 6);
  sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 4);
  sub_100E9630((float *)this, 0, 0, 0);
  sub_100E0970(this, v2, 0, 0);
  result = j_nullsub_4((void *)this);
  *(_DWORD *)(this + 1120) = 0;
  return result;
}
