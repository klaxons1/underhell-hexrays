int __cdecl sub_10174C80(int a1)
{
  int v1; // eax
  int v2; // eax
  float v4[3]; // [esp+14h] [ebp-Ch] BYREF

  sub_1022A940("originx", 0.0);
  v4[0] = 0.0;
  sub_1022A940("originy", 0.0);
  v4[1] = 0.0;
  sub_1022A940("originz", 0.0);
  v4[2] = 0.0;
  v1 = sub_1022B4C0("decalname", (int)Locale);
  v2 = (**(int (__thiscall ***)(int, int))dword_10413164)(dword_10413164, v1);
  return sub_10174C00(a1, COERCE_INT(0.0), v4, v2);
}
