void __thiscall sub_101A1AD0(int this, int a2)
{
  _DWORD *v3; // eax
  int v4; // [esp+Ch] [ebp-4h] BYREF

  if ( !*(_BYTE *)(this + 5008) && !*(_BYTE *)(this + 5009) )
  {
    *(float *)(this + 5016) = *(float *)(dword_106B31C8 + 12);
    *(_BYTE *)(this + 5008) = 1;
    v4 = 4;
    sub_10031670((_DWORD *)(this + 848), &v4);
    sub_1023C380((int)"NPC_ACE.Cloak", 0.0, 0);
    sub_101AB3B0((int)"electrical_arc_01_system", 4, this, "hips", 0);
    sub_100EAB80((_DWORD *)this, 16);
    v3 = (_DWORD *)sub_100CF460((_DWORD *)this);
    if ( v3 )
      sub_100EAB80(v3, 32);
  }
}
