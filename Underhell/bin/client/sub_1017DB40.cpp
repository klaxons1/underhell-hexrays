void __thiscall sub_1017DB40(int this)
{
  float v2[3]; // [esp+4h] [ebp-18h] BYREF
  float v3[3]; // [esp+10h] [ebp-Ch] BYREF

  nullsub_4();
  if ( *(_BYTE *)(this + 2868) )
  {
    sub_101F5960(this);
    v3[0] = 0.0;
    v3[1] = 0.0;
    v3[2] = 0.0;
    sub_101F5930(v3);
    sub_101F5E90(&flt_10459240, &flt_1045924C);
    sub_101F4560(this + 2844, this + 2856);
  }
  if ( *(_BYTE *)(this + 2872) )
  {
    if ( (unsigned __int8)sub_101F44A0(v2, v3) )
      sub_1017D3C0((float *)this, v2, v3);
  }
}
