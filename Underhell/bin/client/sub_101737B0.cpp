void __usercall sub_101737B0(int a1@<edi>, int a2, int a3, int a4)
{
  int v4; // eax
  int v5; // eax
  float v6[3]; // [esp+1Ch] [ebp-1Ch] BYREF
  float v7[4]; // [esp+28h] [ebp-10h] BYREF
  int savedregs; // [esp+38h] [ebp+0h] BYREF

  sub_1022A940("originx", 0.0);
  v6[0] = 0.0;
  sub_1022A940("originy", 0.0);
  v6[1] = 0.0;
  sub_1022A940("originz", 0.0);
  v6[2] = 0.0;
  sub_1022A940("anglesx", 0.0);
  v7[0] = 0.0;
  sub_1022A940("anglesy", 0.0);
  v7[1] = 0.0;
  sub_1022A940("anglesz", 0.0);
  v7[2] = 0.0;
  sub_1022A940("distance", 0.0);
  v7[3] = 0.0;
  v4 = sub_1022B4C0("decalname", (int)Locale);
  v5 = (**(int (__thiscall ***)(int, int))dword_10413164)(dword_10413164, v4);
  sub_10173610((int)&savedregs, a1, a4, a2, COERCE_INT(0.0), v6, v7, 0.0, v5);
}
