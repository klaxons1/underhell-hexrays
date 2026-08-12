int __thiscall sub_101FE360(int *this)
{
  int v2; // eax
  int result; // eax
  float v4; // [esp+4h] [ebp-10h]

  nullsub_4();
  v2 = CommandLine_Tier0();
  if ( !(*(int (__thiscall **)(int, const char *))(*(_DWORD *)v2 + 40))(v2, "-makedevshots") )
    return sub_1025FAC0(this);
  sub_100EC3F0(this, (int)sub_101FE210, 0.0, 0);
  v4 = *(float *)(dword_106B31C8 + 12) + 5.0 + (double)(5 * dword_106C13C0);
  result = sub_100EC4A0(this, v4, 0);
  ++dword_106C13C0;
  return result;
}
