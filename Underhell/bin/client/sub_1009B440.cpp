char __stdcall sub_1009B440(int (__thiscall ***a1)(_DWORD), int a2)
{
  const char *v2; // eax

  v2 = (const char *)(**a1)(a1);
  DevMsg(1, "CDummyMaterialProxy::Init( material = \"%s\" )\n", v2);
  return 1;
}
