void __thiscall sub_102BC720(int this)
{
  int v2; // edi
  float v3; // [esp+0h] [ebp-10h]

  if ( !*(_BYTE *)(this + 1283) )
  {
    v2 = sub_100BDF40(this, "open");
    if ( v2 == -1 )
    {
      sub_102BC610(this);
    }
    else
    {
      sub_1023C380((_DWORD *)this, (int)"HeadcrabCanister.Open", 0.0, 0);
      sub_100C3330(this, v2);
      v3 = *(float *)(dword_106B31C8 + 12) + 0.0099999998;
      sub_100EC3F0((_DWORD *)this, (int)sub_102BC6C0, v3, off_106614D8);
    }
  }
}
